#include "mytcpserverDT.h"
#include <QDebug>
#include <QCoreApplication>

// nc localhost 3000

MyTcpServerDT::MyTcpServerDT(QObject *parent,int port) : QObject(parent)
{
    mServer = new QTcpServer(this);
    portNumber = port;

    connect(mServer, &QTcpServer::newConnection, this, &MyTcpServerDT::slotNewConnection);

    if(!mServer->listen(QHostAddress::Any, port)){
        qDebug() << "server is not started";
    } else {
        qDebug() << "server is started";
    }
}

MyTcpServerDT::~MyTcpServerDT()
{
    foreach (QTcpSocket* socket, socketList)
    {
        socket->close();
        socket->deleteLater();
    }
    mServer->close();
    mServer->deleteLater();
}


void MyTcpServerDT::write(QByteArray data) //QString
{
    foreach (QTcpSocket* socket, socketList)
    {
        socket->write((data)); //.toUtf8()
    }
}


void MyTcpServerDT::slotNewConnection()
{
//    mTcpSocket = mTcpServer->nextPendingConnection();// initial version

    while (mServer->hasPendingConnections())// for multiple connections
        appendToSocketList(mServer->nextPendingConnection());

// обработка всех сокетов в листе:
//    foreach (QTcpSocket* socket, socketList)
//    {
//        socket->socketOption(QAbstractSocket::KeepAliveOption);

//        qDebug()<< "peerAddress is " << socket->peerAddress();

//        connect(socket, &QTcpSocket::readyRead, this, &MyTcpServerDT::slotServerRead);
//        connect(socket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(onSocketStateChanged(QAbstractSocket::SocketState)));
////        connect(socket,SIGNAL(disconnected()),this,SLOT(clientDisconnected()));

//        emit sendNewConnection(portNumber, socket->peerAddress());
//    }

    // обрабатываю последний сокет only:
    if (!socketList.isEmpty())
    {
        socketList.last()->socketOption(QAbstractSocket::KeepAliveOption);

        qDebug()<< "peerAddress is " << socketList.last()->peerAddress();

        connect(socketList.last(), &QTcpSocket::readyRead, this, &MyTcpServerDT::slotServerRead);
        // old style connection:
//        connect(socketList.last(), SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(onSocketStateChanged(QAbstractSocket::SocketState)));
        // new style connection:
        connect(socketList.last(), &QAbstractSocket::stateChanged, this, &MyTcpServerDT::onSocketStateChanged);

        emit sendNewConnection(portNumber, socketList.last()->peerAddress());
    }
}


void MyTcpServerDT::slotServerRead()
{
    QByteArray array;
    foreach (QTcpSocket* socket, socketList)
    {
        while(socket->bytesAvailable() > 0)
        {
            array  = socket->readAll();
        }
        emit sendDataTo(array);
    }
}


void MyTcpServerDT::onSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    if (socketState == QAbstractSocket::UnconnectedState)
    {
        QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());
        socketList.removeOne(sender);

        emit clientIsDisconnected();
    }
}


//void MyTcpServerDT::clientDisconnected()
//{
//    emit clientIsDisconnected();
//    qDebug() << "disconnected";// initial version
////    socket->deleteLater();// вероятно, уже не надо
//}


void MyTcpServerDT::appendToSocketList(QTcpSocket *socket)
{
    socketList.push_back(socket);
    connect(socket, &QTcpSocket::readyRead, this, &MyTcpServerDT::slotServerRead);
//    connect(socket, &QTcpSocket::disconnected, this, &MyTcpServerDT::clientDisconnected);
//    connect(socket, &QAbstractSocket::errorOccurred, this, &MyTcpServerDT::displayError);
//    displayMessage(QString("INFO :: Client with sockd:%1 has just entered the room").arg(socket->socketDescriptor()));
}

const QList<QTcpSocket *> &MyTcpServerDT::getSocketList() const
{
    return socketList;
}




