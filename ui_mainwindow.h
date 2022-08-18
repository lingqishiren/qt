/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QTextEdit *dataSend;
    QTextEdit *dataReceived;
    QPushButton *sendButton;
    QPushButton *clearButton;
    QGroupBox *groupBox;
    QPushButton *ScanButton;
    QLabel *label;
    QLabel *label_1;
    QPushButton *OpenSerialButton;
    QComboBox *BaudBox;
    QComboBox *ParityBox;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_14;
    QLabel *label_3;
    QComboBox *BitBox;
    QComboBox *PortBox;
    QComboBox *StopBox;
    QComboBox *ControlBox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1009, 770);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        groupBox_2->setFont(font);
        dataSend = new QTextEdit(groupBox_2);
        dataSend->setObjectName(QStringLiteral("dataSend"));
        dataSend->setGeometry(QRect(10, 30, 261, 81));
        dataReceived = new QTextEdit(groupBox_2);
        dataReceived->setObjectName(QStringLiteral("dataReceived"));
        dataReceived->setGeometry(QRect(10, 120, 261, 571));
        sendButton = new QPushButton(groupBox_2);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(280, 57, 101, 41));
        clearButton = new QPushButton(groupBox_2);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(290, 560, 101, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        clearButton->setFont(font1);

        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font);
        ScanButton = new QPushButton(groupBox);
        ScanButton->setObjectName(QStringLiteral("ScanButton"));
        ScanButton->setGeometry(QRect(220, 80, 51, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        ScanButton->setFont(font2);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 80, 81, 41));
        label->setFont(font);
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(20, 140, 71, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        label_1->setFont(font3);
        OpenSerialButton = new QPushButton(groupBox);
        OpenSerialButton->setObjectName(QStringLiteral("OpenSerialButton"));
        OpenSerialButton->setGeometry(QRect(20, 440, 150, 40));
        BaudBox = new QComboBox(groupBox);
        BaudBox->setObjectName(QStringLiteral("BaudBox"));
        BaudBox->setGeometry(QRect(110, 140, 150, 40));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(14);
        BaudBox->setFont(font4);
        ParityBox = new QComboBox(groupBox);
        ParityBox->setObjectName(QStringLiteral("ParityBox"));
        ParityBox->setGeometry(QRect(110, 260, 150, 40));
        ParityBox->setFont(font4);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 200, 71, 31));
        label_2->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 320, 71, 31));
        label_4->setFont(font);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 380, 71, 31));
        label_14->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 260, 71, 31));
        label_3->setFont(font);
        BitBox = new QComboBox(groupBox);
        BitBox->setObjectName(QStringLiteral("BitBox"));
        BitBox->setGeometry(QRect(110, 200, 150, 40));
        BitBox->setFont(font4);
        PortBox = new QComboBox(groupBox);
        PortBox->setObjectName(QStringLiteral("PortBox"));
        PortBox->setGeometry(QRect(110, 80, 100, 40));
        PortBox->setFont(font4);
        StopBox = new QComboBox(groupBox);
        StopBox->setObjectName(QStringLiteral("StopBox"));
        StopBox->setGeometry(QRect(110, 320, 150, 40));
        StopBox->setFont(font4);
        ControlBox = new QComboBox(groupBox);
        ControlBox->setObjectName(QStringLiteral("ControlBox"));
        ControlBox->setGeometry(QRect(110, 380, 150, 40));
        ControlBox->setFont(font4);

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\244\204\347\220\206", Q_NULLPTR));
        sendButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", Q_NULLPTR));
        clearButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266\346\225\260\346\215\256", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\345\210\266", Q_NULLPTR));
        ScanButton->setText(QApplication::translate("MainWindow", "\346\211\253\346\217\217", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
        label_1->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        OpenSerialButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        BaudBox->clear();
        BaudBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "14400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "28800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "230400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "460800", Q_NULLPTR)
        );
        BaudBox->setCurrentText(QApplication::translate("MainWindow", "600", Q_NULLPTR));
        ParityBox->clear();
        ParityBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\227\240\346\240\241\351\252\214", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0\346\240\241\351\252\214", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1\346\240\241\351\252\214", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\346\216\247\345\210\266\346\265\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        BitBox->clear();
        BitBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
        );
        PortBox->clear();
        PortBox->insertItems(0, QStringList()
         << QString()
        );
        StopBox->clear();
        StopBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
        );
        ControlBox->clear();
        ControlBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\227\240", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
