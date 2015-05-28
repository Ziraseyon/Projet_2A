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
#include <QtWidgets/QSlider>
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
    QLabel *marioMapLabel;
    QLabel *marioMapImageLabel;
    QVBoxLayout *verticalLayout_2;
    QLabel *marioConnectionLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *marioConnectEV3Label;
    QLineEdit *marioMacAdressEV3;
    QPushButton *marioConnectEV3Button;
    QHBoxLayout *horizontalLayout_3;
    QLabel *marioConnectNXTLabel;
    QLineEdit *marioMacAdressNXT;
    QPushButton *marioConnectNXTButton;
    QFrame *line_5;
    QLabel *marioInitialisationLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *marioInitPosLabel;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *marioInitComboBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *marioHistoryLabel;
    QListWidget *marioHistory_List;
    QVBoxLayout *verticalLayout_5;
    QLabel *marioCommandsLabel;
    QFrame *line_6;
    QLabel *marioCommandsEV3Lbel;
    QVBoxLayout *verticalLayout_6;
    QPushButton *marioGoEV3Button;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *marioParkingAEV3Button;
    QPushButton *marioParkingBEV3Button;
    QPushButton *marioParkingCEV3Button;
    QPushButton *marioStopEV3Button;
    QFrame *line_7;
    QLabel *marioCommandsNXTLabel;
    QPushButton *marioGoNXTButton;
    QPushButton *marioStopNXTButton;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *tab_FM;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_8;
    QLabel *label_9;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_6;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_9;
    QLabel *label_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSlider *horizontalSlider;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_3;
    QListWidget *listWidget;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_13;
    QFrame *line_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QFrame *line_14;

    void setupUi(QWidget *Ihm)
    {
        if (Ihm->objectName().isEmpty())
            Ihm->setObjectName(QStringLiteral("Ihm"));
        Ihm->resize(990, 631);
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
        marioMapLabel = new QLabel(tab_Mario);
        marioMapLabel->setObjectName(QStringLiteral("marioMapLabel"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        marioMapLabel->setFont(font);
        marioMapLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(marioMapLabel);

        marioMapImageLabel = new QLabel(tab_Mario);
        marioMapImageLabel->setObjectName(QStringLiteral("marioMapImageLabel"));
        marioMapImageLabel->setMinimumSize(QSize(300, 213));
        marioMapImageLabel->setCursor(QCursor(Qt::CrossCursor));
        marioMapImageLabel->setTextFormat(Qt::AutoText);
        marioMapImageLabel->setPixmap(QPixmap(QString::fromUtf8("../../img/c4.png")));
        marioMapImageLabel->setScaledContents(true);
        marioMapImageLabel->setOpenExternalLinks(false);

        verticalLayout_3->addWidget(marioMapImageLabel);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        marioConnectionLabel = new QLabel(tab_Mario);
        marioConnectionLabel->setObjectName(QStringLiteral("marioConnectionLabel"));
        marioConnectionLabel->setFont(font);
        marioConnectionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(marioConnectionLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        marioConnectEV3Label = new QLabel(tab_Mario);
        marioConnectEV3Label->setObjectName(QStringLiteral("marioConnectEV3Label"));

        horizontalLayout_2->addWidget(marioConnectEV3Label);

        marioMacAdressEV3 = new QLineEdit(tab_Mario);
        marioMacAdressEV3->setObjectName(QStringLiteral("marioMacAdressEV3"));
        marioMacAdressEV3->setMaxLength(17);

        horizontalLayout_2->addWidget(marioMacAdressEV3);

        marioConnectEV3Button = new QPushButton(tab_Mario);
        marioConnectEV3Button->setObjectName(QStringLiteral("marioConnectEV3Button"));

        horizontalLayout_2->addWidget(marioConnectEV3Button);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        marioConnectNXTLabel = new QLabel(tab_Mario);
        marioConnectNXTLabel->setObjectName(QStringLiteral("marioConnectNXTLabel"));

        horizontalLayout_3->addWidget(marioConnectNXTLabel);

        marioMacAdressNXT = new QLineEdit(tab_Mario);
        marioMacAdressNXT->setObjectName(QStringLiteral("marioMacAdressNXT"));
        marioMacAdressNXT->setMaxLength(17);

        horizontalLayout_3->addWidget(marioMacAdressNXT);

        marioConnectNXTButton = new QPushButton(tab_Mario);
        marioConnectNXTButton->setObjectName(QStringLiteral("marioConnectNXTButton"));

        horizontalLayout_3->addWidget(marioConnectNXTButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line_5 = new QFrame(tab_Mario);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setLineWidth(3);
        line_5->setMidLineWidth(1);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_5);

        marioInitialisationLabel = new QLabel(tab_Mario);
        marioInitialisationLabel->setObjectName(QStringLiteral("marioInitialisationLabel"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        marioInitialisationLabel->setFont(font1);
        marioInitialisationLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(marioInitialisationLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        marioInitPosLabel = new QLabel(tab_Mario);
        marioInitPosLabel->setObjectName(QStringLiteral("marioInitPosLabel"));
        marioInitPosLabel->setMinimumSize(QSize(20, 10));

        horizontalLayout_4->addWidget(marioInitPosLabel);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        marioInitComboBox = new QComboBox(tab_Mario);
        marioInitComboBox->setObjectName(QStringLiteral("marioInitComboBox"));
        marioInitComboBox->setMinimumSize(QSize(50, 10));
        marioInitComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        marioInitComboBox->setFrame(true);

        horizontalLayout_4->addWidget(marioInitComboBox);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        marioHistoryLabel = new QLabel(tab_Mario);
        marioHistoryLabel->setObjectName(QStringLiteral("marioHistoryLabel"));
        marioHistoryLabel->setFont(font1);
        marioHistoryLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(marioHistoryLabel);

        marioHistory_List = new QListWidget(tab_Mario);
        marioHistory_List->setObjectName(QStringLiteral("marioHistory_List"));
        marioHistory_List->setMinimumSize(QSize(300, 213));
        marioHistory_List->setAutoFillBackground(false);
        marioHistory_List->setAlternatingRowColors(false);

        verticalLayout_4->addWidget(marioHistory_List);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        marioCommandsLabel = new QLabel(tab_Mario);
        marioCommandsLabel->setObjectName(QStringLiteral("marioCommandsLabel"));
        marioCommandsLabel->setFont(font1);
        marioCommandsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(marioCommandsLabel);

        line_6 = new QFrame(tab_Mario);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_6);

        marioCommandsEV3Lbel = new QLabel(tab_Mario);
        marioCommandsEV3Lbel->setObjectName(QStringLiteral("marioCommandsEV3Lbel"));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        marioCommandsEV3Lbel->setFont(font2);

        verticalLayout_5->addWidget(marioCommandsEV3Lbel);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        marioGoEV3Button = new QPushButton(tab_Mario);
        marioGoEV3Button->setObjectName(QStringLiteral("marioGoEV3Button"));

        verticalLayout_6->addWidget(marioGoEV3Button);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        marioParkingAEV3Button = new QPushButton(tab_Mario);
        marioParkingAEV3Button->setObjectName(QStringLiteral("marioParkingAEV3Button"));

        horizontalLayout_5->addWidget(marioParkingAEV3Button);

        marioParkingBEV3Button = new QPushButton(tab_Mario);
        marioParkingBEV3Button->setObjectName(QStringLiteral("marioParkingBEV3Button"));

        horizontalLayout_5->addWidget(marioParkingBEV3Button);

        marioParkingCEV3Button = new QPushButton(tab_Mario);
        marioParkingCEV3Button->setObjectName(QStringLiteral("marioParkingCEV3Button"));

        horizontalLayout_5->addWidget(marioParkingCEV3Button);


        verticalLayout_6->addLayout(horizontalLayout_5);

        marioStopEV3Button = new QPushButton(tab_Mario);
        marioStopEV3Button->setObjectName(QStringLiteral("marioStopEV3Button"));

        verticalLayout_6->addWidget(marioStopEV3Button);


        verticalLayout_5->addLayout(verticalLayout_6);

        line_7 = new QFrame(tab_Mario);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setFrameShape(QFrame::HLine);

        verticalLayout_5->addWidget(line_7);

        marioCommandsNXTLabel = new QLabel(tab_Mario);
        marioCommandsNXTLabel->setObjectName(QStringLiteral("marioCommandsNXTLabel"));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        marioCommandsNXTLabel->setFont(font3);

        verticalLayout_5->addWidget(marioCommandsNXTLabel);

        marioGoNXTButton = new QPushButton(tab_Mario);
        marioGoNXTButton->setObjectName(QStringLiteral("marioGoNXTButton"));

        verticalLayout_5->addWidget(marioGoNXTButton);

        marioStopNXTButton = new QPushButton(tab_Mario);
        marioStopNXTButton->setObjectName(QStringLiteral("marioStopNXTButton"));

        verticalLayout_5->addWidget(marioStopNXTButton);


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
        gridLayout_4 = new QGridLayout(tab_FM);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_4 = new QLabel(tab_FM);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_10->addItem(verticalSpacer_2);

        line_8 = new QFrame(tab_FM);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShadow(QFrame::Plain);
        line_8->setFrameShape(QFrame::HLine);

        verticalLayout_10->addWidget(line_8);

        label_9 = new QLabel(tab_FM);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_10->addWidget(label_9);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButton_5 = new QPushButton(tab_FM);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setCheckable(true);

        gridLayout_5->addWidget(pushButton_5, 1, 4, 1, 1);

        pushButton_9 = new QPushButton(tab_FM);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout_5->addWidget(pushButton_9, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(tab_FM);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_5->addWidget(pushButton_3, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(tab_FM);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_5->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(tab_FM);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_5->addWidget(pushButton_7, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(tab_FM);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setCheckable(true);

        gridLayout_5->addWidget(pushButton_8, 0, 4, 1, 1);

        pushButton_10 = new QPushButton(tab_FM);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setCheckable(true);

        gridLayout_5->addWidget(pushButton_10, 2, 4, 1, 1);

        pushButton_6 = new QPushButton(tab_FM);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setCheckable(true);
        pushButton_6->setChecked(false);
        pushButton_6->setDefault(false);

        gridLayout_5->addWidget(pushButton_6, 0, 5, 1, 1);

        pushButton_13 = new QPushButton(tab_FM);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        gridLayout_5->addWidget(pushButton_13, 1, 5, 1, 1);

        pushButton_14 = new QPushButton(tab_FM);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        gridLayout_5->addWidget(pushButton_14, 2, 5, 1, 1);


        verticalLayout_10->addLayout(gridLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        line_9 = new QFrame(tab_FM);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_9);

        label_10 = new QLabel(tab_FM);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_10->addWidget(label_10);

        pushButton_11 = new QPushButton(tab_FM);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout_10->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(tab_FM);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        verticalLayout_10->addWidget(pushButton_12);


        gridLayout_3->addLayout(verticalLayout_10, 2, 2, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label = new QLabel(tab_FM);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(tab_FM);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        horizontalSlider = new QSlider(tab_FM);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(300, 30));
        QFont font4;
        font4.setStyleStrategy(QFont::PreferAntialias);
        horizontalSlider->setFont(font4);
        horizontalSlider->setCursor(QCursor(Qt::ArrowCursor));
        horizontalSlider->setValue(49);
        horizontalSlider->setTracking(false);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);
        horizontalSlider->setTickInterval(2);

        horizontalLayout_6->addWidget(horizontalSlider);

        label_6 = new QLabel(tab_FM);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);


        verticalLayout_7->addLayout(horizontalLayout_6);


        gridLayout_3->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_3 = new QLabel(tab_FM);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_3);

        listWidget = new QListWidget(tab_FM);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_9->addWidget(listWidget);


        gridLayout_3->addLayout(verticalLayout_9, 2, 0, 1, 1);

        line_11 = new QFrame(tab_FM);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setLineWidth(3);
        line_11->setMidLineWidth(1);
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_11, 2, 1, 1, 1);

        line_12 = new QFrame(tab_FM);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setLineWidth(3);
        line_12->setMidLineWidth(1);
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_12, 1, 0, 1, 1);

        line_13 = new QFrame(tab_FM);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_13, 1, 1, 1, 1);

        line_10 = new QFrame(tab_FM);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setLineWidth(3);
        line_10->setMidLineWidth(1);
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_10, 0, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_2 = new QLabel(tab_FM);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(tab_FM);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit = new QLineEdit(tab_FM);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(17);

        horizontalLayout_7->addWidget(lineEdit);

        pushButton = new QPushButton(tab_FM);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_7->addWidget(pushButton);


        verticalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(tab_FM);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_2 = new QLineEdit(tab_FM);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaxLength(17);

        horizontalLayout_8->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(tab_FM);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_8->addWidget(pushButton_2);


        verticalLayout_8->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_8->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout_8, 0, 2, 1, 1);

        line_14 = new QFrame(tab_FM);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setLineWidth(3);
        line_14->setMidLineWidth(1);
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_14, 1, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

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
        marioMapLabel->setText(QApplication::translate("Ihm", "Map", 0));
        marioMapImageLabel->setText(QString());
        marioConnectionLabel->setText(QApplication::translate("Ihm", "Connection", 0));
        marioConnectEV3Label->setText(QApplication::translate("Ihm", "EV3 : ", 0));
        marioMacAdressEV3->setPlaceholderText(QApplication::translate("Ihm", "EV3 Mac Adress", 0));
        marioConnectEV3Button->setText(QApplication::translate("Ihm", ">>", 0));
        marioConnectNXTLabel->setText(QApplication::translate("Ihm", "NXT : ", 0));
        marioMacAdressNXT->setPlaceholderText(QApplication::translate("Ihm", "NXT Mac Adress", 0));
        marioConnectNXTButton->setText(QApplication::translate("Ihm", ">>", 0));
        marioInitialisationLabel->setText(QApplication::translate("Ihm", "Initialisation", 0));
        marioInitPosLabel->setText(QApplication::translate("Ihm", "Position :", 0));
        marioHistoryLabel->setText(QApplication::translate("Ihm", "History", 0));
        marioCommandsLabel->setText(QApplication::translate("Ihm", "Commands", 0));
        marioCommandsEV3Lbel->setText(QApplication::translate("Ihm", "EV3 : ", 0));
        marioGoEV3Button->setText(QApplication::translate("Ihm", ">> GO <<", 0));
        marioParkingAEV3Button->setText(QApplication::translate("Ihm", "Parking A", 0));
        marioParkingBEV3Button->setText(QApplication::translate("Ihm", "Parking B", 0));
        marioParkingCEV3Button->setText(QApplication::translate("Ihm", "Parking C", 0));
        marioStopEV3Button->setText(QApplication::translate("Ihm", "STOP !", 0));
        marioCommandsNXTLabel->setText(QApplication::translate("Ihm", "NXT : ", 0));
        marioGoNXTButton->setText(QApplication::translate("Ihm", ">> GO <<", 0));
        marioStopNXTButton->setText(QApplication::translate("Ihm", "STOP !", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Mario), QApplication::translate("Ihm", "MARIO", 0));
        label_4->setText(QApplication::translate("Ihm", "Commands", 0));
        label_9->setText(QApplication::translate("Ihm", "EV3 : ", 0));
        pushButton_5->setText(QApplication::translate("Ihm", "TURN LEFT", 0));
        pushButton_9->setText(QApplication::translate("Ihm", "BACKWARD", 0));
        pushButton_3->setText(QApplication::translate("Ihm", "LEFT", 0));
        pushButton_4->setText(QApplication::translate("Ihm", "RIGHT", 0));
        pushButton_7->setText(QApplication::translate("Ihm", "FORWARD", 0));
        pushButton_8->setText(QApplication::translate("Ihm", ">> GO <<", 0));
        pushButton_10->setText(QApplication::translate("Ihm", "U-TURN LEFT", 0));
        pushButton_6->setText(QApplication::translate("Ihm", "STOP !", 0));
        pushButton_13->setText(QApplication::translate("Ihm", "TURN RIGHT", 0));
        pushButton_14->setText(QApplication::translate("Ihm", "U-TURN RIGHT", 0));
        label_10->setText(QApplication::translate("Ihm", "NXT : ", 0));
        pushButton_11->setText(QApplication::translate("Ihm", ">> GO <<", 0));
        pushButton_12->setText(QApplication::translate("Ihm", "STOP !", 0));
        label->setText(QApplication::translate("Ihm", "Distance", 0));
        label_5->setText(QApplication::translate("Ihm", "Too Close", 0));
        label_6->setText(QApplication::translate("Ihm", "Too Far", 0));
        label_3->setText(QApplication::translate("Ihm", "History", 0));
        label_2->setText(QApplication::translate("Ihm", "Connection", 0));
        label_7->setText(QApplication::translate("Ihm", "EV3 : ", 0));
        lineEdit->setPlaceholderText(QApplication::translate("Ihm", "EV3 Mac Adress", 0));
        pushButton->setText(QApplication::translate("Ihm", ">>", 0));
        label_8->setText(QApplication::translate("Ihm", "NXT : ", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("Ihm", "NXT Mac Adress", 0));
        pushButton_2->setText(QApplication::translate("Ihm", ">>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_FM), QApplication::translate("Ihm", "FOLLOW_ME", 0));
    } // retranslateUi

};

namespace Ui {
    class Ihm: public Ui_Ihm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHM_H
