#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "connection.h"
#include <QMainWindow>
#include <iostream>
#include <string>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void keyPressEvent(QKeyEvent* event) override;

    void keyReleaseEvent(QKeyEvent *event) override;

private slots:

    void on_verticalSlider_sliderMoved(int position);

    void on_actionConnect_triggered();

    void on_RightMotorControl_pressed();

    void on_RightMotorControl_released();

    void on_LeftMotorControl_pressed();

    void on_LeftMotorControl_released();

    void on_cameraMovementSlider_sliderMoved(int position);

    void on_stopMotorsControl_pressed();

    void on_stopMotorsControl_released();

private:
    Ui::MainWindow* ui;
    connection con;
};

#endif // MAINWINDOW_H
