#ifndef MYTCPSERVERDT_H
#define MYTCPSERVERDT_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QAbstractSocket>
#include <QTimer>

class MyTcpServerDT : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServerDT(QObject *parent = 0, int port=6000);

    ~MyTcpServerDT();// for multiple connections

    QTcpSocket * mSocket;

    QList<QTcpSocket*> socketList;// for multiple connections
    int portNumber;
    QByteArray array;

    void write(QByteArray data);
    void moveIter(int &iter, int n);

    QTimer* timeoutTimer = nullptr;

    void displayMessage(const QString& str);

    const QList<QTcpSocket *> &getSocketList() const;// for multiple connections

public slots:
    void slotNewConnection();
    void slotServerRead();

    void onSocketStateChanged(QAbstractSocket::SocketState socketState);
    //    void clientDisconnected();

    void appendToSocketList(QTcpSocket* socket);// for multiple connections


signals:
    void sendNewConnection(int port, QHostAddress addr);
    void sendDataTo(QByteArray data);

    void clientIsDisconnected();

private:
    QTcpServer * mServer;



};

#endif // MYTCPSERVERDT_H
