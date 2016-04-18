#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"
#include "errordialog.h"
#include "connectionfunctions.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    this->setFocusPolicy(Qt::StrongFocus);
    ui->centralWidget->setFocus();

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
    if (login_dialog.exec() == loginDialog::Accepted){
        int connectionCode = connection::connect();
        if (connectionCode != 0){
            errordialog error_dialog;
            error_dialog.setModal(true);
            error_dialog.setText(connectionCode);
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

void MainWindow::on_cameraMovementSlider_sliderMoved(int position)
{
    ui->cameraPositionLabel->setText(QString::number(position));
    connection::setCameraPosition(position);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_D){
        connection::setRightMotorState(true);
    }
    else if (event->key() == Qt::Key_A){
        connection::setLeftMotorState(true);
    }
    else if (event->key() == Qt::Key_S){
        connection::setRightMotorState(false);
        connection::setLeftMotorState(false);
    }
    else if (event->key() == Qt::Key_Up){
        ui->verticalSlider->setSliderPosition(ui->verticalSlider->sliderPosition() + 10);
        QString label = QString::number(ui->verticalSlider->sliderPosition());
        label.append("%");
        ui->percentPowerlabel->setText(label);\
        connection::setSpeed(ui->verticalSlider->sliderPosition());
    }
    else if (event->key() == Qt::Key_Down){
        ui->verticalSlider->setSliderPosition(ui->verticalSlider->sliderPosition() - 10);
        QString label = QString::number(ui->verticalSlider->sliderPosition());
        label.append("%");
        ui->percentPowerlabel->setText(label);
        connection::setSpeed(ui->verticalSlider->sliderPosition());
    }
    else if (event->key() == Qt::Key_Left){
        ui->cameraMovementSlider->setSliderPosition(ui->cameraMovementSlider->sliderPosition() - 10);
        ui->cameraPositionLabel->setText(QString::number(ui->cameraMovementSlider->sliderPosition()));
        connection::setCameraPosition(ui->cameraMovementSlider->sliderPosition());
    }
    else if (event->key() == Qt::Key_Right){
        ui->cameraMovementSlider->setSliderPosition(ui->cameraMovementSlider->sliderPosition() + 10);
        ui->cameraPositionLabel->setText(QString::number(ui->cameraMovementSlider->sliderPosition()));
        connection::setCameraPosition(ui->cameraMovementSlider->sliderPosition());
    }
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_D){
        connection::setRightMotorState(false);
    }
    else if (event->key() == Qt::Key_A){
        connection::setLeftMotorState(false);
    }
}
