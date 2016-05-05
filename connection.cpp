#include "connection.h"
#include <QDebug>

int connection::connect(QString host, int port)
{
    socket.connectToHost(host, port);

    if(!socket.waitForConnected(5000)) {
        return connection::error::noInternetConnection;
    }

    return connection::error::successfulConnection;
}

void connection::setSpeed(int speed)
{
    int sentSpeed = speed;

    if(speed < 0) {
        sentSpeed = -speed;
    }

    qDebug() << sentSpeed;
    char packetData[] = { connection::SPEED_CMD, 1, sentSpeed };
    socket.write(packetData, 3);
    socket.flush();
}

void connection::turnLeft()
{
    char packetData[] = { connection::LEFT_CMD, 0};

    socket.write(packetData, 2);
    socket.flush();
}

void connection::turnRight() {
    char packetData[] = { connection::RIGHT_CMD, 0 };

    socket.write(packetData, 2);
    socket.flush();
}

void connection::forward() {
    char packetData[] = { connection::FWD_CMD, 0 };
    socket.write(packetData, 2);
    socket.flush();
}

void connection::backward() {
    char packetData[] = { connection::BWD_CMD, 0 };

    socket.write(packetData, 2);
    socket.flush();
}

void connection::stop() {
    char packetData[] = { connection::STOP_CMD, 0 };

    socket.write(packetData, 2);
    socket.flush();
}

void connection::setCameraPosition(int location)
{

}
