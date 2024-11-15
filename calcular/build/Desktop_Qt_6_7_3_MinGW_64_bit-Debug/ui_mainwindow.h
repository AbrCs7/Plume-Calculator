/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCopy;
    QAction *actionExit;
    QAction *actionPaste;
    QAction *actionDark;
    QAction *actionLight;
    QAction *actionCyan;
    QAction *actiontheme_1;
    QAction *actiontheme_2;
    QAction *actiontheme_3;
    QAction *actiontheme_4;
    QAction *actiontheme_5;
    QAction *actionGators_theme;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *Error_Label;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QGridLayout *keypad_grid;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_Factorial;
    QPushButton *pushButton_add;
    QPushButton *pushButton_Log;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_previos_answer;
    QPushButton *pushButton_7;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_squared;
    QPushButton *pushButton_exponent;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_Sqrt;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sigmoid;
    QPushButton *pushButton_5;
    QPushButton *pushButton_plusMinus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_Power;
    QPushButton *pushButton_pi;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QComboBox *comboBox;
    QPushButton *pushButton_1;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuThemes;
    QMenu *menuBasic_colors;
    QMenu *menuImages;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(504, 520);
        MainWindow->setMinimumSize(QSize(0, 75));
        MainWindow->setMouseTracking(false);
        MainWindow->setStyleSheet(QString::fromUtf8("/*Change the background color */\n"
""));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionDark = new QAction(MainWindow);
        actionDark->setObjectName("actionDark");
        actionLight = new QAction(MainWindow);
        actionLight->setObjectName("actionLight");
        actionCyan = new QAction(MainWindow);
        actionCyan->setObjectName("actionCyan");
        actiontheme_1 = new QAction(MainWindow);
        actiontheme_1->setObjectName("actiontheme_1");
        actiontheme_2 = new QAction(MainWindow);
        actiontheme_2->setObjectName("actiontheme_2");
        actiontheme_3 = new QAction(MainWindow);
        actiontheme_3->setObjectName("actiontheme_3");
        actiontheme_4 = new QAction(MainWindow);
        actiontheme_4->setObjectName("actiontheme_4");
        actiontheme_5 = new QAction(MainWindow);
        actiontheme_5->setObjectName("actiontheme_5");
        actionGators_theme = new QAction(MainWindow);
        actionGators_theme->setObjectName("actionGators_theme");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  \n"
"  color: rgb(0, 255, 0);\n"
"\n"
"}\n"
"\n"
"background-color : white;\n"
"\n"
"/* End Label Stylesheet */"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Error_Label = new QLabel(centralwidget);
        Error_Label->setObjectName("Error_Label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        Error_Label->setFont(font);
        Error_Label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(Error_Label);

        verticalWidget = new QWidget(centralwidget);
        verticalWidget->setObjectName("verticalWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy);
        verticalWidget->setMinimumSize(QSize(0, 80));
        verticalWidget->setMaximumSize(QSize(16777215, 75));
        verticalWidget->setStyleSheet(QString::fromUtf8("#verticalWidget\n"
"{ \n"
"  border: 2px solid gray;\n"
"  background-color: rgb(239,239,239);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        label_2->setMaximumSize(QSize(16777215, 15));
        label_2->setMouseTracking(false);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  color: #000;\n"
"  background-color: rgb(239,239,239);\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 20));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  color: #000;\n"
"  background-color: rgb(239,239,239);\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(label);


        verticalLayout_2->addWidget(verticalWidget);

        keypad_grid = new QGridLayout();
        keypad_grid->setObjectName("keypad_grid");
        keypad_grid->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        keypad_grid->setHorizontalSpacing(20);
        keypad_grid->setVerticalSpacing(15);
        keypad_grid->setContentsMargins(2, 4, 2, 4);
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        sizePolicy1.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        font2.setBold(false);
        pushButton_percent->setFont(font2);
        pushButton_percent->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_percent, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(50, 50));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_2, 8, 1, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(50, 50));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_4, 5, 0, 1, 1);

        pushButton_Factorial = new QPushButton(centralwidget);
        pushButton_Factorial->setObjectName("pushButton_Factorial");
        sizePolicy1.setHeightForWidth(pushButton_Factorial->sizePolicy().hasHeightForWidth());
        pushButton_Factorial->setSizePolicy(sizePolicy1);
        pushButton_Factorial->setFont(font2);
        pushButton_Factorial->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #FFF;\n"
"  background-color: rgb(241, 122, 28);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_Factorial, 5, 8, 1, 1);

        pushButton_add = new QPushButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->setExclusive(true);
        buttonGroup->addButton(pushButton_add);
        pushButton_add->setObjectName("pushButton_add");
        sizePolicy1.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy1);
        pushButton_add->setFont(font2);
        pushButton_add->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #FFF;\n"
