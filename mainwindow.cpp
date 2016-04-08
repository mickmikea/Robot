#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

    }

MainWindow::~MainWindow(){
    delete ui;
}
void MainWindow::on_RightMotorControl_pressed()
{
    std::cout << "right motor pressed";
}

void MainWindow::on_verticalSlider_sliderMoved(int position)
{
    QString label = QString::number(position);
    label.append("%");
    ui->percentPowerlabel->setText(label);
}

void MainWindow::on_actionConnect_triggered()
{
    loginDialog login_dialog;
    login_dialog.setModal(true);
    login_dialog.exec();
}
