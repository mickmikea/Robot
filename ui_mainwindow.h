/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QColumnView *columnView;
    QLabel *percentPowerlabel;
    QSlider *cameraMovementSlider;
    QSlider *verticalSlider;
    QLabel *cameraPositionLabel;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopMotorsControl;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *RightMotorControl;
    QPushButton *LeftMotorControl;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuConnection;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(647, 433);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        columnView = new QColumnView(centralWidget);
        columnView->setObjectName(QStringLiteral("columnView"));

        gridLayout_3->addWidget(columnView, 0, 0, 3, 1);

        percentPowerlabel = new QLabel(centralWidget);
        percentPowerlabel->setObjectName(QStringLiteral("percentPowerlabel"));
        percentPowerlabel->setMinimumSize(QSize(50, 0));

        gridLayout_3->addWidget(percentPowerlabel, 0, 2, 1, 1);

        cameraMovementSlider = new QSlider(centralWidget);
        cameraMovementSlider->setObjectName(QStringLiteral("cameraMovementSlider"));
        cameraMovementSlider->setMinimum(-100);
        cameraMovementSlider->setMaximum(100);
        cameraMovementSlider->setOrientation(Qt::Horizontal);
        cameraMovementSlider->setTickPosition(QSlider::TicksBelow);

        gridLayout_3->addWidget(cameraMovementSlider, 2, 1, 1, 2);

        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setMinimum(-100);
        verticalSlider->setMaximum(100);
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider, 0, 1, 1, 1);

        cameraPositionLabel = new QLabel(centralWidget);
        cameraPositionLabel->setObjectName(QStringLiteral("cameraPositionLabel"));

        gridLayout_3->addWidget(cameraPositionLabel, 1, 1, 1, 2, Qt::AlignHCenter);


        gridLayout->addLayout(gridLayout_3, 2, 1, 3, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        stopMotorsControl = new QPushButton(centralWidget);
        stopMotorsControl->setObjectName(QStringLiteral("stopMotorsControl"));

        gridLayout_2->addWidget(stopMotorsControl, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        RightMotorControl = new QPushButton(centralWidget);
        RightMotorControl->setObjectName(QStringLiteral("RightMotorControl"));

        gridLayout_2->addWidget(RightMotorControl, 0, 5, 1, 1);

        LeftMotorControl = new QPushButton(centralWidget);
        LeftMotorControl->setObjectName(QStringLiteral("LeftMotorControl"));

        gridLayout_2->addWidget(LeftMotorControl, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 4, 1, 1);


        gridLayout->addLayout(gridLayout_2, 5, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 2, 0, 4, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 647, 21));
        menuConnection = new QMenu(menuBar);
        menuConnection->setObjectName(QStringLiteral("menuConnection"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuConnection->menuAction());
        menuConnection->addAction(actionConnect);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Alt+C", 0));
        percentPowerlabel->setText(QApplication::translate("MainWindow", "0%  ", 0));
        cameraPositionLabel->setText(QApplication::translate("MainWindow", "0", 0));
        stopMotorsControl->setText(QApplication::translate("MainWindow", "Forward", 0));
        RightMotorControl->setText(QApplication::translate("MainWindow", "Right", 0));
        LeftMotorControl->setText(QApplication::translate("MainWindow", "Left", 0));
        label->setText(QApplication::translate("MainWindow", "Status:", 0));
        menuConnection->setTitle(QApplication::translate("MainWindow", "Connection", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
