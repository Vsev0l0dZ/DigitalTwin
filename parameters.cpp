#include "parameters.h"
#include "mainwindowDT.h"
#include <QDebug>

Parameters::Parameters()
{

}

float Parameters::getPitch() const
{
    if(pitch >= -180 && pitch <= 180){
        return pitch;
    }
    else {
        qDebug() << "pitch is out of range\n";
        return 1;
    }
}

void Parameters::setPitch(float nextPitch)
{
    if(nextPitch >= -180 && nextPitch <= 180){
        pitch = nextPitch;
    }
    else{
        qDebug() << "nextPitch is out of range!\n";
    }
}

float Parameters::getRollGlider() const
{
    if(rollGlider >= -180 && rollGlider <= 180){
        return rollGlider;
    }
    else{
        qDebug() << "rollGlider is out of range!\n";
        return 1;
    }
}

void Parameters::setRollGlider(float nextRollGlider)
{
    if(nextRollGlider >= -180 && nextRollGlider <= 180){
        rollGlider = nextRollGlider;
    }
    else
        qDebug() << "nextRollGlider is out of range\n";
}

float Parameters::getYaw() const
{
    if(yaw >= 0 && yaw <= 360){
        return yaw;
    }
    else{
        qDebug() << "The yaw is out of range!\n";
        return 1;
    }
}

float Parameters::getDepth() const
{
    if(depth >= 0){
        return depth;
    }
    else{
        qDebug() << "On the surface!\n";
        return -1;
    }
}

void Parameters::setDepth(float nextDepth)
{
    if(nextDepth <= 0){
        depth = 0;
    }
    else if(nextDepth >= bottom){
        depth = bottom;
    }
    else{
        depth = nextDepth;
    }
    if(depth > 0.1){
        lon = std::nan("1");
        lat = std::nan("1");
        hdop = 50;
    }
}

float Parameters::getLat() const
{
    return lat;
}


float Parameters::getLon() const
{
    return lon;
}


void Parameters::setHdop(float nextHdop)
{
    hdop = nextHdop;
}

uint8_t Parameters::getCurrentMIP() const
{
    if( currentMIP <=100 /*&& currentMIP >= 0*/){
        return currentMIP;
    }
    else{
        qDebug() << "currentMIP is out of range!\n";
        return 1;
    }
}

void Parameters::setCurrentMIP(uint8_t newCurrentMIP)
{

    if( newCurrentMIP <=100 /*&& newCurrentMIP >= 0*/){
        currentMIP = newCurrentMIP;
    }
    else
        qDebug() << "newCurrentMIP is out of range!\n";
}

int8_t Parameters::getCurrentMID() const
{
    if(currentMID >= -100 && currentMID <= 100){
        return currentMID;
    }
    else{
        qDebug() << "currentMID is out of range!\n";
        return 1;
    }
}

void Parameters::setCurrentMID(int8_t newCurrentMID)
{
    if(newCurrentMID >= -100 && newCurrentMID <= 100){
        currentMID = newCurrentMID;
    }
    else
        qDebug() << "newCurrentMID is out of range!\n";
}


int8_t Parameters::getNewMID() const
{
    if(newMID >= -100 && newMID <=100){
        return newMID;
    }
    else{
        qDebug() << "newMID is out of range!\n";
        return 1;
    }
}

void Parameters::setNewMID(int8_t nextNewMID)
{
    if(nextNewMID >= -100 && nextNewMID <=100){
        newMID = nextNewMID;
    }
    else
        qDebug() << "nextNewMID is out of range!\n";
}


uint8_t Parameters::getNewMIP() const
{
    if( newMIP <=100/* && newMIP >= 0*/){
        return newMIP;
    }
    else{
        qDebug() << "newMIP is out of range!\n";
        return 1;
    }
}

void Parameters::setNewMIP(uint8_t nextNewMIP)
{
    if( nextNewMIP <=100 /*&& nextNewMIP >= 0*/){
        newMIP = nextNewMIP;
    }
    else
        qDebug() << "nextNewMIP is out of range!\n";
}


int8_t Parameters::getRollMotor() const
{
    if(rollMotor >= -90 && rollMotor <= 90){
        return rollMotor;
    }
    else{
        qDebug() << "rollMotor is out of range!\n";
        return 1;
    }
}

void Parameters::setRollMotor(int8_t nextRollMotor)
{
    if(rollMotor >= -90 && rollMotor <= 90){
        rollMotor = nextRollMotor;
    }
    else
        qDebug() << "nextRollMotor is out of range!\n";
}

