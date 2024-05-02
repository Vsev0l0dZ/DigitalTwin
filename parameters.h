#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <stdint.h>
#include <cmath>

#include <QObject>

class Parameters : public QObject
{
    Q_OBJECT

public:
    Parameters();

    float getPitch() const;
    void setPitch(float newPitch);

    float getRollGlider() const;
    void setRollGlider(float newRollGlider);

    float getYaw() const;

    float getDepth() const;
    void setDepth(float newDepth);

    float getLat() const;
    float getLon() const;

    float getHdop() const;
    void setHdop(float newHdop);

    uint8_t getCurrentMIP() const;
    void setCurrentMIP(uint8_t newCurrentMIP);

    uint8_t getNewMIP() const;
    void setNewMIP(uint8_t nextNewMIP);

    int8_t getCurrentMID() const;
    void setCurrentMID(int8_t newCurrentMID);

    int8_t getNewMID() const;
    void setNewMID(int8_t nextNewMID);

    int8_t getRollMotor() const;
    void setRollMotor(int8_t newRollMotor);

    int8_t getCurrentRudder() const;
    void setCurrentRudder(int8_t newCurrentRudder);

    int8_t getNewRudder() const;
    void setNewRudder(int8_t nextNewRudder);

    int8_t getSpeedMIP() const;
    void setSpeedMIP(int8_t newSpeedMIP);

    int8_t getSpeedMID() const;
    void setSpeedMID(int8_t newSpeedMID);

    float getBottom() const;

    void setNmeaString();

    float getTimerDelta() const;



public slots:
    void receiveGpsfromMap(float lat, float lon);
    void parserInbox(QByteArray data);

    void setBottom(float newBottom);

    void setYaw(float newYaw);
    void setLat(float newLat);
    void setLon(float newLon);

    void setTimerDelta(float newTimerDelta);

    void recalculateMotors();
    void recalculatePosition();

    const QString &getNmeaString() const;

    void resetParameters();

private:
    // БИНС
    float pitch = 120;// дифферент глайдера -180 +180
    const float defaultPitch = 120;
    const float minPitch = -180;
    const float maxPitch = 180;

    float rollGlider = 0;// крен глайдера -180 +180
    const float defaultRollGlider = 0;
    const float minRollGlider = -180;
    const float maxRollGlider = 180;

    float yaw = 0;// курс 0 .. 360
    const float defaultYaw = 0;
    const float minYaw = 0;
    const float maxYaw = 360;

    float depth = 0;//
    const float defaultDepth = 0;
    float depthSpeed = 0.3;// скорость погружения м/с
    float timerDelta = 200.0;// время перерасчета/обновления таймера, мс; 1000 мс - it is in realTime
    const uint16_t oneSecondInMs = 1000;

    const float p1 = 2.954e-9;
    const float p3 = -5.734e-5;
    const float p5 = -0.1718;

    double lat = std::nan("1");//
    const double minLat = -90;
    const double maxLat = 90;
    double lon = std::nan("1");//
    const double minLon = -180;
    const double maxLon = 180;

//    float alt = 0;// высота над уровнем моря
    uint8_t hdop = 50;// ошибка gps, if 50 - it is ~ in size of football field

    // моторы
    uint8_t currentMIP = 50;// 0 (заполнен) .. 100 (воздух)
    uint8_t newMIP = 50;// 0 (заполнен) .. 100 (воздух)
    const uint8_t defaultMIP = 50;// 0 (заполнен) .. 100 (воздух)
    const uint8_t fullOfWaterMIP = 0;
    const uint8_t airOnlyMIP = 100;

    int8_t currentMID = 0;// -100// в корму +100// в нос
    int8_t newMID = 0;// -100 +100
    const int8_t defaultMID = 0;
    const int8_t maxToBowMID = -100;
    const int8_t maxToSternMID = 100;

    int8_t rollMotor = 0;// крен -90 +90
    const int8_t defaultRollMotor = 0;
    const int8_t maxRollMotorLeft = -90;
    const int8_t maxRollMotorRight = 90;

    int8_t currentRudder = 0;// руль -15 +15
    const int8_t defaultRudder = 0;
    int8_t newRudder = 0;// руль -15 +15
    const int8_t minRudder = -15;
    const int8_t maxRudder = 15;


    const uint8_t speedMIP = 3;// скорость изменения МИПа

    const uint8_t speedMID = 30;// скорость изменения МИДа

    float bottom = 11022;

    float yawCoefficient = 0.2;// руль = 15 град., изм. курса = 3 град./с; линейная зависимость y = kx

    QString nmeaString = "";

signals:
    void sendPitch(float pitch);
    void sendRollGlider(float rollGlider);
    void sendYaw(float yaw);
    void sendDepth(float depth);
    void sendMIP(uint8_t currentMIP);
    void sendMID(int8_t currentMID);
    void sendRudder(int8_t currentRudder);
    void sendRollMotor(int8_t rollMotor);
    void sendLat(double lat);
    void sendLon(double lon);

};

#endif // PARAMETERS_H
