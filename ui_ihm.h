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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QFrame *line;
    QVBoxLayout *verticalLayout_3;
    QLabel *mapLabel;
    QLabel *mapImageLabel;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QFrame *line_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *historyLabel;
    QListWidget *history_List;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QFrame *line_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QFrame *line_7;
    QLabel *label_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
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
        line = new QFrame(tab_Mario);
        line->setObjectName(QStringLiteral("line"));
        line->setLineWidth(3);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mapLabel = new QLabel(tab_Mario);
        mapLabel->setObjectName(QStringLiteral("mapLabel"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        mapLabel->setFont(font);
        mapLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(mapLabel);

        mapImageLabel = new QLabel(tab_Mario);
        mapImageLabel->setObjectName(QStringLiteral("mapImageLabel"));
        mapImageLabel->setMinimumSize(QSize(300, 213));
        mapImageLabel->setCursor(QCursor(Qt::CrossCursor));
        mapImageLabel->setTextFormat(Qt::AutoText);
        mapImageLabel->setPixmap(QPixmap(QString::fromUtf8("../../img/c4.png")));
        mapImageLabel->setScaledContents(true);
        mapImageLabel->setOpenExternalLinks(false);

        verticalLayout_3->addWidget(mapImageLabel);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(tab_Mario);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(tab_Mario);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(tab_Mario);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(17);

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(tab_Mario);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(tab_Mario);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(tab_Mario);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaxLength(17);

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(tab_Mario);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line_5 = new QFrame(tab_Mario);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setLineWidth(3);
        line_5->setMidLineWidth(1);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_5);

        label_6 = new QLabel(tab_Mario);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(tab_Mario);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        comboBox = new QComboBox(tab_Mario);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(50, 10));
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox->setFrame(true);

        horizontalLayout_4->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        historyLabel = new QLabel(tab_Mario);
        historyLabel->setObjectName(QStringLiteral("historyLabel"));
        historyLabel->setFont(font1);
        historyLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(historyLabel);

        history_List = new QListWidget(tab_Mario);
        history_List->setObjectName(QStringLiteral("history_List"));
        history_List->setMinimumSize(QSize(300, 213));
        history_List->setAutoFillBackground(false);
        history_List->setAlternatingRowColors(false);

        verticalLayout_4->addWidget(history_List);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(tab_Mario);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_4);

        line_6 = new QFrame(tab_Mario);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_6);

        label_7 = new QLabel(tab_Mario);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_7->setFont(font2);

        verticalLayout_5->addWidget(label_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pushButton_8 = new QPushButton(tab_Mario);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_6->addWidget(pushButton_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_3 = new QPushButton(tab_Mario);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(tab_Mario);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(tab_Mario);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_5->addWidget(pushButton_5);


        verticalLayout_6->addLayout(horizontalLayout_5);

        pushButton_6 = new QPushButton(tab_Mario);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_6->addWidget(pushButton_6);


        verticalLayout_5->addLayout(verticalLayout_6);

        line_7 = new QFrame(tab_Mario);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_7);

        label_8 = new QLabel(tab_Mario);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_8->setFont(font3);

        verticalLayout_5->addWidget(label_8);

        pushButton_7 = new QPushButton(tab_Mario);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_5->addWidget(pushButton_7);

        pushButton_9 = new QPushButton(tab_Mario);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_5->addWidget(pushButton_9);


        gridLayout->addLayout(verticalLayout_5, 2, 2, 1, 1);

        line_2 = new QFrame(tab_Mario);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setLineWidth(3);
        line_2->setMidLineWidth(1);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 1, 1, 1);

        line_3 = new QFrame(tab_Mario);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setLineWidth(3);
        line_3->setMidLineWidth(1);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 1);

        line_4 = new QFrame(tab_Mario);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setLineWidth(3);
        line_4->setMidLineWidth(1);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 1, 2, 1, 1);


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
        mapLabel->setText(QApplication::translate("Ihm", "Map", 0));
        mapImageLabel->setText(QString());
        label_5->setText(QApplication::translate("Ihm", "Connection", 0));
        label_2->setText(QApplication::translate("Ihm", "EV3 : ", 0));
        lineEdit->setPlaceholderText(QApplication::translate("Ihm", "EV3 Mac Adress", 0));
        pushButton->setText(QApplication::translate("Ihm", ">>", 0));
        label_3->setText(QApplication::translate("Ihm", "NXT : ", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("Ihm", "NXT Mac Adress", 0));
        pushButton_2->setText(QApplication::translate("Ihm", ">>", 0));
        label_6->setText(QApplication::translate("Ihm", "Initialisation", 0));
        label->setText(QApplication::translate("Ihm", "Position :", 0));
        historyLabel->setText(QApplication::translate("Ihm", "History", 0));
        label_4->setText(QApplication::translate("Ihm", "Commands", 0));
        label_7->setText(QApplication::translate("Ihm", "EV3 : ", 0));
        pushButton_8->setText(QApplication::translate("Ihm", ">> GO <<", 0));
        pushButton_3->setText(QApplication::translate("Ihm", "Parking A", 0));
        pushButton_4->setText(QApplication::translate("Ihm", "Parking B", 0));
        pushButton_5->setText(QApplication::translate("Ihm", "Parking C", 0));
        pushButton_6->setText(QApplication::translate("Ihm", "STOP !", 0));
        label_8->setText(QApplication::translate("Ihm", "NXT : ", 0));
        pushButton_7->setText(QApplication::translate("Ihm", ">> GO <<", 0));
        pushButton_9->setText(QApplication::translate("Ihm", "STOP !", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Mario), QApplication::translate("Ihm", "MARIO", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_FM), QApplication::translate("Ihm", "FOLLOW_ME", 0));
    } // retranslateUi

};

namespace Ui {
    class Ihm: public Ui_Ihm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHM_H
