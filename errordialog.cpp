#include "errordialog.h"
#include "ui_errordialog.h"

errorDialog::errorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errorDialog)
{
    ui->setupUi(this);
}

errorDialog::~errorDialog()
{
    delete ui;
}
