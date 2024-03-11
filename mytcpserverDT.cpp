#include "mytcpserverDT.h"
#include <QDebug>
#include <QCoreApplication>


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


void MyTcpServerDT::write(QByteArray data)
{
    foreach (QTcpSocket* socket, socketList)
    {
        socket->write((data)); //.toUtf8()
    }
}


void MyTcpServerDT::slotNewConnection()
{
    while (mServer->hasPendingConnections())// for multiple connections
        appendToSocketList(mServer->nextPendingConnection());

    // last сокет only:
    if (!socketList.isEmpty())
    {
        socketList.last()->socketOption(QAbstractSocket::KeepAliveOption);

        qDebug()<< "peerAddress is " << socketList.last()->peerAddress();

        connect(socketList.last(), &QTcpSocket::readyRead, this, &MyTcpServerDT::slotServerRead);
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



void MyTcpServerDT::appendToSocketList(QTcpSocket *socket)
{
    socketList.push_back(socket);
    connect(socket, &QTcpSocket::readyRead, this, &MyTcpServerDT::slotServerRead);
}

const QList<QTcpSocket *> &MyTcpServerDT::getSocketList() const
{
    return socketList;
}




