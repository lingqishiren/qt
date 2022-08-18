#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SerivalPortInit();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//串口初始化
void MainWindow::SerivalPortInit()
{
    serial = new QSerialPort;
    //信号

    serial->setDataBits(QSerialPort::Data8);                     //数据位8位
    serial->setParity(QSerialPort::NoParity);                    //校验位选无
    serial->setStopBits(QSerialPort::OneStop);                   //停止位选择一位
    serial->setFlowControl(QSerialPort::NoFlowControl);          //控制流选择无
    connect(serial,&QSerialPort::readyRead,this,&MainWindow::DataReceived);//当串口发送数据时，数据接收处理

}

//接收数据并添加到数据接收框上
void MainWindow::DataReceived()
{
    QByteArray data = serial->readAll();                        //读取数据
    if(!data.isEmpty())
    {
        QString str;
        str = data;                                             //保存数据为字符串
        ui->dataReceived->append(str);
    }
}

//扫描串口号，并添加到PortBox
void MainWindow::on_ScanButton_clicked()
{
    ui->PortBox->clear();                                       //清除串口的选项
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())        //添加已经接入的串口
    {
           ui->PortBox->addItem(info.portName());
    }
}

//发送数据，把发送数据框的数据发送到串口
void MainWindow::on_sendButton_clicked()
{
    serial->write(ui->dataSend->toPlainText().toLatin1());
}

//清楚接收框数据
void MainWindow::on_clearButton_clicked()
{
    ui->dataReceived->clear();
}

//打开串口
void MainWindow::on_OpenSerialButton_clicked()
{
    //串口现在时打开的，所以点击让它关闭
    if(serial->isOpen())
    {
        serial->clear();
        serial->close();
        //变成关闭串口状态，同时将让几个框变为可选择状态
        ui->OpenSerialButton->setText("打开串口");
        ui->BaudBox->setDisabled(false);
        ui->ParityBox->setDisabled(false);
        ui->BitBox->setDisabled(false);
        ui->StopBox->setDisabled(false);
        ui->ControlBox->setDisabled(false);
    }
    //串口是关闭的，所以暂时打开它
    else
    {
        //选择当前串口名字
        serial->setPortName(ui->PortBox->currentText());
        QString BaudRate = ui -> BaudBox -> currentText(); //波特率
        serial->setBaudRate(BaudRate.toInt());             //赋值给波特率

        //用ReadWrite的模式打开串口，打不开，则警告
        if(!serial->open(QIODevice::ReadWrite))
        {
            QMessageBox::warning(this,tr("警告"),tr("串口打开失败"),QMessageBox::Ok);
            return;
        }
        //变成打开串口状态，同时禁止用户点击这几个框;
        ui->OpenSerialButton->setText("关闭串口");

        ui->BaudBox->setDisabled(true);
        ui->ParityBox->setDisabled(true);
        ui->BitBox->setDisabled(true);
        ui->StopBox->setDisabled(true);
        ui->ControlBox->setDisabled(true);
    }
}
