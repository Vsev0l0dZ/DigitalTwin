#include "parameters.h"
#include "mainwindowDT.h"
#include <QDebug>

Parameters::Parameters()
{

}

float Parameters::getPitch() const
{
    if(pitch >= minPitch && pitch <= maxPitch){
        return pitch;
    }
    else {
        qDebug() << "pitch is out of range\n";
        return 1;
    }
}

void Parameters::setPitch(float nextPitch)
{
    if(nextPitch >= minPitch && nextPitch <= maxPitch){
        pitch = nextPitch;
    }
    else{
        qDebug() << "nextPitch is out of range!\n";
    }
}

float Parameters::getRollGlider() const
{
    if(rollGlider >= minRollGlider && rollGlider <= maxRollGlider){
        return rollGlider;
    }
    else{
        qDebug() << "rollGlider is out of range!\n";
        return 1;
    }
}

void Parameters::setRollGlider(float nextRollGlider)
{
    if(nextRollGlider >= minRollGlider && nextRollGlider <= maxRollGlider){
        rollGlider = nextRollGlider;
    }
    else
        qDebug() << "nextRollGlider is out of range\n";
}

float Parameters::getYaw() const
{
    if(yaw >= minYaw && yaw <= maxYaw){
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
    if( currentMIP <= airOnlyMIP){
        return currentMIP;
    }
    else{
        qDebug() << "currentMIP is out of range!\n";
        return 1;
    }
}

void Parameters::setCurrentMIP(uint8_t newCurrentMIP)
{

    if( newCurrentMIP <= airOnlyMIP){
        currentMIP = newCurrentMIP;
    }
    else
        qDebug() << "newCurrentMIP is out of range!\n";
}

int8_t Parameters::getCurrentMID() const
{
    if(currentMID >= maxToBowMID && currentMID <= maxToSternMID){
        return currentMID;
    }
    else{
        qDebug() << "currentMID is out of range!\n";
        return 1;
    }
}

void Parameters::setCurrentMID(int8_t newCurrentMID)
{
    if(newCurrentMID >= maxToBowMID && newCurrentMID <= maxToSternMID){
        currentMID = newCurrentMID;
    }
    else
        qDebug() << "newCurrentMID is out of range!\n";
}


int8_t Parameters::getNewMID() const
{
    if(newMID >= maxToBowMID && newMID <= maxToSternMID){
        return newMID;
    }
    else{
        qDebug() << "newMID is out of range!\n";
        return 1;
    }
}

void Parameters::setNewMID(int8_t nextNewMID)
{
    if(nextNewMID >= maxToBowMID && nextNewMID <= maxToSternMID){
        newMID = nextNewMID;
    }
    else
        qDebug() << "nextNewMID is out of range!\n";
}


uint8_t Parameters::getNewMIP() const
{
    if( newMIP <= airOnlyMIP){
        return newMIP;
    }
    else{
        qDebug() << "newMIP is out of range!\n";
        return 1;
    }
}

void Parameters::setNewMIP(uint8_t nextNewMIP)
{
    if( nextNewMIP <= airOnlyMIP){
        newMIP = nextNewMIP;
    }
    else
        qDebug() << "nextNewMIP is out of range!\n";
}


int8_t Parameters::getRollMotor() const
{
    if(rollMotor >= maxRollMotorLeft && rollMotor <= maxRollMotorRight){
        return rollMotor;
    }
    else{
        qDebug() << "rollMotor is out of range!\n";
        return 1;
    }
}

void Parameters::setRollMotor(int8_t nextRollMotor)
{
    if(rollMotor >= maxRollMotorLeft && rollMotor <= maxRollMotorRight){
        rollMotor = nextRollMotor;
    }
    else
        qDebug() << "nextRollMotor is out of range!\n";
}

int8_t Parameters::getCurrentRudder() const
{
    if(currentRudder >= minRudder && currentRudder <= maxRudder){
        return currentRudder;
    }
    else{
        qDebug() << "currentRudder is out of range!\n";
        return 1;
    }
}

void Parameters::setCurrentRudder(int8_t newCurrentRudder)
{
    if(newCurrentRudder >= minRudder && newCurrentRudder <= maxRudder){
        currentRudder = newCurrentRudder;
    }
    else
        qDebug() << "newCurrentRudder is out of range!\n";
}

int8_t Parameters::getNewRudder() const
{
    if(newRudder >= minRudder && newRudder <= maxRudder){
        return newRudder;
    }
    else{
        qDebug() << "newRudder is out of range!\n";
        return 1;
    }
}

void Parameters::setNewRudder(int8_t nextNewRudder)
{
    if(nextNewRudder >= minRudder && nextNewRudder <= maxRudder){
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
    if(newYaw >= minYaw && newYaw <= maxYaw){
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
//    commandLine.remove("\r\n");// if "\r\n" будут портить строку

    QStringList fullList = QString(data).split('\n');// split, если несколько строк
//    qDebug() << "fullList=" <<  fullList;
    for (int i = 0; i < fullList.size(); i++) {

        QStringList commandList = fullList[i].split(' ');
//        qDebug() << "commandList=" << commandList;

        if(!commandList.isEmpty() && commandList.size() == 3){
            if(commandList.at(0).toLower() == "set"){
                if(commandList.at(1).toLower() == "mip"){
                    if(commandList.at(2).toInt() >= fullOfWaterMIP && commandList.at(2).toInt() <= airOnlyMIP){
                        qDebug() << "newMIP befor convertation" << commandList.at(2);
                        newMIP = commandList.at(2).toInt();
                        this->setNewMIP(newMIP);
                        qDebug() << "MIP is set to " << newMIP;
                    }
                    else
                        qDebug() << "The entered MIP value is out of range!\n";
                }
                else if(commandList.at(1).toLower() == "mid"){
                    if(commandList.at(1).toInt() >= maxToBowMID && commandList.at(1).toInt() <= maxToSternMID){
                        newMID = commandList.at(2).toInt();
                        //                    qDebug() << "got newMID = " << newMID;
                        this->setNewMID(newMID);
                        qDebug() << "MID is set to " << newMID;
                    }
                    else
                        qDebug() << "The entered MID value is out of range!\n";
                }
                else if(commandList.at(1).toLower() == "rudder"){
                    if(commandList.at(1).toInt() >= minRudder && commandList.at(1).toInt() <= maxRudder){
                        newRudder = commandList.at(2).toInt();
                        this->setNewRudder(newRudder);
                        qDebug() << "rudder is set to " << newRudder;
                    }
                    else
                        qDebug() << "The entered Rudder value is out of range!\n";
                }
                else if(commandList.at(1).toLower() == "lat"){
                    if(commandList.at(1).toDouble() >= minLat && commandList.at(1).toDouble() <= maxLat){
                        lat = commandList.at(2).toDouble();
                        this->setLat(lat);
                        qDebug() << "lat is set to " << lat;
                    }
                    else
                        qDebug() << "The entered Latitude value is out of range!\n";
                }
                else if(commandList.at(1).toLower() == "lon"){
                    if(commandList.at(1).toDouble() >= minLon && commandList.at(1).toDouble() <= maxLon){
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
        tmpMIP = static_cast<int>(round(currentMIP - speedMIP * timerDelta / oneSecondInMs));

        if(tmpMIP <= newMIP){// чтобы в процессе не перескочил в else if
            tmpMIP = newMIP;
        }
        setCurrentMIP(tmpMIP);

        qInfo() << "newMIP =" << newMIP;
        qInfo() << "currentMIP =" << currentMIP;
    }
    else if(newMIP > currentMIP){
        tmpMIP = static_cast<int>(round(currentMIP + speedMIP * timerDelta / oneSecondInMs));
        if(tmpMIP >= newMIP){
            tmpMIP = newMIP;
        }
        setCurrentMIP(tmpMIP);
    }


    qint8 tmpMID = -101;
    if(newMID < currentMID){
        tmpMID = static_cast<int>(round(currentMID - speedMID * timerDelta / oneSecondInMs));
        if(tmpMID <= newMID){// чтобы в процессе не перескочил в else if
            tmpMID = newMID;
        }
        setCurrentMID(tmpMID);
    }
    else if(newMID > currentMID){
        tmpMID = static_cast<int>(round(currentMID + speedMID * timerDelta / oneSecondInMs));
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
    float tmpDepth = depth + (1 - static_cast<float>(currentMIP)/averageMIP) * depthSpeed * timerDelta/ oneSecondInMs;
    setDepth(tmpDepth);

    float tmpPitch = p1 * pow(currentMID, 5.) + p3 * pow(currentMID, 3.) + p5 * currentMID;
    setPitch(tmpPitch);

    if(depth != 0 && currentMIP != averageMIP){
        float tmpYaw = yaw + yawCoefficient * currentRudder * timerDelta / oneSecondInMs;
        if(tmpYaw < 0){
            tmpYaw = maxYaw - abs(tmpYaw);
        }
        else if (tmpYaw >= maxYaw){
            tmpYaw -= maxYaw;
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



