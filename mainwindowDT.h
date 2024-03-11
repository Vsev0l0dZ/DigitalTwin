#ifndef MAINWINDOWDT_H
#define MAINWINDOWDT_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>

#include "mytcpserverDT.h"
#include "parameters.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowDT; }
QT_END_NAMESPACE

class MainWindowDT : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowDT(QWidget *parent = nullptr);
    MyTcpServerDT* myServer;

    QTimer* timerUpdate;

    Parameters* nextMove = nullptr;
    ~MainWindowDT();

signals:
    void sendCommand(QByteArray);


private slots:
    void on_pushButtonStartServer_clicked();
    void on_pushButtonSendCommand_clicked();
    void on_pushButtonTimerDelta_clicked();

    void on_pitchValueChanged(float);

    void on_rollValueChanged(float);

    void on_yawValueChanged(float);

    void on_depthValueChanged(float);

    void on_mipValueChanged(uint8_t);

    void on_midValueChanged(int8_t);

    void on_rudderValueChanged(int8_t);

    void on_latValueChanged(double);

    void on_lonValueChanged(double);

    void on_rollMotorValueChanged(int8_t);


    void on_pushButtonMissionMode_clicked();

    void on_pushButtonMissionName_clicked();

    void on_pushButtonRunMission_clicked();

public slots:
    void getConnectState(int port, QHostAddress addr);
    void getDataFromServer(QByteArray data);

    void timerUpdateData();
    void stopTimer();

private:
    Ui::MainWindowDT *ui;
};
#endif // MAINWINDOWDT_H
