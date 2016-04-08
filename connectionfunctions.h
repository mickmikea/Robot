#ifndef CONNECTIONFUNCTIONS_H
#define CONNECTIONFUNCTIONS_H

namespace connection {
    //you can create objects and run stuff for the functions from this.  i call these from the interface code.

    int connect();//should this return an int or maybe a connectionStatus object?

    void setSpeed(int speed);

    void setRightMotorState(bool state);

    void setLeftMotorState(bool state);

    void setCameraPosition(int location);

    namespace error {//there are gaps between these numbers so that future errors can be added
        const int successfulConnection = 0;
        const int noInternetConnection = 10;
        const int invalidHostname = 20;
        const int invalidPassword = 30;
        const int unsecureConnection = 40;
    }
}

#endif // CONNECTIONFUNCTIONS_H
