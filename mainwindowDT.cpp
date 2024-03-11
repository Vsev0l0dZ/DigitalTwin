#include "mainwindowDT.h"
#include "ui_mainwindowDT.h"
#include "mytcpserverDT.h"
#include "parameters.h"

#include <QDebug>


MainWindowDT::MainWindowDT(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowDT)
{
    ui->setupUi(this);

    timerUpdate = new QTimer(nullptr);
    connect(timerUpdate, &QTimer::timeout, this, &MainWindowDT::timerUpdateData);

    nextMove = new Parameters();

    connect(this, &MainWindowDT::sendCommand, nextMove, &Parameters::parserInbox);

    ui->pushButtonSendCommand->setShortcut(Qt::Key_Return);

    connect(nextMove, &Parameters::sendPitch, this, &MainWindowDT::on_pitchValueChanged);
    connect(nextMove, &Parameters::sendRollGlider, this, &MainWindowDT::on_rollValueChanged);
    connect(nextMove, &Parameters::sendYaw, this, &MainWindowDT::on_yawValueChanged);
    connect(nextMove, &Parameters::sendDepth, this, &MainWindowDT::on_depthValueChanged);
    connect(nextMove, &Parameters::sendMIP, this, &MainWindowDT::on_mipValueChanged);
    connect(nextMove, &Parameters::sendMID, this, &MainWindowDT::on_midValueChanged);
    connect(nextMove, &Parameters::sendRollMotor, this, &MainWindowDT::on_rollMotorValueChanged);
    connect(nextMove, &Parameters::sendRudder, this, &MainWindowDT::on_rudderValueChanged);
    connect(nextMove, &Parameters::sendLat, this, &MainWindowDT::on_latValueChanged);
    connect(nextMove, &Parameters::sendLon, this, &MainWindowDT::on_lonValueChanged);
}

MainWindowDT::~MainWindowDT()
{
    delete ui;
}


void MainWindowDT::on_pushButtonStartServer_clicked()
{
    myServer = new MyTcpServerDT(nullptr, ui->lineEditPort->text().toInt());
    connect(myServer, SIGNAL(sendNewConnection(int,QHostAddress)), this, SLOT(getConnectState(int,QHostAddress)));
    connect(myServer, SIGNAL(sendDataTo(QByteArray)), this, SLOT(getDataFromServer(QByteArray)));
    connect(myServer, SIGNAL(clientIsDisconnected()), this, SLOT(stopTimer()));
}

void MainWindowDT::getConnectState(int port, QHostAddress addr)
{
    qDebug() << "new connection port = "<< port << " ip =" << addr;

    if(!timerUpdate->isActive())
    {
        timerUpdate->start((int)nextMove->getTimerDelta());
    }
}


void MainWindowDT::getDataFromServer(QByteArray data)
{
    qDebug() << data;
    nextMove->parserInbox(data);
}


void MainWindowDT::timerUpdateData()
{
    nextMove->recalculateMotors();
    nextMove->recalculatePosition();
    nextMove->Parameters::setNmeaString();

    float pitch = nextMove->getPitch();
    emit nextMove->sendPitch(pitch);

    float rollGlider = nextMove->getRollGlider();
    emit nextMove->sendRollGlider(rollGlider);

    float yaw = nextMove->getYaw();
    emit nextMove->sendYaw(yaw);

    float depth = nextMove->getDepth();
    emit nextMove->sendDepth(depth);

    uint8_t currentMIP = nextMove->getCurrentMIP();
    emit nextMove->sendMIP(currentMIP);

    int8_t currentMID = nextMove->getCurrentMID();
    emit nextMove->sendMID(currentMID);

    int8_t rollMotor = nextMove->getRollMotor();
    emit nextMove->sendRollMotor(rollMotor);

    int8_t currentRudder = nextMove->getCurrentRudder();
    emit nextMove->sendRudder(currentRudder);

    double lat = nextMove->getLat();
    emit nextMove->sendLat(lat);

    double lon = nextMove->getLon();
    emit nextMove->sendLon(lon);

    foreach (QTcpSocket* mSocket, myServer->getSocketList())
    {
        if(mSocket->isValid())
        {
            // сигнатура specially for парсер FNode/impl/communication/simulation_controller
            myServer->write("set digtwin " + QByteArray(nextMove->getNmeaString().toUtf8()));
        }
        qDebug() << nextMove->getNmeaString().toUtf8();
    }
}

void MainWindowDT::stopTimer()
{
    qDebug() << "Timer stopped!";
    timerUpdate->stop();

    foreach (QTcpSocket* mSocket, myServer->getSocketList())
    {
        mSocket->close();
    }
}


void MainWindowDT::on_pushButtonSendCommand_clicked()
{
    QString command;
    command = ui->lineEditCommand->text();
    nextMove->parserInbox(QByteArray(command.toUtf8()));
}


void MainWindowDT::on_pushButtonTimerDelta_clicked()
{
    if(timerUpdate->isActive())
    {
        timerUpdate->stop();
    }

    QString newTimerDelta;
    newTimerDelta = ui->lineEditTimerDelta->text();
    nextMove->setTimerDelta(newTimerDelta.toDouble());

    if(!timerUpdate->isActive())
    {
        timerUpdate->start((int)nextMove->getTimerDelta());
    }
}


void MainWindowDT::on_pitchValueChanged(float pitch)
{
    ui->pitchValue->setText(QString::number(pitch));
}


void MainWindowDT::on_rollValueChanged(float rollGlider)
{
    ui->rollValue->setText(QString::number(rollGlider));
}


void MainWindowDT::on_yawValueChanged(float yaw)
{
    ui->yawValue->setText(QString::number(yaw));
}


void MainWindowDT::on_depthValueChanged(float depth)
{
    ui->depthValue->setText(QString::number(depth));
}


void MainWindowDT::on_mipValueChanged(uint8_t mip)
{
    ui->mipValue->setText(QString::number(mip));
}

void MainWindowDT::on_midValueChanged(int8_t mid)
{
    ui->midValue->setText(QString::number(mid));
}


void MainWindowDT::on_rudderValueChanged(int8_t rudder)
{
    ui->rudderValue->setText(QString::number(rudder));
}


void MainWindowDT::on_latValueChanged(double lat)
{
    ui->latValue->setText(QString::number(lat));
}


void MainWindowDT::on_lonValueChanged(double lon)
{
    ui->lonValue->setText(QString::number(lon));
}


void MainWindowDT::on_rollMotorValueChanged(int8_t rollMotor)
{
    ui->rollMotorValue->setText(QString::number(rollMotor));
}


void MainWindowDT::on_pushButtonMissionMode_clicked()
{
    QString command = "set mode mission\n";
    myServer->socketList.last()->write(QByteArray(command.toUtf8()));
}

void MainWindowDT::on_pushButtonMissionName_clicked()
{
    QString command = "set mission_name "+ui->lineEditNameOfMission->text() + "\n";
    myServer->socketList.last()->write(QByteArray(command.toUtf8()));
}

void MainWindowDT::on_pushButtonRunMission_clicked()
{
    QString command = "set mission run\n";
    myServer->socketList.last()->write(QByteArray(command.toUtf8()));
}
