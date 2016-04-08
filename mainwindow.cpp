#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"
#include "errordialog.h"
#include "connectionfunctions.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

    }

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_verticalSlider_sliderMoved(int position)
{
    QString label = QString::number(position);
    label.append("%");
    ui->percentPowerlabel->setText(label);
    connection::setSpeed(position);
}

void MainWindow::on_actionConnect_triggered()//"connect" menubar item
{
    loginDialog login_dialog;
    login_dialog.setModal(true);
    if (login_dialog.exec() == true){
        if (connection::connect() != 0){
            errordialog error_dialog;
            error_dialog.setModal(true);
            error_dialog.setText("test");
            error_dialog.exec();
        }
    }
}

void MainWindow::on_RightMotorControl_pressed()
{
    connection::setRightMotorState(true);
}

void MainWindow::on_RightMotorControl_released()
{
    connection::setRightMotorState(false);
}

void MainWindow::on_LeftMotorControl_pressed()
{
    connection::setLeftMotorState(true);
}

void MainWindow::on_LeftMotorControl_released()
{
    connection::setLeftMotorState(false);
}

void MainWindow::on_stopMotorsControl_clicked()
{
    connection::setLeftMotorState(false);
    connection::setRightMotorState(false);
}
