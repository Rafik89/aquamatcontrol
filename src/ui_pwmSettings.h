/********************************************************************************
** Form generated from reading UI file 'pwmSettings.ui'
**
** Created: Sat Mar 19 14:08:22 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWMSETTINGS_H
#define UI_PWMSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDial>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PwmSettings
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_blocked;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edit_name;
    QSpacerItem *horizontalSpacer;
    QLabel *dial_label;
    QDial *dial;

    void setupUi(QWidget *PwmSettings)
    {
        if (PwmSettings->objectName().isEmpty())
            PwmSettings->setObjectName(QString::fromUtf8("PwmSettings"));
        PwmSettings->resize(202, 198);
        horizontalLayout_3 = new QHBoxLayout(PwmSettings);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(PwmSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox_blocked = new QCheckBox(groupBox);
        checkBox_blocked->setObjectName(QString::fromUtf8("checkBox_blocked"));

        verticalLayout->addWidget(checkBox_blocked);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        edit_name = new QLineEdit(groupBox);
        edit_name->setObjectName(QString::fromUtf8("edit_name"));
        edit_name->setMaxLength(5);
        edit_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(edit_name);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        dial_label = new QLabel(groupBox);
        dial_label->setObjectName(QString::fromUtf8("dial_label"));
        dial_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(dial_label);

        dial = new QDial(groupBox);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMaximum(100);
        dial->setValue(0);
        dial->setInvertedAppearance(false);
        dial->setInvertedControls(false);
        dial->setWrapping(false);
        dial->setNotchTarget(10);
        dial->setNotchesVisible(true);

        verticalLayout->addWidget(dial);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_3->addWidget(groupBox);


        retranslateUi(PwmSettings);

        QMetaObject::connectSlotsByName(PwmSettings);
    } // setupUi

    void retranslateUi(QWidget *PwmSettings)
    {
        PwmSettings->setWindowTitle(QApplication::translate("PwmSettings", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PwmSettings", "Pwm1", 0, QApplication::UnicodeUTF8));
        checkBox_blocked->setText(QApplication::translate("PwmSettings", "Zablokowane", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PwmSettings", "Nazwa", 0, QApplication::UnicodeUTF8));
        edit_name->setText(QApplication::translate("PwmSettings", "ABCDE", 0, QApplication::UnicodeUTF8));
        dial_label->setText(QApplication::translate("PwmSettings", "100%", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PwmSettings: public Ui_PwmSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWMSETTINGS_H