"  background-color: rgb(105, 165, 245);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_add, 8, 5, 1, 1);

        pushButton_Log = new QPushButton(centralwidget);
        pushButton_Log->setObjectName("pushButton_Log");
        sizePolicy1.setHeightForWidth(pushButton_Log->sizePolicy().hasHeightForWidth());
        pushButton_Log->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(false);
        pushButton_Log->setFont(font3);
        pushButton_Log->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_Log, 10, 3, 1, 1);

        pushButton_minus = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_minus);
        pushButton_minus->setObjectName("pushButton_minus");
        sizePolicy1.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy1);
        pushButton_minus->setFont(font2);
        pushButton_minus->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #FFF;\n"
"  background-color: rgb(38, 196, 111);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_minus, 5, 5, 1, 1);

        pushButton_previos_answer = new QPushButton(centralwidget);
        pushButton_previos_answer->setObjectName("pushButton_previos_answer");
        sizePolicy1.setHeightForWidth(pushButton_previos_answer->sizePolicy().hasHeightForWidth());
        pushButton_previos_answer->setSizePolicy(sizePolicy1);
        pushButton_previos_answer->setFont(font3);
        pushButton_previos_answer->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_previos_answer, 10, 2, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMinimumSize(QSize(50, 50));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_multiply = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_multiply);
        pushButton_multiply->setObjectName("pushButton_multiply");
        sizePolicy1.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy1);
        pushButton_multiply->setFont(font2);
        pushButton_multiply->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #FFF;\n"
"  background-color: rgb(241, 122, 28);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_multiply, 3, 5, 1, 1);

        pushButton_squared = new QPushButton(centralwidget);
        pushButton_squared->setObjectName("pushButton_squared");
        sizePolicy1.setHeightForWidth(pushButton_squared->sizePolicy().hasHeightForWidth());
        pushButton_squared->setSizePolicy(sizePolicy1);
        pushButton_squared->setFont(font2);
        pushButton_squared->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_squared, 3, 3, 1, 1);

        pushButton_exponent = new QPushButton(centralwidget);
        pushButton_exponent->setObjectName("pushButton_exponent");
        sizePolicy1.setHeightForWidth(pushButton_exponent->sizePolicy().hasHeightForWidth());
        pushButton_exponent->setSizePolicy(sizePolicy1);
        pushButton_exponent->setFont(font3);
        pushButton_exponent->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_exponent, 5, 3, 1, 1);

        pushButton_equals = new QPushButton(centralwidget);
        pushButton_equals->setObjectName("pushButton_equals");
        sizePolicy1.setHeightForWidth(pushButton_equals->sizePolicy().hasHeightForWidth());
        pushButton_equals->setSizePolicy(sizePolicy1);
        pushButton_equals->setFont(font2);
        pushButton_equals->setToolTipDuration(-1);
        pushButton_equals->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #FFF;\n"
