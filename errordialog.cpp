#include "errordialog.h"
#include "ui_errordialog.h"

errordialog::errordialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errordialog)
{
    ui->setupUi(this);
}

void errordialog::setText(QString text)
{
    ui->messageText->setText(text);
}

errordialog::~errordialog()
{
    delete ui;
}
