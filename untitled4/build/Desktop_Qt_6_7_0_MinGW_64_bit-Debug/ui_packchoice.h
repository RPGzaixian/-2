/********************************************************************************
** Form generated from reading UI file 'packchoice.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKCHOICE_H
#define UI_PACKCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_packchoice
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *packchoice)
    {
        if (packchoice->objectName().isEmpty())
            packchoice->setObjectName("packchoice");
        packchoice->resize(400, 300);
        pushButton = new QPushButton(packchoice);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 20, 80, 31));
        pushButton_2 = new QPushButton(packchoice);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 180, 121, 41));
        pushButton_3 = new QPushButton(packchoice);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 180, 131, 41));
        label = new QLabel(packchoice);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 135, 101, 31));
        label_2 = new QLabel(packchoice);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 140, 81, 16));

        retranslateUi(packchoice);

        QMetaObject::connectSlotsByName(packchoice);
    } // setupUi

    void retranslateUi(QDialog *packchoice)
    {
        packchoice->setWindowTitle(QCoreApplication::translate("packchoice", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("packchoice", "back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("packchoice", "drug1 : + 30 HP", nullptr));
        pushButton_3->setText(QCoreApplication::translate("packchoice", "drug2 : + 10 attack", nullptr));
        label->setText(QCoreApplication::translate("packchoice", "textlabel", nullptr));
        label_2->setText(QCoreApplication::translate("packchoice", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class packchoice: public Ui_packchoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKCHOICE_H
