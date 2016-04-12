#ifndef ERRORDIALOG_H
#define ERRORDIALOG_H

#include <QDialog>

namespace Ui {
class errordialog;
}

class errordialog : public QDialog
{
    Q_OBJECT

public:
    void setText(int code);
    explicit errordialog(QWidget *parent = 0);
    ~errordialog();

private:
    Ui::errordialog *ui;
    std::map<int, QString> errorCodes = {
        {10, "It appears that you don't have an internet connection.  Try turning on your internet or switching to a different network."},
        {20, "Invalid hostname!  Are you on the same network as your QtPi? Try making sure that your QtPi is connected to the internet."},
        {30, "Invalid password!  Please re-enter your password."},
        {40, "A secure connection can't be established with your QtPi.  Please try reconnecting or visit our github page for more help."},
    };
};

#endif // ERRORDIALOG_H
