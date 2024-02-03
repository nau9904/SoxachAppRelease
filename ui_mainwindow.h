/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *thuchi1Button;
    QPushButton *xuatchau1Button;
    QLabel *label;
    QGroupBox *groupBox_4;
    QPushButton *muaBtn;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *tenmua;
    QTextEdit *sotienmua;
    QSpinBox *soluongmua;
    QDateEdit *dateEdit;
    QListWidget *tongchiList;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *thuchi2Button;
    QPushButton *xuatchau2Button;
    QGroupBox *groupBox_3;
    QComboBox *tenChau;
    QSpinBox *soLuongXuatChau;
    QPushButton *xuatchauBtn;
    QLabel *thanhtien;
    QLabel *tongtien;
    QLabel *thanhtien_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QTextEdit *daTra;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QRadioButton *tueanh;
    QRadioButton *khac;
    QLabel *label_2;
    QDateEdit *dateEdit_2;
    QListWidget *listXuatChau;
    QWidget *page_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1300, 800));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 261, 61));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        thuchi1Button = new QPushButton(groupBox);
        thuchi1Button->setObjectName(QString::fromUtf8("thuchi1Button"));
        thuchi1Button->setMinimumSize(QSize(1, 1));
        thuchi1Button->setBaseSize(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font.setPointSize(20);
        thuchi1Button->setFont(font);
        thuchi1Button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 26);"));

        horizontalLayout->addWidget(thuchi1Button);

        xuatchau1Button = new QPushButton(groupBox);
        xuatchau1Button->setObjectName(QString::fromUtf8("xuatchau1Button"));
        xuatchau1Button->setFont(font);

        horizontalLayout->addWidget(xuatchau1Button);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(570, 70, 58, 16));
        groupBox_4 = new QGroupBox(page);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 80, 361, 271));
        muaBtn = new QPushButton(groupBox_4);
        muaBtn->setObjectName(QString::fromUtf8("muaBtn"));
        muaBtn->setEnabled(true);
        muaBtn->setGeometry(QRect(50, 200, 261, 40));
        QFont font1;
        font1.setPointSize(20);
        muaBtn->setFont(font1);
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 32, 29, 18));
        QFont font2;
        font2.setPointSize(15);
        label_4->setFont(font2);
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(24, 120, 58, 18));
        label_5->setFont(font2);
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(15, 80, 67, 18));
        label_6->setFont(font2);
        tenmua = new QTextEdit(groupBox_4);
        tenmua->setObjectName(QString::fromUtf8("tenmua"));
        tenmua->setGeometry(QRect(90, 30, 256, 31));
        sotienmua = new QTextEdit(groupBox_4);
        sotienmua->setObjectName(QString::fromUtf8("sotienmua"));
        sotienmua->setGeometry(QRect(90, 120, 256, 31));
        soluongmua = new QSpinBox(groupBox_4);
        soluongmua->setObjectName(QString::fromUtf8("soluongmua"));
        soluongmua->setGeometry(QRect(90, 80, 36, 21));
        soluongmua->setAlignment(Qt::AlignCenter);
        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(510, 10, 141, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font3.setPointSize(23);
        font3.setBold(true);
        dateEdit->setFont(font3);
        tongchiList = new QListWidget(page);
        tongchiList->setObjectName(QString::fromUtf8("tongchiList"));
        tongchiList->setGeometry(QRect(420, 100, 351, 431));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 261, 61));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        thuchi2Button = new QPushButton(groupBox_2);
        thuchi2Button->setObjectName(QString::fromUtf8("thuchi2Button"));
        thuchi2Button->setFont(font);
        thuchi2Button->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(thuchi2Button);

        xuatchau2Button = new QPushButton(groupBox_2);
        xuatchau2Button->setObjectName(QString::fromUtf8("xuatchau2Button"));
        xuatchau2Button->setFont(font);
        xuatchau2Button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 11);"));

        horizontalLayout_2->addWidget(xuatchau2Button);

        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 80, 381, 451));
        tenChau = new QComboBox(groupBox_3);
        tenChau->addItem(QString());
        tenChau->addItem(QString());
        tenChau->addItem(QString());
        tenChau->addItem(QString());
        tenChau->addItem(QString());
        tenChau->addItem(QString());
        tenChau->setObjectName(QString::fromUtf8("tenChau"));
        tenChau->setGeometry(QRect(125, 30, 248, 31));
        tenChau->setMouseTracking(false);
        soLuongXuatChau = new QSpinBox(groupBox_3);
        soLuongXuatChau->setObjectName(QString::fromUtf8("soLuongXuatChau"));
        soLuongXuatChau->setGeometry(QRect(128, 77, 36, 21));
        xuatchauBtn = new QPushButton(groupBox_3);
        xuatchauBtn->setObjectName(QString::fromUtf8("xuatchauBtn"));
        xuatchauBtn->setGeometry(QRect(40, 400, 271, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setItalic(false);
        xuatchauBtn->setFont(font4);
        xuatchauBtn->setMouseTracking(false);
        xuatchauBtn->setStyleSheet(QString::fromUtf8(""));
        thanhtien = new QLabel(groupBox_3);
        thanhtien->setObjectName(QString::fromUtf8("thanhtien"));
        thanhtien->setGeometry(QRect(10, 220, 371, 23));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(15);
        font5.setBold(false);
        thanhtien->setFont(font5);
        tongtien = new QLabel(groupBox_3);
        tongtien->setObjectName(QString::fromUtf8("tongtien"));
        tongtien->setGeometry(QRect(170, 190, 108, 23));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Chalkboard SE")});
        font6.setPointSize(18);
        font6.setBold(true);
        tongtien->setFont(font6);
        thanhtien_2 = new QLabel(groupBox_3);
        thanhtien_2->setObjectName(QString::fromUtf8("thanhtien_2"));
        thanhtien_2->setGeometry(QRect(10, 320, 361, 23));
        thanhtien_2->setFont(font5);
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 121, 111));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font6);

        verticalLayout_4->addWidget(label_3);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font6);

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font6);

        verticalLayout_4->addWidget(label_8);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(11, 181, 108, 31));
        label_9->setFont(font6);
        widget1 = new QWidget(groupBox_3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 270, 361, 31));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font6);

        horizontalLayout_3->addWidget(label_10);

        daTra = new QTextEdit(widget1);
        daTra->setObjectName(QString::fromUtf8("daTra"));

        horizontalLayout_3->addWidget(daTra);

        widget2 = new QWidget(groupBox_3);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(140, 120, 75, 39));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tueanh = new QRadioButton(widget2);
        tueanh->setObjectName(QString::fromUtf8("tueanh"));

        verticalLayout->addWidget(tueanh);

        khac = new QRadioButton(widget2);
        khac->setObjectName(QString::fromUtf8("khac"));

        verticalLayout->addWidget(khac);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(560, 60, 58, 16));
        dateEdit_2 = new QDateEdit(page_2);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(520, 10, 141, 41));
        dateEdit_2->setFont(font3);
        listXuatChau = new QListWidget(page_2);
        listXuatChau->setObjectName(QString::fromUtf8("listXuatChau"));
        listXuatChau->setGeometry(QRect(430, 100, 351, 431));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        thuchi1Button->setText(QCoreApplication::translate("MainWindow", "Chi Ti\303\252u", nullptr));
        xuatchau1Button->setText(QCoreApplication::translate("MainWindow", "Xu\341\272\245t Ch\341\272\255u", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "T\341\273\225ng Chi", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Nh\341\272\255p th\303\264ng tin", nullptr));
        muaBtn->setText(QCoreApplication::translate("MainWindow", "Th\303\252m", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "T\303\252n:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 Ti\341\273\201n: ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 L\306\260\341\273\243ng:", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "d.M.yyyy", nullptr));
        groupBox_2->setTitle(QString());
        thuchi2Button->setText(QCoreApplication::translate("MainWindow", "Chi Ti\303\252u", nullptr));
        xuatchau2Button->setText(QCoreApplication::translate("MainWindow", "Xu\341\272\245t Ch\341\272\255u", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Nh\341\272\255p th\303\264ng tin", nullptr));
        tenChau->setItemText(0, QCoreApplication::translate("MainWindow", "Ch\341\272\255u Tr\303\262n 50", nullptr));
        tenChau->setItemText(1, QCoreApplication::translate("MainWindow", "Ch\341\272\255u Tr\303\262n 60", nullptr));
        tenChau->setItemText(2, QCoreApplication::translate("MainWindow", "Ch\341\272\255u Tr\303\262n 70", nullptr));
        tenChau->setItemText(3, QCoreApplication::translate("MainWindow", "Ch\341\272\255u Tr\303\262n 80", nullptr));
        tenChau->setItemText(4, QCoreApplication::translate("MainWindow", "Ch\341\272\255u Tr\303\262n 90", nullptr));
        tenChau->setItemText(5, QCoreApplication::translate("MainWindow", "Ch\341\272\255u Tr\303\262n 100", nullptr));

        xuatchauBtn->setText(QCoreApplication::translate("MainWindow", "Th\303\252m", nullptr));
        thanhtien->setText(QCoreApplication::translate("MainWindow", "Th\303\240nh Ti\341\273\201n", nullptr));
        tongtien->setText(QCoreApplication::translate("MainWindow", "VND", nullptr));
        thanhtien_2->setText(QCoreApplication::translate("MainWindow", "Th\303\240nh Ti\341\273\201n", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "T\303\252n Ch\341\272\255u:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 L\306\260\341\273\243ng:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Ng\306\260\341\273\235i Mua: ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "T\341\273\225ng Ti\341\273\201n: ", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\304\220\303\243 Thanh To\303\241n:", nullptr));
        tueanh->setText(QCoreApplication::translate("MainWindow", "Tu\341\273\207 Anh", nullptr));
        khac->setText(QCoreApplication::translate("MainWindow", "Kh\303\241c", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "T\341\273\225ng k\341\272\277t", nullptr));
        dateEdit_2->setDisplayFormat(QCoreApplication::translate("MainWindow", "d.M.yyyy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
