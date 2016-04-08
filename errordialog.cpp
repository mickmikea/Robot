#include "errordialog.h"
#include "ui_errordialog.h"

errordialog::errordialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errordialog)
{
    ui->setupUi(this);
}

void errordialog::setText(int code)
{
    ui->messageText->setText(errorCodes[code]);
}

errordialog::~errordialog()
{
    delete ui;
}
