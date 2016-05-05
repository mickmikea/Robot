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
    };
};

#endif // ERRORDIALOG_H