int8_t Parameters::getCurrentRudder() const
{
    if(currentRudder >= -15 && currentRudder <= 15){
        return currentRudder;
    }
    else{
        qDebug() << "currentRudder is out of range!\n";
        return 1;
    }
}

void Parameters::setCurrentRudder(int8_t newCurrentRudder)
{
    if(newCurrentRudder >= -15 && newCurrentRudder <= 15){
        currentRudder = newCurrentRudder;
    }
    else
        qDebug() << "newCurrentRudder is out of range!\n";
}

int8_t Parameters::getNewRudder() const
{
    if(newRudder >= -15 && newRudder <= 15){
        return newRudder;
    }
    else{
        qDebug() << "newRudder is out of range!\n";
        return 1;
    }
}

void Parameters::setNewRudder(int8_t nextNewRudder)
{
    if(nextNewRudder >= -15 && nextNewRudder <= 15){
        newRudder = nextNewRudder;
    }
    else
        qDebug() << "nextNewRudder is out of range!\n";
}

int8_t Parameters::getSpeedMIP() const
{
    return speedMIP;
}


int8_t Parameters::getSpeedMID() const
{
    return speedMID;
}


float Parameters::getHdop() const
{
    return hdop;
}


float Parameters::getBottom() const
{
    return bottom;
}

void Parameters::setBottom(float newBottom)
{
    bottom = newBottom;
}

void Parameters::setYaw(float newYaw)
{
    if(newYaw >= 0 && newYaw <= 360){
        yaw = newYaw;
    }
    else
        qDebug() << "The nextYaw is out of range!\n";
}

void Parameters::setLat(float newLat)
{
    lat = newLat;
}

void Parameters::setLon(float newLon)
{
    lon = newLon;
}


float Parameters::getTimerDelta() const
{
    return timerDelta;
}

void Parameters::setTimerDelta(float newTimerDelta)
{
    timerDelta = newTimerDelta;
}


void Parameters::receiveGpsfromMap(float latFromMap, float lonFromMap)
{
    if(latFromMap != 0 && lonFromMap != 0)
    {
        lat = latFromMap;
        lon = lonFromMap;
        hdop = 0;
    }
}

void Parameters::parserInbox(QByteArray data)
{
//    QString commandLine =  QString(data);
//    qDebug() << "commandLine = " << commandLine;
//    commandLine.remove("\r\n");// на случай, если "\r\n" будут портить строку

    QStringList fullList = QString(data).split('\n');// split, если несколько строк
//    qDebug() << "fullList=" <<  fullList;
    for (int i = 0; i < fullList.size(); i++) {

        QStringList commandList = fullList[i].split(' ');
//        qDebug() << "commandList=" << commandList;

        if(!commandList.isEmpty() && commandList.size() == 3){
            if(commandList.at(0).toLower() == "set"){
                if(commandList.at(1).toLower() == "mip"){
                    if(commandList.at(2).toInt() >= 0 && commandList.at(2).toInt() <= 100){
                        qDebug() << "newMIP befor convertation" << commandList.at(2);
                        newMIP = commandList.at(2).toInt();
                        this->setNewMIP(newMIP);
                        qDebug() << "MIP is set to " << newMIP;
                    }
                    else
                        qDebug() << "The entered MIP value is out of range!\n";
                }
                else if(commandList.at(1).toLower() == "mid"){
                    if(commandList.at(1).toInt() >= -100 && commandList.at(1).toInt() <= 100){
                        newMID = commandList.at(2).toInt();
                        //                    qDebug() << "got newMID = " << newMID;
                        this->setNewMID(newMID);
                        qDebug() << "MID is set to " << newMID;
                    }
                    else
                        qDebug() << "The entered MID value is out of range!\n";
                }
                else if(commandList.at(1).toLower() == "rudder"){
                    if(commandList.at(1).toInt() >= -15 && commandList.at(1).toInt() <= 15){
                        newRudder = commandList.at(2).toInt();
                        this->setNewRudder(newRudder);
                        qDebug() << "rudder is set to " << newRudder;
                    }
                    else
                        qDebug() << "The entered Rudder value is out of range!\n";
                }
                else if(commandList.at(1).toLower() == "lat"){
                    if(commandList.at(1).toDouble() >= -90 && commandList.at(1).toDouble() <= 90){// есть ли минус?
                        lat = commandList.at(2).toDouble();
                        this->setLat(lat);
                        qDebug() << "lat is set to " << lat;
                    }
                    else
                        qDebug() << "The entered Latitude value is out of range!\n";
                }
                else if(commandList.at(1).toLower() == "lon"){
                    if(commandList.at(1).toDouble() >= -180 && commandList.at(1).toDouble() <= 180){
                        lon = commandList.at(2).toDouble();
                        this->setLon(lon);
                        qDebug() << "lon is set to " << lon;
                    }
                    else
                        qDebug() << "The entered Longitude value is out of range!\n";
                }
            }
            else qDebug() << "Nothing to set!\n";
        }
        else qDebug() << "Empty OR not correct lenth of the command!";
    }
}


