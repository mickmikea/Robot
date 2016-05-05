#include "logindialog.h"
#include "ui_logindialog.h"

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
    ui->hostBox->setFocus();
}

loginDialog::~loginDialog()
{
    delete ui;
}

QString loginDialog::getHostname()
{
    return ui->hostBox->text();
}

int loginDialog::getPort()
{
    bool ok;
    int port = ui->portBox->text().toInt(&ok);

    if(!ok) {
        return -1;
    }

    return port;
}
