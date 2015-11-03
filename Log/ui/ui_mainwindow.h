/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed May 15 12:32:50 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label1;
    QLabel *cell_Id;
    QLabel *label1_3;
    QLabel *MCC;
    QLabel *label1_2;
    QLabel *MNC;
    QLabel *label1_5;
    QLabel *LAC;
    QLabel *label1_31;
    QLabel *batteryInd;
    QLabel *label1_32;
    QLabel *networkInd;
    QLabel *label1_12;
    QLabel *callStatus;
    QLabel *label1_11;
    QLabel *label_Timestamp;
    QLabel *label1_16;
    QLabel *techno;
    QLabel *label1_13;
    QLabel *label_DataStatus;
    QLabel *label1_6;
    QLabel *label_Latitude;
    QLabel *label1_7;
    QLabel *label_Longitude;
    QLabel *label1_8;
    QLabel *label_Altitude;
    QLabel *label1_9;
    QLabel *label_Accuray;
    QLabel *label1_10;
    QLabel *label_Speed;
    QLabel *label1_14;
    QLabel *label_Angle;
    QLabel *label1_15;
    QLabel *file_Size;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *spT;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLineEdit *tech;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLineEdit *call_stat;
    QPushButton *pushButton_6;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(360, 640);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(-1, 1, 361, 581));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 579));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label1 = new QLabel(scrollAreaWidgetContents);
        label1->setObjectName(QString::fromUtf8("label1"));

        gridLayout->addWidget(label1, 0, 0, 1, 1);

        cell_Id = new QLabel(scrollAreaWidgetContents);
        cell_Id->setObjectName(QString::fromUtf8("cell_Id"));

        gridLayout->addWidget(cell_Id, 0, 1, 1, 1);

        label1_3 = new QLabel(scrollAreaWidgetContents);
        label1_3->setObjectName(QString::fromUtf8("label1_3"));

        gridLayout->addWidget(label1_3, 1, 0, 1, 1);

        MCC = new QLabel(scrollAreaWidgetContents);
        MCC->setObjectName(QString::fromUtf8("MCC"));

        gridLayout->addWidget(MCC, 1, 1, 1, 1);

        label1_2 = new QLabel(scrollAreaWidgetContents);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));

        gridLayout->addWidget(label1_2, 2, 0, 1, 1);

        MNC = new QLabel(scrollAreaWidgetContents);
        MNC->setObjectName(QString::fromUtf8("MNC"));

        gridLayout->addWidget(MNC, 2, 1, 1, 1);

        label1_5 = new QLabel(scrollAreaWidgetContents);
        label1_5->setObjectName(QString::fromUtf8("label1_5"));

        gridLayout->addWidget(label1_5, 3, 0, 1, 1);

        LAC = new QLabel(scrollAreaWidgetContents);
        LAC->setObjectName(QString::fromUtf8("LAC"));

        gridLayout->addWidget(LAC, 3, 1, 1, 1);

        label1_31 = new QLabel(scrollAreaWidgetContents);
        label1_31->setObjectName(QString::fromUtf8("label1_31"));

        gridLayout->addWidget(label1_31, 4, 0, 1, 1);

        batteryInd = new QLabel(scrollAreaWidgetContents);
        batteryInd->setObjectName(QString::fromUtf8("batteryInd"));

        gridLayout->addWidget(batteryInd, 4, 1, 1, 1);

        label1_32 = new QLabel(scrollAreaWidgetContents);
        label1_32->setObjectName(QString::fromUtf8("label1_32"));

        gridLayout->addWidget(label1_32, 5, 0, 1, 1);

        networkInd = new QLabel(scrollAreaWidgetContents);
        networkInd->setObjectName(QString::fromUtf8("networkInd"));

        gridLayout->addWidget(networkInd, 5, 1, 1, 1);

        label1_12 = new QLabel(scrollAreaWidgetContents);
        label1_12->setObjectName(QString::fromUtf8("label1_12"));

        gridLayout->addWidget(label1_12, 6, 0, 1, 1);

        callStatus = new QLabel(scrollAreaWidgetContents);
        callStatus->setObjectName(QString::fromUtf8("callStatus"));

        gridLayout->addWidget(callStatus, 6, 1, 1, 1);

        label1_11 = new QLabel(scrollAreaWidgetContents);
        label1_11->setObjectName(QString::fromUtf8("label1_11"));

        gridLayout->addWidget(label1_11, 7, 0, 1, 1);

        label_Timestamp = new QLabel(scrollAreaWidgetContents);
        label_Timestamp->setObjectName(QString::fromUtf8("label_Timestamp"));

        gridLayout->addWidget(label_Timestamp, 7, 1, 1, 1);

        label1_16 = new QLabel(scrollAreaWidgetContents);
        label1_16->setObjectName(QString::fromUtf8("label1_16"));

        gridLayout->addWidget(label1_16, 8, 0, 1, 1);

        techno = new QLabel(scrollAreaWidgetContents);
        techno->setObjectName(QString::fromUtf8("techno"));

        gridLayout->addWidget(techno, 8, 1, 1, 1);

        label1_13 = new QLabel(scrollAreaWidgetContents);
        label1_13->setObjectName(QString::fromUtf8("label1_13"));

        gridLayout->addWidget(label1_13, 9, 0, 1, 1);

        label_DataStatus = new QLabel(scrollAreaWidgetContents);
        label_DataStatus->setObjectName(QString::fromUtf8("label_DataStatus"));

        gridLayout->addWidget(label_DataStatus, 9, 1, 1, 1);

        label1_6 = new QLabel(scrollAreaWidgetContents);
        label1_6->setObjectName(QString::fromUtf8("label1_6"));

        gridLayout->addWidget(label1_6, 10, 0, 1, 1);

        label_Latitude = new QLabel(scrollAreaWidgetContents);
        label_Latitude->setObjectName(QString::fromUtf8("label_Latitude"));

        gridLayout->addWidget(label_Latitude, 10, 1, 1, 1);

        label1_7 = new QLabel(scrollAreaWidgetContents);
        label1_7->setObjectName(QString::fromUtf8("label1_7"));

        gridLayout->addWidget(label1_7, 11, 0, 1, 1);

        label_Longitude = new QLabel(scrollAreaWidgetContents);
        label_Longitude->setObjectName(QString::fromUtf8("label_Longitude"));

        gridLayout->addWidget(label_Longitude, 11, 1, 1, 1);

        label1_8 = new QLabel(scrollAreaWidgetContents);
        label1_8->setObjectName(QString::fromUtf8("label1_8"));

        gridLayout->addWidget(label1_8, 12, 0, 1, 1);

        label_Altitude = new QLabel(scrollAreaWidgetContents);
        label_Altitude->setObjectName(QString::fromUtf8("label_Altitude"));

        gridLayout->addWidget(label_Altitude, 12, 1, 1, 1);

        label1_9 = new QLabel(scrollAreaWidgetContents);
        label1_9->setObjectName(QString::fromUtf8("label1_9"));

        gridLayout->addWidget(label1_9, 13, 0, 1, 1);

        label_Accuray = new QLabel(scrollAreaWidgetContents);
        label_Accuray->setObjectName(QString::fromUtf8("label_Accuray"));

        gridLayout->addWidget(label_Accuray, 13, 1, 1, 1);

        label1_10 = new QLabel(scrollAreaWidgetContents);
        label1_10->setObjectName(QString::fromUtf8("label1_10"));

        gridLayout->addWidget(label1_10, 14, 0, 1, 1);

        label_Speed = new QLabel(scrollAreaWidgetContents);
        label_Speed->setObjectName(QString::fromUtf8("label_Speed"));

        gridLayout->addWidget(label_Speed, 14, 1, 1, 1);

        label1_14 = new QLabel(scrollAreaWidgetContents);
        label1_14->setObjectName(QString::fromUtf8("label1_14"));

        gridLayout->addWidget(label1_14, 15, 0, 1, 1);

        label_Angle = new QLabel(scrollAreaWidgetContents);
        label_Angle->setObjectName(QString::fromUtf8("label_Angle"));

        gridLayout->addWidget(label_Angle, 15, 1, 1, 1);

        label1_15 = new QLabel(scrollAreaWidgetContents);
        label1_15->setObjectName(QString::fromUtf8("label1_15"));
        QFont font;
        font.setPointSize(10);
        label1_15->setFont(font);

        gridLayout->addWidget(label1_15, 16, 0, 1, 1);

        file_Size = new QLabel(scrollAreaWidgetContents);
        file_Size->setObjectName(QString::fromUtf8("file_Size"));
        file_Size->setFont(font);

        gridLayout->addWidget(file_Size, 16, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 230, 361, 361));
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(10);
        horizontalSlider->setValue(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickInterval(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, horizontalSlider);

        spT = new QLabel(groupBox);
        spT->setObjectName(QString::fromUtf8("spT"));

        formLayout->setWidget(1, QFormLayout::LabelRole, spT);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(6);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        tech = new QLineEdit(groupBox);
        tech->setObjectName(QString::fromUtf8("tech"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tech->sizePolicy().hasHeightForWidth());
        tech->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::FieldRole, tech);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_5);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        call_stat = new QLineEdit(groupBox);
        call_stat->setObjectName(QString::fromUtf8("call_stat"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(13);
        sizePolicy2.setHeightForWidth(call_stat->sizePolicy().hasHeightForWidth());
        call_stat->setSizePolicy(sizePolicy2);

        formLayout->setWidget(4, QFormLayout::FieldRole, call_stat);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton_6);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 580, 361, 51));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCheckable(true);

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCheckable(true);

        gridLayout_3->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 360, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("MainWindow", "Cell Id", 0, QApplication::UnicodeUTF8));
        cell_Id->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_3->setText(QApplication::translate("MainWindow", "MCC", 0, QApplication::UnicodeUTF8));
        MCC->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_2->setText(QApplication::translate("MainWindow", "MNC", 0, QApplication::UnicodeUTF8));
        MNC->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_5->setText(QApplication::translate("MainWindow", "LAC", 0, QApplication::UnicodeUTF8));
        LAC->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_31->setText(QApplication::translate("MainWindow", "Battery", 0, QApplication::UnicodeUTF8));
        batteryInd->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_32->setText(QApplication::translate("MainWindow", "Network", 0, QApplication::UnicodeUTF8));
        networkInd->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_12->setText(QApplication::translate("MainWindow", "Call Status", 0, QApplication::UnicodeUTF8));
        callStatus->setText(QApplication::translate("MainWindow", "Idle", 0, QApplication::UnicodeUTF8));
        label1_11->setText(QApplication::translate("MainWindow", "Timestamp", 0, QApplication::UnicodeUTF8));
        label_Timestamp->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_16->setText(QApplication::translate("MainWindow", "Technology", 0, QApplication::UnicodeUTF8));
        techno->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_13->setText(QApplication::translate("MainWindow", "Data Status", 0, QApplication::UnicodeUTF8));
        label_DataStatus->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_6->setText(QApplication::translate("MainWindow", "Latitude", 0, QApplication::UnicodeUTF8));
        label_Latitude->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_7->setText(QApplication::translate("MainWindow", "Longitude", 0, QApplication::UnicodeUTF8));
        label_Longitude->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_8->setText(QApplication::translate("MainWindow", "Altitude", 0, QApplication::UnicodeUTF8));
        label_Altitude->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_9->setText(QApplication::translate("MainWindow", "Accuray", 0, QApplication::UnicodeUTF8));
        label_Accuray->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_10->setText(QApplication::translate("MainWindow", "Speed", 0, QApplication::UnicodeUTF8));
        label_Speed->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_14->setText(QApplication::translate("MainWindow", "Angle", 0, QApplication::UnicodeUTF8));
        label_Angle->setText(QApplication::translate("MainWindow", "Loading", 0, QApplication::UnicodeUTF8));
        label1_15->setText(QApplication::translate("MainWindow", "Counter", 0, QApplication::UnicodeUTF8));
        file_Size->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Sampling Time:", 0, QApplication::UnicodeUTF8));
        spT->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Technology", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Call State", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "Set", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "&Options", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "&Start Log", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
