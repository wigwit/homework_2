/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGrading_Scheme;
    QWidget *centralWidget;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSlider *horizontalSlider_1;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSlider *horizontalSlider_3;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSlider *horizontalSlider_4;
    QSpinBox *spinBox_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSlider *horizontalSlider_5;
    QSpinBox *spinBox_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSlider *horizontalSlider_6;
    QSpinBox *spinBox_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QSlider *horizontalSlider_7;
    QSpinBox *spinBox_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSlider *horizontalSlider_8;
    QSpinBox *spinBox_8;
    QLabel *sum;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QSpinBox *spinBox_9;
    QSlider *horizontalSlider_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QSpinBox *spinBox_10;
    QSlider *horizontalSlider_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QSpinBox *spinBox_11;
    QSlider *horizontalSlider_11;
    QMenuBar *menuBar;
    QMenu *menuYour_Grade;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(565, 561);
        actionGrading_Scheme = new QAction(MainWindow);
        actionGrading_Scheme->setObjectName(QStringLiteral("actionGrading_Scheme"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(400, 10, 161, 21));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 24, 271, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSlider_1 = new QSlider(layoutWidget);
        horizontalSlider_1->setObjectName(QStringLiteral("horizontalSlider_1"));
        horizontalSlider_1->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_3->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_2);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        horizontalLayout_4->addWidget(spinBox_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        horizontalSlider_3 = new QSlider(layoutWidget);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_3);

        spinBox_3 = new QSpinBox(layoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));

        horizontalLayout_5->addWidget(spinBox_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        horizontalSlider_4 = new QSlider(layoutWidget);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_4);

        spinBox_4 = new QSpinBox(layoutWidget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));

        horizontalLayout_6->addWidget(spinBox_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        horizontalSlider_5 = new QSlider(layoutWidget);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_5);

        spinBox_5 = new QSpinBox(layoutWidget);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));

        horizontalLayout_7->addWidget(spinBox_5);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        horizontalSlider_6 = new QSlider(layoutWidget);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_6);

        spinBox_6 = new QSpinBox(layoutWidget);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));

        horizontalLayout_8->addWidget(spinBox_6);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        horizontalSlider_7 = new QSlider(layoutWidget);
        horizontalSlider_7->setObjectName(QStringLiteral("horizontalSlider_7"));
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_7);

        spinBox_7 = new QSpinBox(layoutWidget);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));

        horizontalLayout_9->addWidget(spinBox_7);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_11->addWidget(label_8);

        horizontalSlider_8 = new QSlider(layoutWidget);
        horizontalSlider_8->setObjectName(QStringLiteral("horizontalSlider_8"));
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalSlider_8);

        spinBox_8 = new QSpinBox(layoutWidget);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));

        horizontalLayout_11->addWidget(spinBox_8);


        verticalLayout->addLayout(horizontalLayout_11);

        sum = new QLabel(centralWidget);
        sum->setObjectName(QStringLiteral("sum"));
        sum->setGeometry(QRect(390, 440, 141, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 460, 80, 16));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(350, 330, 151, 81));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(330, 40, 221, 261));
        verticalLayout_6 = new QVBoxLayout(widget1);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);

        spinBox_9 = new QSpinBox(widget1);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));

        horizontalLayout->addWidget(spinBox_9);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalSlider_9 = new QSlider(widget1);
        horizontalSlider_9->setObjectName(QStringLiteral("horizontalSlider_9"));
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_9);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        spinBox_10 = new QSpinBox(widget1);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));

        horizontalLayout_2->addWidget(spinBox_10);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalSlider_10 = new QSlider(widget1);
        horizontalSlider_10->setObjectName(QStringLiteral("horizontalSlider_10"));
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_10);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_10->addWidget(label_11);

        spinBox_11 = new QSpinBox(widget1);
        spinBox_11->setObjectName(QStringLiteral("spinBox_11"));

        horizontalLayout_10->addWidget(spinBox_11);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalSlider_11 = new QSlider(widget1);
        horizontalSlider_11->setObjectName(QStringLiteral("horizontalSlider_11"));
        horizontalSlider_11->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalSlider_11);


        verticalLayout_6->addLayout(verticalLayout_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 565, 17));
        menuYour_Grade = new QMenu(menuBar);
        menuYour_Grade->setObjectName(QStringLiteral("menuYour_Grade"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuYour_Grade->menuAction());
        menuYour_Grade->addAction(actionGrading_Scheme);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_1, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), spinBox_4, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), spinBox_5, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), spinBox_6, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_7, SIGNAL(valueChanged(int)), spinBox_7, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_8, SIGNAL(valueChanged(int)), spinBox_8, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider_1, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), horizontalSlider_3, SLOT(setValue(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), horizontalSlider_4, SLOT(setValue(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), horizontalSlider_5, SLOT(setValue(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), horizontalSlider_6, SLOT(setValue(int)));
        QObject::connect(spinBox_7, SIGNAL(valueChanged(int)), horizontalSlider_7, SLOT(setValue(int)));
        QObject::connect(spinBox_8, SIGNAL(valueChanged(int)), horizontalSlider_8, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_9, SIGNAL(valueChanged(int)), spinBox_9, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_10, SIGNAL(valueChanged(int)), spinBox_10, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_11, SIGNAL(valueChanged(int)), spinBox_11, SLOT(setValue(int)));
        QObject::connect(spinBox_9, SIGNAL(valueChanged(int)), horizontalSlider_9, SLOT(setValue(int)));
        QObject::connect(spinBox_10, SIGNAL(valueChanged(int)), horizontalSlider_10, SLOT(setValue(int)));
        QObject::connect(spinBox_11, SIGNAL(valueChanged(int)), horizontalSlider_11, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionGrading_Scheme->setText(QApplication::translate("MainWindow", "Grading Policy", 0));
        label->setText(QApplication::translate("MainWindow", "Homework 1", 0));
        label_2->setText(QApplication::translate("MainWindow", "Homework 2", 0));
        label_3->setText(QApplication::translate("MainWindow", "Homework 3", 0));
        label_4->setText(QApplication::translate("MainWindow", "Homework 4", 0));
        label_5->setText(QApplication::translate("MainWindow", "Homework 5", 0));
        label_6->setText(QApplication::translate("MainWindow", "Homework 6", 0));
        label_7->setText(QApplication::translate("MainWindow", "Homework 7", 0));
        label_8->setText(QApplication::translate("MainWindow", "Homework 8", 0));
        sum->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "OK", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Schema A", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Schema B", 0));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Midterm 1</span></p></body></html>", 0));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Midterm 2</span></p></body></html>", 0));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Final</span></p></body></html>", 0));
        menuYour_Grade->setTitle(QApplication::translate("MainWindow", "Grade Calulator", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
