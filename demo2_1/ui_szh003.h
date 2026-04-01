/********************************************************************************
** Form generated from reading UI file 'szh003.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SZH003_H
#define UI_SZH003_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_szh003
{
public:
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *szh003)
    {
        if (szh003->objectName().isEmpty())
            szh003->setObjectName(QString::fromUtf8("szh003"));
        szh003->resize(400, 300);
        label = new QLabel(szh003);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 300, 150));
        label->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(szh003);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 230, 75, 24));

        retranslateUi(szh003);

        QMetaObject::connectSlotsByName(szh003);
    } // setupUi

    void retranslateUi(QDialog *szh003)
    {
        szh003->setWindowTitle(QCoreApplication::translate("szh003", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("szh003", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("szh003", "\351\200\200\345\207\206", nullptr)); // 退出
    } // retranslateUi

};

namespace Ui {
    class szh003: public Ui_szh003 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SZH003_H