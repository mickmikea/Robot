#ifndef CONNECTIONFUNCTIONS_H
#define CONNECTIONFUNCTIONS_H

#include <QString>
#include <QtNetwork/QTcpSocket>

class connection {
public:
    const int STOP_CMD = 1;
    const int FWD_CMD = 2;
    const int BWD_CMD = 3;
    const int LEFT_CMD = 4;
    const int RIGHT_CMD = 5;
    const int SPEED_CMD = 6;

public:
    connection()
    {
    }

    //you can create objects and run stuff for the functions from this.  i call these from the interface code.

    int connect(QString host, int port);//should this return an int or maybe a connection::error?
    void forward();
    void backward();
    void setSpeed(int speed);
    void turnLeft();
    void turnRight();
    void stop();

    void setCameraPosition(int location);

    enum error {//there are gaps between these numbers so that future errors can be added
        successfulConnection = 0,
        noInternetConnection = 10,
    };

private:
    QTcpSocket socket;
};

#endif // CONNECTIONFUNCTIONS_H
