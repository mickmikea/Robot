/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *hostBox;
    QLabel *hostLabel;
    QLabel *portLabel;
    QLabel *mainText;
    QLineEdit *portBox;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QStringLiteral("loginDialog"));
        loginDialog->resize(400, 198);
        loginDialog->setMinimumSize(QSize(400, 198));
        loginDialog->setMaximumSize(QSize(400, 198));
        buttonBox = new QDialogButtonBox(loginDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 160, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        hostBox = new QLineEdit(loginDialog);
        hostBox->setObjectName(QStringLiteral("hostBox"));
        hostBox->setGeometry(QRect(160, 70, 221, 21));
        hostLabel = new QLabel(loginDialog);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));
        hostLabel->setGeometry(QRect(90, 70, 71, 21));
        portLabel = new QLabel(loginDialog);
        portLabel->setObjectName(QStringLiteral("portLabel"));
        portLabel->setGeometry(QRect(90, 100, 71, 21));
        mainText = new QLabel(loginDialog);
        mainText->setObjectName(QStringLiteral("mainText"));
        mainText->setGeometry(QRect(110, 10, 281, 41));
        portBox = new QLineEdit(loginDialog);
        portBox->setObjectName(QStringLiteral("portBox"));
        portBox->setGeometry(QRect(160, 100, 221, 20));

        retranslateUi(loginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), loginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), loginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", 0));
        hostLabel->setText(QApplication::translate("loginDialog", "Host:", 0));
        portLabel->setText(QApplication::translate("loginDialog", "Port:", 0));
        mainText->setText(QApplication::translate("loginDialog", "Please enter the username@ip and password\n"
" of your QtPi.", 0));
        portBox->setText(QApplication::translate("loginDialog", "33493", 0));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
