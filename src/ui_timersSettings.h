/********************************************************************************
** Form generated from reading UI file 'timersSettings.ui'
**
** Created: Tue Apr 26 23:00:53 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMERSSETTINGS_H
#define UI_TIMERSSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTimeEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimersSettings
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QCheckBox *c_active;
    QLabel *label;
    QTimeEdit *e_from;
    QLabel *label_2;
    QTimeEdit *e_to;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *TimersSettings)
    {
        if (TimersSettings->objectName().isEmpty())
            TimersSettings->setObjectName(QString::fromUtf8("TimersSettings"));
        TimersSettings->resize(164, 164);
        gridLayout_2 = new QGridLayout(TimersSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(TimersSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        c_active = new QCheckBox(groupBox);
        c_active->setObjectName(QString::fromUtf8("c_active"));
        c_active->setTristate(false);

        gridLayout->addWidget(c_active, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        e_from = new QTimeEdit(groupBox);
        e_from->setObjectName(QString::fromUtf8("e_from"));

        gridLayout->addWidget(e_from, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        e_to = new QTimeEdit(groupBox);
        e_to->setObjectName(QString::fromUtf8("e_to"));

        gridLayout->addWidget(e_to, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(TimersSettings);

        QMetaObject::connectSlotsByName(TimersSettings);
    } // setupUi

    void retranslateUi(QWidget *TimersSettings)
    {
        TimersSettings->setWindowTitle(QApplication::translate("TimersSettings", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TimersSettings", "GroupBox", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TimersSettings", "Aktywny", 0, QApplication::UnicodeUTF8));
        c_active->setText(QString());
        label->setText(QApplication::translate("TimersSettings", "Od", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TimersSettings", "Do", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TimersSettings", "Dzie\305\204", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TimersSettings", "Wyj\305\233cie", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TimersSettings: public Ui_TimersSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMERSSETTINGS_H
