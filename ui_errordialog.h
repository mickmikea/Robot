/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errordialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *messageText;
    QWidget *focusHolder;

    void setupUi(QDialog *errordialog)
    {
        if (errordialog->objectName().isEmpty())
            errordialog->setObjectName(QStringLiteral("errordialog"));
        errordialog->resize(400, 200);
        errordialog->setMinimumSize(QSize(400, 200));
        errordialog->setMaximumSize(QSize(400, 200));
        buttonBox = new QDialogButtonBox(errordialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 160, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);
        messageText = new QLabel(errordialog);
        messageText->setObjectName(QStringLiteral("messageText"));
        messageText->setGeometry(QRect(80, 20, 311, 121));
        messageText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        messageText->setWordWrap(true);
        focusHolder = new QWidget(errordialog);
        focusHolder->setObjectName(QStringLiteral("focusHolder"));
        focusHolder->setGeometry(QRect(0, 260, 120, 80));

        retranslateUi(errordialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), errordialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), errordialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(errordialog);
    } // setupUi

    void retranslateUi(QDialog *errordialog)
    {
        errordialog->setWindowTitle(QApplication::translate("errordialog", "Dialog", 0));
        messageText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class errordialog: public Ui_errordialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
