/********************************************************************************
** Form generated from reading UI file 'ihm.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHM_H
#define UI_IHM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ihm
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Mario;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QWidget *tab_FM;

    void setupUi(QWidget *Ihm)
    {
        if (Ihm->objectName().isEmpty())
            Ihm->setObjectName(QStringLiteral("Ihm"));
        Ihm->resize(744, 613);
        horizontalLayout = new QHBoxLayout(Ihm);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(Ihm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_Mario = new QWidget();
        tab_Mario->setObjectName(QStringLiteral("tab_Mario"));
        gridLayout_2 = new QGridLayout(tab_Mario);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(tab_Mario);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_5 = new QLabel(tab_Mario);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(tab_Mario);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(tab_Mario);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);


        gridLayout->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(tab_Mario);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);


        gridLayout->addLayout(verticalLayout_5, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_Mario, QString());
        tab_FM = new QWidget();
        tab_FM->setObjectName(QStringLiteral("tab_FM"));
        tabWidget->addTab(tab_FM, QString());

        verticalLayout->addWidget(tabWidget);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Ihm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Ihm);
    } // setupUi

    void retranslateUi(QWidget *Ihm)
    {
        Ihm->setWindowTitle(QApplication::translate("Ihm", "Ihm", 0));
        label_2->setText(QApplication::translate("Ihm", "Map : ", 0));
        label_5->setText(QApplication::translate("Ihm", "TextLabel", 0));
        label->setText(QApplication::translate("Ihm", "TextLabel", 0));
        label_3->setText(QApplication::translate("Ihm", "TextLabel", 0));
        label_4->setText(QApplication::translate("Ihm", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Mario), QApplication::translate("Ihm", "MARIO", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_FM), QApplication::translate("Ihm", "FOLLOW_ME", 0));
    } // retranslateUi

};

namespace Ui {
    class Ihm: public Ui_Ihm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHM_H
