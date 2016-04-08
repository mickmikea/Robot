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
    void setText(QString text);
    explicit errordialog(QWidget *parent = 0);
    ~errordialog();

private:
    Ui::errordialog *ui;
};

#endif // ERRORDIALOG_H
