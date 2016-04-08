#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractButton>
#include <iostream>
#include <string>

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



    void on_RightMotorControl_pressed();

    void on_verticalSlider_sliderMoved(int position);

    void on_actionConnect_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
