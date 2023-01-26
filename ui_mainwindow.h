/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *swapButton;
    QPlainTextEdit *swapRightTEdit;
    QPlainTextEdit *swapLeftTEdit;
    QLabel *zad1Label;
    QLabel *zad2Label;
    QPushButton *loadImgButton;
    QLabel *imageLabel;
    QProgressBar *centralProgressBar;
    QLabel *zad3Label;
    QPushButton *goRightButton;
    QPushButton *goLeftButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(413, 474);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(413, 474));
        MainWindow->setMaximumSize(QSize(413, 474));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        swapButton = new QPushButton(centralwidget);
        swapButton->setObjectName(QString::fromUtf8("swapButton"));
        swapButton->setEnabled(false);
        swapButton->setGeometry(QRect(180, 40, 75, 31));
        swapButton->setCheckable(false);
        swapRightTEdit = new QPlainTextEdit(centralwidget);
        swapRightTEdit->setObjectName(QString::fromUtf8("swapRightTEdit"));
        swapRightTEdit->setGeometry(QRect(260, 40, 101, 31));
        swapRightTEdit->setLayoutDirection(Qt::LeftToRight);
        swapLeftTEdit = new QPlainTextEdit(centralwidget);
        swapLeftTEdit->setObjectName(QString::fromUtf8("swapLeftTEdit"));
        swapLeftTEdit->setGeometry(QRect(70, 40, 101, 31));
        zad1Label = new QLabel(centralwidget);
        zad1Label->setObjectName(QString::fromUtf8("zad1Label"));
        zad1Label->setGeometry(QRect(20, 10, 49, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        zad1Label->setFont(font);
        zad2Label = new QLabel(centralwidget);
        zad2Label->setObjectName(QString::fromUtf8("zad2Label"));
        zad2Label->setGeometry(QRect(20, 90, 49, 16));
        zad2Label->setFont(font);
        loadImgButton = new QPushButton(centralwidget);
        loadImgButton->setObjectName(QString::fromUtf8("loadImgButton"));
        loadImgButton->setGeometry(QRect(20, 120, 91, 31));
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(130, 120, 261, 171));
        imageLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(176, 176, 176);\n"
"border-color: rgb(45, 45, 45);"));
        imageLabel->setAlignment(Qt::AlignCenter);
        centralProgressBar = new QProgressBar(centralwidget);
        centralProgressBar->setObjectName(QString::fromUtf8("centralProgressBar"));
        centralProgressBar->setEnabled(true);
        centralProgressBar->setGeometry(QRect(20, 390, 371, 23));
        centralProgressBar->setValue(24);
        zad3Label = new QLabel(centralwidget);
        zad3Label->setObjectName(QString::fromUtf8("zad3Label"));
        zad3Label->setGeometry(QRect(20, 300, 49, 16));
        zad3Label->setFont(font);
        goRightButton = new QPushButton(centralwidget);
        goRightButton->setObjectName(QString::fromUtf8("goRightButton"));
        goRightButton->setGeometry(QRect(20, 353, 91, 31));
        goLeftButton = new QPushButton(centralwidget);
        goLeftButton->setObjectName(QString::fromUtf8("goLeftButton"));
        goLeftButton->setGeometry(QRect(264, 350, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 413, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        swapButton->setText(QCoreApplication::translate("MainWindow", "< SWAP >", nullptr));
        zad1Label->setText(QCoreApplication::translate("MainWindow", "Zad 1", nullptr));
        zad2Label->setText(QCoreApplication::translate("MainWindow", "Zad 2", nullptr));
        loadImgButton->setText(QCoreApplication::translate("MainWindow", "load image >", nullptr));
        imageLabel->setText(QString());
        zad3Label->setText(QCoreApplication::translate("MainWindow", "Zad 3", nullptr));
        goRightButton->setText(QCoreApplication::translate("MainWindow", "go right --->", nullptr));
        goLeftButton->setText(QCoreApplication::translate("MainWindow", "<--- go left", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
