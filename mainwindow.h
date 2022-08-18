#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void SerivalPortInit();//串口初始化；
    void DataReceived();
private slots:
    void on_ScanButton_clicked();

    void on_sendButton_clicked();

    void on_clearButton_clicked();

    void on_OpenSerialButton_clicked();

private:
    Ui::MainWindow *ui;

    QSerialPort *serial;
};
#endif // MAINWINDOW_H
