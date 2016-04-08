#ifndef CONNECTIONFUNCTIONS_H
#define CONNECTIONFUNCTIONS_H


namespace connection {//you can create objects and run stuff for the functions from this.  i call these from the interface code.
    int connect();//should this return an int or maybe a connectionStatus object?
    void setSpeed(int speed);
    void setRightMotorState(bool state);
    void setLeftMotorState(bool state);
}

#endif // CONNECTIONFUNCTIONS_H