"  background-color: rgb(239, 92, 98);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_equals, 10, 8, 1, 1);

        pushButton_Sqrt = new QPushButton(centralwidget);
        pushButton_Sqrt->setObjectName("pushButton_Sqrt");
        sizePolicy1.setHeightForWidth(pushButton_Sqrt->sizePolicy().hasHeightForWidth());
        pushButton_Sqrt->setSizePolicy(sizePolicy1);
        pushButton_Sqrt->setFont(font2);
        pushButton_Sqrt->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #FFF;\n"
"  background-color: rgb(241, 122, 28);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_Sqrt, 3, 8, 1, 1);

        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName("pushButton_dot");
        sizePolicy1.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy1);
        pushButton_dot->setFont(font2);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_dot, 10, 1, 1, 1);

        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName("pushButton_sin");
        sizePolicy1.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy1);
        pushButton_sin->setFont(font3);
        pushButton_sin->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_sin, 8, 8, 1, 1);

        pushButton_divide = new QPushButton(centralwidget);
        buttonGroup->addButton(pushButton_divide);
        pushButton_divide->setObjectName("pushButton_divide");
        sizePolicy1.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy1);
        pushButton_divide->setFont(font2);
        pushButton_divide->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #FFF;\n"
"  background-color: rgb(196, 56, 227);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));

        keypad_grid->addWidget(pushButton_divide, 1, 5, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMinimumSize(QSize(50, 50));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_6, 5, 2, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(50, 50));
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName("pushButton_cos");
        sizePolicy1.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy1);
        pushButton_cos->setFont(font3);
        pushButton_cos->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_cos, 10, 5, 1, 1);

        pushButton_sigmoid = new QPushButton(centralwidget);
        pushButton_sigmoid->setObjectName("pushButton_sigmoid");
        sizePolicy1.setHeightForWidth(pushButton_sigmoid->sizePolicy().hasHeightForWidth());
        pushButton_sigmoid->setSizePolicy(sizePolicy1);
        pushButton_sigmoid->setFont(font3);
        pushButton_sigmoid->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_sigmoid, 8, 3, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(50, 50));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_5, 5, 1, 1, 1);

        pushButton_plusMinus = new QPushButton(centralwidget);
        pushButton_plusMinus->setObjectName("pushButton_plusMinus");
        pushButton_plusMinus->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_plusMinus->sizePolicy().hasHeightForWidth());
        pushButton_plusMinus->setSizePolicy(sizePolicy1);
        pushButton_plusMinus->setFont(font2);
        pushButton_plusMinus->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_plusMinus, 1, 1, 1, 1);

        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setFont(font2);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_0, 10, 0, 1, 1);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        sizePolicy1.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy1);
        pushButton_clear->setFont(font2);
        pushButton_clear->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(254,99,71);\n"
"  border-radius: 4px;\n"
"  padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_clear, 1, 0, 1, 1);

        pushButton_Power = new QPushButton(centralwidget);
        pushButton_Power->setObjectName("pushButton_Power");
        sizePolicy1.setHeightForWidth(pushButton_Power->sizePolicy().hasHeightForWidth());
        pushButton_Power->setSizePolicy(sizePolicy1);
        pushButton_Power->setFont(font2);
        pushButton_Power->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #FFF;\n"
"  background-color: rgb(241, 122, 28);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_Power, 1, 8, 1, 1);

        pushButton_pi = new QPushButton(centralwidget);
        pushButton_pi->setObjectName("pushButton_pi");
        sizePolicy1.setHeightForWidth(pushButton_pi->sizePolicy().hasHeightForWidth());
        pushButton_pi->setSizePolicy(sizePolicy1);
        pushButton_pi->setFont(font3);
        pushButton_pi->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  color: #000;\n"
"  background-color: rgb(215, 215, 215);\n"
"  border-radius: 4px;\n"
"  padding: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        keypad_grid->addWidget(pushButton_pi, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(50, 50));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_3, 8, 2, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMinimumSize(QSize(50, 50));
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_9, 3, 2, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setEnabled(true);

        keypad_grid->addWidget(comboBox, 0, 0, 1, 1);

        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setMinimumSize(QSize(50, 50));
        pushButton_1->setFont(font2);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(134,134,140);\n"
