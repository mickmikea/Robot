#include "logindialog.h"
#include "ui_logindialog.h"

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
    ui->passwordBox->setEchoMode(QLineEdit::Password);
    ui->usernameBox->setFocus();
}

loginDialog::~loginDialog()
{
    delete ui;
}