void Parameters::recalculateMotors()
{
    qint8 tmpMIP = -1;
    if(newMIP < currentMIP){
        tmpMIP = static_cast<int>(round(currentMIP - speedMIP * timerDelta / 1000));

        if(tmpMIP <= newMIP){// чтобы в процессе не перескочил в else if
            tmpMIP = newMIP;
        }
        setCurrentMIP(tmpMIP);

        qInfo() << "newMIP =" << newMIP;
        qInfo() << "currentMIP =" << currentMIP;
    }
    else if(newMIP > currentMIP){
        tmpMIP = static_cast<int>(round(currentMIP + speedMIP * timerDelta / 1000));
        if(tmpMIP >= newMIP){
            tmpMIP = newMIP;
        }
        setCurrentMIP(tmpMIP);
    }


    qint8 tmpMID = -101;
    if(newMID < currentMID){
        tmpMID = static_cast<int>(round(currentMID - speedMID * timerDelta / 1000));
        if(tmpMID <= newMID){// чтобы в процессе не перескочил в else if
            tmpMID = newMID;
        }
        setCurrentMID(tmpMID);
    }
    else if(newMID > currentMID){
        tmpMID = static_cast<int>(round(currentMID + speedMID * timerDelta / 1000));
        if(tmpMID >= newMID){
            tmpMID = newMID;
        }
        setCurrentMID(tmpMID);
    }

    // условно, currentRudder меняется как будто мгновенно
    if(currentRudder < newRudder || currentRudder > newRudder){
        currentRudder = newRudder;
    }
}

void Parameters::recalculatePosition()
{
    // упрощенные формулы построены эмпирическим путем, на основании реальных испытаний
    float tmpDepth = depth + (1 - static_cast<float>(currentMIP)/averageMIP) * depthSpeed * timerDelta/ 1000;
    setDepth(tmpDepth);

    float tmpPitch = p1 * pow(currentMID, 5.) + p3 * pow(currentMID, 3.) + p5 * currentMID;
    setPitch(tmpPitch);

    if(depth != 0 && currentMIP != 50){
        float tmpYaw = yaw + yawCoefficient * currentRudder * timerDelta / 1000;
        if(tmpYaw < 0){
            tmpYaw = 360 - abs(tmpYaw);
        }
        else if (tmpYaw >= 360){
            tmpYaw -= 360;
        }
        setYaw(tmpYaw);
    }
}

const QString &Parameters::getNmeaString() const
{
    return nmeaString;
}


void Parameters::setNmeaString()
{
    double latTMP, lonTMP;

    if (std::isnan(lat) == true)
        latTMP = 0;
    else
        latTMP = lat;

    if (std::isnan(lon) == true)
        lonTMP = 0;
    else
        lonTMP = lon;

    if (std::isnan(lat) == false and std::isnan(lon) == false)
        hdop = 0;

    nmeaString.clear();
    nmeaString += "$DIGTW," +
//                    // *********************************************** //
//                    // Variant: No scientific notation, precision = 3
//                    QString::number(pitch, 'f', 3) + "," +
//                    QString::number(rollGlider, 'f', 3) + "," +
//                    QString::number(yaw, 'f', 3) + "," +
//                    QString::number(depth, 'f', 3) + "," +
//                    // *********************************************** //
                    QString::number(pitch) + "," +
                    QString::number(rollGlider) + "," +
                    QString::number(yaw) + "," +
                    QString::number(depth) + "," +
                    QString::number(currentMIP) + "," +
                    QString::number(currentMID) + "," +
                    QString::number(rollMotor) + "," +
                    QString::number(currentRudder) + "," +
                    QString::number(hdop) + "," +
                    QString::number(latTMP) + "," +
                    QString::number(lonTMP) + "*FF" +
                    "\r\n";
//    qDebug() << nmeaString << '\n';
}