"background-color: rgb(239,239,239);\n"
"border-radius: 4px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #8afff7, stop: 1 #73ffff\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #707070, stop: 1 #606060\n"
");\n"
"}"));

        keypad_grid->addWidget(pushButton_1, 8, 0, 1, 1);


        verticalLayout_2->addLayout(keypad_grid);

        MainWindow->setCentralWidget(centralwidget);
        verticalWidget->raise();
        Error_Label->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 504, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuThemes = new QMenu(menuFile);
        menuThemes->setObjectName("menuThemes");
        menuBasic_colors = new QMenu(menuThemes);
        menuBasic_colors->setObjectName("menuBasic_colors");
        menuImages = new QMenu(menuThemes);
        menuImages->setObjectName("menuImages");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuFile->addAction(menuThemes->menuAction());
        menuThemes->addSeparator();
        menuThemes->addSeparator();
        menuThemes->addAction(menuImages->menuAction());
        menuThemes->addAction(menuBasic_colors->menuAction());
        menuBasic_colors->addAction(actionCyan);
        menuBasic_colors->addAction(actionLight);
        menuBasic_colors->addAction(actionDark);
        menuImages->addAction(actiontheme_1);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Qt-calculator", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionDark->setText(QCoreApplication::translate("MainWindow", "Dark", nullptr));
#if QT_CONFIG(shortcut)
        actionDark->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLight->setText(QCoreApplication::translate("MainWindow", "Light", nullptr));
#if QT_CONFIG(shortcut)
        actionLight->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCyan->setText(QCoreApplication::translate("MainWindow", "Cyan", nullptr));
#if QT_CONFIG(shortcut)
        actionCyan->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actiontheme_1->setText(QCoreApplication::translate("MainWindow", "theme_1", nullptr));
        actiontheme_2->setText(QCoreApplication::translate("MainWindow", "theme_2", nullptr));
        actiontheme_3->setText(QCoreApplication::translate("MainWindow", "theme_3", nullptr));
        actiontheme_4->setText(QCoreApplication::translate("MainWindow", "theme_4", nullptr));
        actiontheme_5->setText(QCoreApplication::translate("MainWindow", "UF_theme 1", nullptr));
        actionGators_theme->setText(QCoreApplication::translate("MainWindow", "Gators_theme", nullptr));
        Error_Label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_percent->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_Factorial->setText(QCoreApplication::translate("MainWindow", "!", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_Factorial->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_add->setText(QCoreApplication::translate("MainWindow", " + ", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_add->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_Log->setText(QCoreApplication::translate("MainWindow", "Log", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_Log->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_minus->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_previos_answer->setText(QCoreApplication::translate("MainWindow", "ans", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_previos_answer->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_multiply->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_squared->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_squared->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_exponent->setText(QCoreApplication::translate("MainWindow", "exp", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_exponent->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButton_equals->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_equals->setShortcut(QCoreApplication::translate("MainWindow", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_Sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_Sqrt->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_dot->setShortcut(QCoreApplication::translate("MainWindow", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_sin->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_divide->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_cos->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_sigmoid->setText(QCoreApplication::translate("MainWindow", "sigmoid", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_sigmoid->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_plusMinus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_clear->setShortcut(QCoreApplication::translate("MainWindow", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_Power->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_Power->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_pi->setText(QCoreApplication::translate("MainWindow", "\317\200", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_pi->setShortcut(QCoreApplication::translate("MainWindow", "%", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Rad", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Degrees", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Grad", nullptr));

        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuThemes->setTitle(QCoreApplication::translate("MainWindow", "Themes", nullptr));
        menuBasic_colors->setTitle(QCoreApplication::translate("MainWindow", "Basic colors", nullptr));
        menuImages->setTitle(QCoreApplication::translate("MainWindow", "Images", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
