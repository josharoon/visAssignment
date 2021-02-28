/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *ControlWidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QDoubleSpinBox *bX;
    QDoubleSpinBox *bY;
    QDoubleSpinBox *bZ;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_Mu;
    QDoubleSpinBox *MuXSpin;
    QDoubleSpinBox *MuYSpin;
    QDoubleSpinBox *MuZSpin;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_11;
    QDoubleSpinBox *dSpin;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_12;
    QDoubleSpinBox *alphaSpinBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *eyeLabelsLayout_2;
    QLabel *eyeXlabel_2;
    QLabel *eyeZlabel_2;
    QLabel *eyeYlabel_2;
    QVBoxLayout *eyeSpinBoxLayout_2;
    QDoubleSpinBox *eyeXspin_2;
    QDoubleSpinBox *eyeYspin_2;
    QDoubleSpinBox *eyeZspin_2;
    QPushButton *Default;
    QVBoxLayout *LookAtLabelsLayout_2;
    QLabel *LookAtXlabel_2;
    QLabel *LookAtZlabel_2;
    QLabel *LookAtYlabel_2;
    QVBoxLayout *LookAtSpinBoxLayout_2;
    QDoubleSpinBox *LookAtXspin_2;
    QDoubleSpinBox *LookAtYspin_2;
    QDoubleSpinBox *LookAtZspin_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(512, 768);
        MainWindow->setMinimumSize(QSize(512, 768));
        MainWindow->setMaximumSize(QSize(2048, 2048));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(384, 512));
        centralwidget->setMaximumSize(QSize(1024, 768));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        ControlWidget = new QWidget(centralwidget);
        ControlWidget->setObjectName(QString::fromUtf8("ControlWidget"));
        ControlWidget->setGeometry(QRect(0, 0, 512, 256));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ControlWidget->sizePolicy().hasHeightForWidth());
        ControlWidget->setSizePolicy(sizePolicy1);
        ControlWidget->setMaximumSize(QSize(512, 256));
        verticalLayout_8 = new QVBoxLayout(ControlWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_7 = new QLabel(ControlWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_9->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_8 = new QLabel(ControlWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(56, 16777215));

        verticalLayout_10->addWidget(label_8);

        bX = new QDoubleSpinBox(ControlWidget);
        bX->setObjectName(QString::fromUtf8("bX"));
        bX->setMaximumSize(QSize(56, 16777215));
        bX->setMinimum(-99.000000000000000);

        verticalLayout_10->addWidget(bX);

        bY = new QDoubleSpinBox(ControlWidget);
        bY->setObjectName(QString::fromUtf8("bY"));
        bY->setMaximumSize(QSize(56, 16777215));
        bY->setMinimum(-99.000000000000000);

        verticalLayout_10->addWidget(bY);

        bZ = new QDoubleSpinBox(ControlWidget);
        bZ->setObjectName(QString::fromUtf8("bZ"));
        bZ->setMaximumSize(QSize(56, 16777215));
        bZ->setMinimum(-99.000000000000000);

        verticalLayout_10->addWidget(bZ);


        horizontalLayout_5->addLayout(verticalLayout_10);

        label_9 = new QLabel(ControlWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(56, 16777215));

        horizontalLayout_5->addWidget(label_9);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_Mu = new QLabel(ControlWidget);
        label_Mu->setObjectName(QString::fromUtf8("label_Mu"));

        verticalLayout_11->addWidget(label_Mu);

        MuXSpin = new QDoubleSpinBox(ControlWidget);
        MuXSpin->setObjectName(QString::fromUtf8("MuXSpin"));
        MuXSpin->setMaximumSize(QSize(56, 16777215));
        MuXSpin->setMinimum(-99.000000000000000);

        verticalLayout_11->addWidget(MuXSpin);

        MuYSpin = new QDoubleSpinBox(ControlWidget);
        MuYSpin->setObjectName(QString::fromUtf8("MuYSpin"));
        MuYSpin->setMaximumSize(QSize(56, 16777215));
        MuYSpin->setMinimum(-99.000000000000000);
        MuYSpin->setValue(1.000000000000000);

        verticalLayout_11->addWidget(MuYSpin);

        MuZSpin = new QDoubleSpinBox(ControlWidget);
        MuZSpin->setObjectName(QString::fromUtf8("MuZSpin"));
        MuZSpin->setMaximumSize(QSize(56, 16777215));
        MuZSpin->setMinimum(-99.000000000000000);

        verticalLayout_11->addWidget(MuZSpin);


        horizontalLayout_5->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_12->setContentsMargins(10, 10, 10, 10);
        label_11 = new QLabel(ControlWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMaximumSize(QSize(56, 16777215));

        verticalLayout_12->addWidget(label_11);

        dSpin = new QDoubleSpinBox(ControlWidget);
        dSpin->setObjectName(QString::fromUtf8("dSpin"));
        sizePolicy2.setHeightForWidth(dSpin->sizePolicy().hasHeightForWidth());
        dSpin->setSizePolicy(sizePolicy2);
        dSpin->setMaximumSize(QSize(56, 16777215));
        dSpin->setMinimum(-99.000000000000000);
        dSpin->setValue(1.000000000000000);

        verticalLayout_12->addWidget(dSpin);


        horizontalLayout_5->addLayout(verticalLayout_12);


        verticalLayout_9->addLayout(horizontalLayout_5);


        horizontalLayout_4->addLayout(verticalLayout_9);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setSizeConstraint(QLayout::SetMaximumSize);
        label_12 = new QLabel(ControlWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setMaximumSize(QSize(112, 24));

        verticalLayout_13->addWidget(label_12);

        alphaSpinBox = new QDoubleSpinBox(ControlWidget);
        alphaSpinBox->setObjectName(QString::fromUtf8("alphaSpinBox"));
        alphaSpinBox->setMaximumSize(QSize(56, 16777215));
        alphaSpinBox->setMinimum(-360.000000000000000);
        alphaSpinBox->setMaximum(360.000000000000000);
        alphaSpinBox->setValue(1.000000000000000);

        verticalLayout_13->addWidget(alphaSpinBox);


        horizontalLayout_4->addLayout(verticalLayout_13);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_8->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_6->setContentsMargins(-1, -1, 5, -1);
        eyeLabelsLayout_2 = new QVBoxLayout();
        eyeLabelsLayout_2->setSpacing(1);
        eyeLabelsLayout_2->setObjectName(QString::fromUtf8("eyeLabelsLayout_2"));
        eyeLabelsLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        eyeLabelsLayout_2->setContentsMargins(-1, 0, 0, 0);
        eyeXlabel_2 = new QLabel(ControlWidget);
        eyeXlabel_2->setObjectName(QString::fromUtf8("eyeXlabel_2"));
        eyeXlabel_2->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(eyeXlabel_2->sizePolicy().hasHeightForWidth());
        eyeXlabel_2->setSizePolicy(sizePolicy3);
        eyeXlabel_2->setMinimumSize(QSize(112, 0));
        eyeXlabel_2->setMaximumSize(QSize(112, 24));

        eyeLabelsLayout_2->addWidget(eyeXlabel_2);

        eyeZlabel_2 = new QLabel(ControlWidget);
        eyeZlabel_2->setObjectName(QString::fromUtf8("eyeZlabel_2"));
        eyeZlabel_2->setEnabled(true);
        sizePolicy3.setHeightForWidth(eyeZlabel_2->sizePolicy().hasHeightForWidth());
        eyeZlabel_2->setSizePolicy(sizePolicy3);
        eyeZlabel_2->setMinimumSize(QSize(112, 0));
        eyeZlabel_2->setMaximumSize(QSize(112, 24));

        eyeLabelsLayout_2->addWidget(eyeZlabel_2);

        eyeYlabel_2 = new QLabel(ControlWidget);
        eyeYlabel_2->setObjectName(QString::fromUtf8("eyeYlabel_2"));
        eyeYlabel_2->setEnabled(true);
        sizePolicy3.setHeightForWidth(eyeYlabel_2->sizePolicy().hasHeightForWidth());
        eyeYlabel_2->setSizePolicy(sizePolicy3);
        eyeYlabel_2->setMinimumSize(QSize(112, 0));
        eyeYlabel_2->setMaximumSize(QSize(112, 24));

        eyeLabelsLayout_2->addWidget(eyeYlabel_2);


        horizontalLayout_6->addLayout(eyeLabelsLayout_2);

        eyeSpinBoxLayout_2 = new QVBoxLayout();
        eyeSpinBoxLayout_2->setSpacing(1);
        eyeSpinBoxLayout_2->setObjectName(QString::fromUtf8("eyeSpinBoxLayout_2"));
        eyeSpinBoxLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        eyeSpinBoxLayout_2->setContentsMargins(-1, 0, 0, 0);
        eyeXspin_2 = new QDoubleSpinBox(ControlWidget);
        eyeXspin_2->setObjectName(QString::fromUtf8("eyeXspin_2"));
        eyeXspin_2->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(eyeXspin_2->sizePolicy().hasHeightForWidth());
        eyeXspin_2->setSizePolicy(sizePolicy4);
        eyeXspin_2->setMinimumSize(QSize(56, 0));
        eyeXspin_2->setMaximumSize(QSize(56, 24));
        eyeXspin_2->setMinimum(-99.000000000000000);

        eyeSpinBoxLayout_2->addWidget(eyeXspin_2);

        eyeYspin_2 = new QDoubleSpinBox(ControlWidget);
        eyeYspin_2->setObjectName(QString::fromUtf8("eyeYspin_2"));
        eyeYspin_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(eyeYspin_2->sizePolicy().hasHeightForWidth());
        eyeYspin_2->setSizePolicy(sizePolicy4);
        eyeYspin_2->setMinimumSize(QSize(56, 0));
        eyeYspin_2->setMaximumSize(QSize(56, 24));
        eyeYspin_2->setMinimum(-99.000000000000000);

        eyeSpinBoxLayout_2->addWidget(eyeYspin_2);

        eyeZspin_2 = new QDoubleSpinBox(ControlWidget);
        eyeZspin_2->setObjectName(QString::fromUtf8("eyeZspin_2"));
        eyeZspin_2->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(eyeZspin_2->sizePolicy().hasHeightForWidth());
        eyeZspin_2->setSizePolicy(sizePolicy5);
        eyeZspin_2->setMinimumSize(QSize(56, 0));
        eyeZspin_2->setMaximumSize(QSize(56, 16777215));
        eyeZspin_2->setMinimum(-99.000000000000000);
        eyeZspin_2->setValue(0.000000000000000);

        eyeSpinBoxLayout_2->addWidget(eyeZspin_2);


        horizontalLayout_6->addLayout(eyeSpinBoxLayout_2);

        Default = new QPushButton(ControlWidget);
        Default->setObjectName(QString::fromUtf8("Default"));
        Default->setMaximumSize(QSize(128, 16777215));

        horizontalLayout_6->addWidget(Default);

        LookAtLabelsLayout_2 = new QVBoxLayout();
        LookAtLabelsLayout_2->setSpacing(1);
        LookAtLabelsLayout_2->setObjectName(QString::fromUtf8("LookAtLabelsLayout_2"));
        LookAtLabelsLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        LookAtLabelsLayout_2->setContentsMargins(-1, 0, 0, 0);
        LookAtXlabel_2 = new QLabel(ControlWidget);
        LookAtXlabel_2->setObjectName(QString::fromUtf8("LookAtXlabel_2"));
        LookAtXlabel_2->setEnabled(true);
        sizePolicy3.setHeightForWidth(LookAtXlabel_2->sizePolicy().hasHeightForWidth());
        LookAtXlabel_2->setSizePolicy(sizePolicy3);
        LookAtXlabel_2->setMinimumSize(QSize(112, 24));
        LookAtXlabel_2->setMaximumSize(QSize(112, 24));

        LookAtLabelsLayout_2->addWidget(LookAtXlabel_2);

        LookAtZlabel_2 = new QLabel(ControlWidget);
        LookAtZlabel_2->setObjectName(QString::fromUtf8("LookAtZlabel_2"));
        LookAtZlabel_2->setEnabled(true);
        sizePolicy3.setHeightForWidth(LookAtZlabel_2->sizePolicy().hasHeightForWidth());
        LookAtZlabel_2->setSizePolicy(sizePolicy3);
        LookAtZlabel_2->setMinimumSize(QSize(112, 24));
        LookAtZlabel_2->setMaximumSize(QSize(112, 24));

        LookAtLabelsLayout_2->addWidget(LookAtZlabel_2);

        LookAtYlabel_2 = new QLabel(ControlWidget);
        LookAtYlabel_2->setObjectName(QString::fromUtf8("LookAtYlabel_2"));
        LookAtYlabel_2->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(LookAtYlabel_2->sizePolicy().hasHeightForWidth());
        LookAtYlabel_2->setSizePolicy(sizePolicy6);
        LookAtYlabel_2->setMinimumSize(QSize(112, 24));
        LookAtYlabel_2->setMaximumSize(QSize(112, 24));

        LookAtLabelsLayout_2->addWidget(LookAtYlabel_2);


        horizontalLayout_6->addLayout(LookAtLabelsLayout_2);

        LookAtSpinBoxLayout_2 = new QVBoxLayout();
        LookAtSpinBoxLayout_2->setSpacing(1);
        LookAtSpinBoxLayout_2->setObjectName(QString::fromUtf8("LookAtSpinBoxLayout_2"));
        LookAtSpinBoxLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        LookAtSpinBoxLayout_2->setContentsMargins(-1, 0, 0, 0);
        LookAtXspin_2 = new QDoubleSpinBox(ControlWidget);
        LookAtXspin_2->setObjectName(QString::fromUtf8("LookAtXspin_2"));
        LookAtXspin_2->setEnabled(true);
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(LookAtXspin_2->sizePolicy().hasHeightForWidth());
        LookAtXspin_2->setSizePolicy(sizePolicy7);
        LookAtXspin_2->setMinimumSize(QSize(56, 24));
        LookAtXspin_2->setMaximumSize(QSize(56, 16777215));
        LookAtXspin_2->setMinimum(-99.000000000000000);

        LookAtSpinBoxLayout_2->addWidget(LookAtXspin_2);

        LookAtYspin_2 = new QDoubleSpinBox(ControlWidget);
        LookAtYspin_2->setObjectName(QString::fromUtf8("LookAtYspin_2"));
        LookAtYspin_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(LookAtYspin_2->sizePolicy().hasHeightForWidth());
        LookAtYspin_2->setSizePolicy(sizePolicy4);
        LookAtYspin_2->setMinimumSize(QSize(56, 24));
        LookAtYspin_2->setMaximumSize(QSize(56, 24));
        LookAtYspin_2->setMinimum(-99.000000000000000);

        LookAtSpinBoxLayout_2->addWidget(LookAtYspin_2);

        LookAtZspin_2 = new QDoubleSpinBox(ControlWidget);
        LookAtZspin_2->setObjectName(QString::fromUtf8("LookAtZspin_2"));
        LookAtZspin_2->setEnabled(true);
        sizePolicy4.setHeightForWidth(LookAtZspin_2->sizePolicy().hasHeightForWidth());
        LookAtZspin_2->setSizePolicy(sizePolicy4);
        LookAtZspin_2->setMinimumSize(QSize(56, 24));
        LookAtZspin_2->setMaximumSize(QSize(56, 24));
        LookAtZspin_2->setMinimum(-99.000000000000000);

        LookAtSpinBoxLayout_2->addWidget(LookAtZspin_2);


        horizontalLayout_6->addLayout(LookAtSpinBoxLayout_2);


        verticalLayout_8->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 512, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Line Defenition", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_Mu->setText(QCoreApplication::translate("MainWindow", "Mu", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "d", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "alpha", nullptr));
        eyeXlabel_2->setText(QCoreApplication::translate("MainWindow", "Eye X", nullptr));
        eyeZlabel_2->setText(QCoreApplication::translate("MainWindow", "Eye Y", nullptr));
        eyeYlabel_2->setText(QCoreApplication::translate("MainWindow", "Eye Z", nullptr));
        Default->setText(QCoreApplication::translate("MainWindow", "Reset to Defaults", nullptr));
        LookAtXlabel_2->setText(QCoreApplication::translate("MainWindow", "Look at  X", nullptr));
        LookAtZlabel_2->setText(QCoreApplication::translate("MainWindow", "Look at Y", nullptr));
        LookAtYlabel_2->setText(QCoreApplication::translate("MainWindow", "Look at Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
