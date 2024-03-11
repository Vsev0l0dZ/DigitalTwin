/********************************************************************************
** Form generated from reading UI file 'mainwindowDT.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWDT_H
#define UI_MAINWINDOWDT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDT
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditPort;
    QPushButton *pushButtonStartServer;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *pitchLabel;
    QLabel *pitchValue;
    QLabel *roleLabel;
    QLabel *rollValue;
    QLabel *yawLabel;
    QLabel *yawValue;
    QLabel *depthLabel;
    QLabel *depthValue;
    QLabel *mipLabel;
    QLabel *mipValue;
    QLabel *midTitle;
    QLabel *midValue;
    QLabel *rollMotorLabel;
    QLabel *rollMotorValue;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *rudderLabel;
    QLabel *rudderValue;
    QLabel *latitudeLabel;
    QLabel *latValue;
    QLabel *longitudeLabel;
    QLabel *lonValue;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditCommand;
    QPushButton *pushButtonSendCommand;
    QLineEdit *lineEditTimerDelta;
    QPushButton *pushButtonTimerDelta;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonMissionMode;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonMissionName;
    QLineEdit *lineEditNameOfMission;
    QPushButton *pushButtonRunMission;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDT)
    {
        if (MainWindowDT->objectName().isEmpty())
            MainWindowDT->setObjectName(QString::fromUtf8("MainWindowDT"));
        MainWindowDT->resize(611, 437);
        centralwidget = new QWidget(MainWindowDT);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 127, 78));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label, 0, Qt::AlignLeft|Qt::AlignVCenter);

        lineEditPort = new QLineEdit(layoutWidget);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setEnabled(true);

        verticalLayout->addWidget(lineEditPort);

        pushButtonStartServer = new QPushButton(layoutWidget);
        pushButtonStartServer->setObjectName(QString::fromUtf8("pushButtonStartServer"));

        verticalLayout->addWidget(pushButtonStartServer);

        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 150, 151, 188));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        pitchLabel = new QLabel(formLayoutWidget);
        pitchLabel->setObjectName(QString::fromUtf8("pitchLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pitchLabel);

        pitchValue = new QLabel(formLayoutWidget);
        pitchValue->setObjectName(QString::fromUtf8("pitchValue"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pitchValue);

        roleLabel = new QLabel(formLayoutWidget);
        roleLabel->setObjectName(QString::fromUtf8("roleLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, roleLabel);

        rollValue = new QLabel(formLayoutWidget);
        rollValue->setObjectName(QString::fromUtf8("rollValue"));

        formLayout->setWidget(1, QFormLayout::FieldRole, rollValue);

        yawLabel = new QLabel(formLayoutWidget);
        yawLabel->setObjectName(QString::fromUtf8("yawLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, yawLabel);

        yawValue = new QLabel(formLayoutWidget);
        yawValue->setObjectName(QString::fromUtf8("yawValue"));

        formLayout->setWidget(2, QFormLayout::FieldRole, yawValue);

        depthLabel = new QLabel(formLayoutWidget);
        depthLabel->setObjectName(QString::fromUtf8("depthLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, depthLabel);

        depthValue = new QLabel(formLayoutWidget);
        depthValue->setObjectName(QString::fromUtf8("depthValue"));

        formLayout->setWidget(3, QFormLayout::FieldRole, depthValue);

        mipLabel = new QLabel(formLayoutWidget);
        mipLabel->setObjectName(QString::fromUtf8("mipLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mipLabel);

        mipValue = new QLabel(formLayoutWidget);
        mipValue->setObjectName(QString::fromUtf8("mipValue"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mipValue);

        midTitle = new QLabel(formLayoutWidget);
        midTitle->setObjectName(QString::fromUtf8("midTitle"));

        formLayout->setWidget(5, QFormLayout::LabelRole, midTitle);

        midValue = new QLabel(formLayoutWidget);
        midValue->setObjectName(QString::fromUtf8("midValue"));

        formLayout->setWidget(5, QFormLayout::FieldRole, midValue);

        rollMotorLabel = new QLabel(formLayoutWidget);
        rollMotorLabel->setObjectName(QString::fromUtf8("rollMotorLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, rollMotorLabel);

        rollMotorValue = new QLabel(formLayoutWidget);
        rollMotorValue->setObjectName(QString::fromUtf8("rollMotorValue"));

        formLayout->setWidget(6, QFormLayout::FieldRole, rollMotorValue);

        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(190, 150, 160, 80));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        rudderLabel = new QLabel(formLayoutWidget_2);
        rudderLabel->setObjectName(QString::fromUtf8("rudderLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, rudderLabel);

        rudderValue = new QLabel(formLayoutWidget_2);
        rudderValue->setObjectName(QString::fromUtf8("rudderValue"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, rudderValue);

        latitudeLabel = new QLabel(formLayoutWidget_2);
        latitudeLabel->setObjectName(QString::fromUtf8("latitudeLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, latitudeLabel);

        latValue = new QLabel(formLayoutWidget_2);
        latValue->setObjectName(QString::fromUtf8("latValue"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, latValue);

        longitudeLabel = new QLabel(formLayoutWidget_2);
        longitudeLabel->setObjectName(QString::fromUtf8("longitudeLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, longitudeLabel);

        lonValue = new QLabel(formLayoutWidget_2);
        lonValue->setObjectName(QString::fromUtf8("lonValue"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lonValue);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(190, 10, 127, 116));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditCommand = new QLineEdit(verticalLayoutWidget);
        lineEditCommand->setObjectName(QString::fromUtf8("lineEditCommand"));

        verticalLayout_2->addWidget(lineEditCommand);

        pushButtonSendCommand = new QPushButton(verticalLayoutWidget);
        pushButtonSendCommand->setObjectName(QString::fromUtf8("pushButtonSendCommand"));
        pushButtonSendCommand->setAutoDefault(false);

        verticalLayout_2->addWidget(pushButtonSendCommand);

        lineEditTimerDelta = new QLineEdit(verticalLayoutWidget);
        lineEditTimerDelta->setObjectName(QString::fromUtf8("lineEditTimerDelta"));

        verticalLayout_2->addWidget(lineEditTimerDelta);

        pushButtonTimerDelta = new QPushButton(verticalLayoutWidget);
        pushButtonTimerDelta->setObjectName(QString::fromUtf8("pushButtonTimerDelta"));
        pushButtonTimerDelta->setAutoDefault(false);

        verticalLayout_2->addWidget(pushButtonTimerDelta);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(190, 240, 391, 151));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        pushButtonMissionMode = new QPushButton(verticalLayoutWidget_2);
        pushButtonMissionMode->setObjectName(QString::fromUtf8("pushButtonMissionMode"));

        horizontalLayout->addWidget(pushButtonMissionMode);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        pushButtonMissionName = new QPushButton(verticalLayoutWidget_2);
        pushButtonMissionName->setObjectName(QString::fromUtf8("pushButtonMissionName"));

        horizontalLayout_2->addWidget(pushButtonMissionName);

        lineEditNameOfMission = new QLineEdit(verticalLayoutWidget_2);
        lineEditNameOfMission->setObjectName(QString::fromUtf8("lineEditNameOfMission"));

        horizontalLayout_2->addWidget(lineEditNameOfMission);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButtonRunMission = new QPushButton(verticalLayoutWidget_2);
        pushButtonRunMission->setObjectName(QString::fromUtf8("pushButtonRunMission"));

        verticalLayout_3->addWidget(pushButtonRunMission);

        MainWindowDT->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDT);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 611, 21));
        MainWindowDT->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDT);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowDT->setStatusBar(statusbar);

        retranslateUi(MainWindowDT);

        pushButtonSendCommand->setDefault(false);
        pushButtonTimerDelta->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindowDT);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDT)
    {
        MainWindowDT->setWindowTitle(QCoreApplication::translate("MainWindowDT", "MainWindowDT", nullptr));
        label->setText(QCoreApplication::translate("MainWindowDT", "Port", nullptr));
        lineEditPort->setText(QCoreApplication::translate("MainWindowDT", "3000", nullptr));
        pushButtonStartServer->setText(QCoreApplication::translate("MainWindowDT", "Start server", nullptr));
        pitchLabel->setText(QCoreApplication::translate("MainWindowDT", "Pitch", nullptr));
        pitchValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        roleLabel->setText(QCoreApplication::translate("MainWindowDT", "Roll", nullptr));
        rollValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        yawLabel->setText(QCoreApplication::translate("MainWindowDT", "Yaw", nullptr));
        yawValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        depthLabel->setText(QCoreApplication::translate("MainWindowDT", "Depth", nullptr));
        depthValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        mipLabel->setText(QCoreApplication::translate("MainWindowDT", "MIP", nullptr));
        mipValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        midTitle->setText(QCoreApplication::translate("MainWindowDT", "MID", nullptr));
        midValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        rollMotorLabel->setText(QCoreApplication::translate("MainWindowDT", "Roll (Motor)", nullptr));
        rollMotorValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        rudderLabel->setText(QCoreApplication::translate("MainWindowDT", "Rudder", nullptr));
        rudderValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        latitudeLabel->setText(QCoreApplication::translate("MainWindowDT", "Latitude", nullptr));
        latValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        longitudeLabel->setText(QCoreApplication::translate("MainWindowDT", "Longitude", nullptr));
        lonValue->setText(QCoreApplication::translate("MainWindowDT", "- - - // - - -", nullptr));
        pushButtonSendCommand->setText(QCoreApplication::translate("MainWindowDT", "Send a Command", nullptr));
        pushButtonTimerDelta->setText(QCoreApplication::translate("MainWindowDT", "Set Timer Delta", nullptr));
        pushButtonMissionMode->setText(QCoreApplication::translate("MainWindowDT", "send mode mission", nullptr));
        pushButtonMissionName->setText(QCoreApplication::translate("MainWindowDT", "set mission_name", nullptr));
        pushButtonRunMission->setText(QCoreApplication::translate("MainWindowDT", "set mission run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDT: public Ui_MainWindowDT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWDT_H
