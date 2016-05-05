#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"
#include "errordialog.h"
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
    con.setSpeed(position);
}

void MainWindow::on_actionConnect_triggered()//"connect" menubar item
{
    loginDialog login_dialog;
    login_dialog.setModal(true);
    if (login_dialog.exec() == loginDialog::Accepted){
        int connectionCode = con.connect(login_dialog.getHostname(), login_dialog.getPort());
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
    con.turnRight();
}

void MainWindow::on_RightMotorControl_released()
{
    con.stop();
}

void MainWindow::on_LeftMotorControl_pressed()
{
    con.turnLeft();
}

void MainWindow::on_LeftMotorControl_released()
{
    con.stop();
}

void MainWindow::on_stopMotorsControl_pressed()
{
    if(ui->verticalSlider->sliderPosition() > 0) {
        con.forward();
    } else {
        con.backward();
    }
}

void MainWindow::on_stopMotorsControl_released()
{
    con.stop();
}

void MainWindow::on_cameraMovementSlider_sliderMoved(int position)
{
    ui->cameraPositionLabel->setText(QString::number(position));
    con.setCameraPosition(position);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_D){
        con.turnRight();
    }
    else if (event->key() == Qt::Key_A){
        con.turnLeft();
    }
    else if (event->key() == Qt::Key_S){
        con.stop();
    }
    else if (event->key() == Qt::Key_Up){
        ui->verticalSlider->setSliderPosition(ui->verticalSlider->sliderPosition() + 10);
        QString label = QString::number(ui->verticalSlider->sliderPosition());
        label.append("%");
        ui->percentPowerlabel->setText(label);\
        con.setSpeed(ui->verticalSlider->sliderPosition());
    }
    else if (event->key() == Qt::Key_Down){
        ui->verticalSlider->setSliderPosition(ui->verticalSlider->sliderPosition() - 10);
        QString label = QString::number(ui->verticalSlider->sliderPosition());
        label.append("%");
        ui->percentPowerlabel->setText(label);
        con.setSpeed(ui->verticalSlider->sliderPosition());
    }
    else if (event->key() == Qt::Key_Left){
        ui->cameraMovementSlider->setSliderPosition(ui->cameraMovementSlider->sliderPosition() - 10);
        ui->cameraPositionLabel->setText(QString::number(ui->cameraMovementSlider->sliderPosition()));
        con.setCameraPosition(ui->cameraMovementSlider->sliderPosition());
    }
    else if (event->key() == Qt::Key_Right){
        ui->cameraMovementSlider->setSliderPosition(ui->cameraMovementSlider->sliderPosition() + 10);
        ui->cameraPositionLabel->setText(QString::number(ui->cameraMovementSlider->sliderPosition()));
        con.setCameraPosition(ui->cameraMovementSlider->sliderPosition());
    }
}

void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_D){
        con.stop();
    }
    else if (event->key() == Qt::Key_A){
        con.stop();
    }
}

