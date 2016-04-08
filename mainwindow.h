#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include "connectionfunctions.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_verticalSlider_sliderMoved(int position);

    void on_actionConnect_triggered();

    void on_RightMotorControl_pressed();

    /*void on_RightMotorControl_released();

    void on_LeftMotorControl_pressed();

    void on_LeftMotorControl_released();

    void on_stopMotorsControl_clicked();*/

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
