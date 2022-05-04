#include "client.h"
#include <QDebug>

Client::Client(QObject *parent) : QObject(parent)
{
    connect(&_socket, &QTcpSocket::connected, this, &Client::onConnected);
    connect(&_socket, &QTcpSocket::errorOccurred, this, &Client::onErrorOccurred);
    connect(&_socket, &QTcpSocket::readyRead, this, &Client::onReadyRead);
    this->conectare_la_server("172.16.7.50","54010");
    //this->conectare_la_server("172.16.8.185","54010");

}

void Client::conectare_la_server(const QString &ip, const QString &port)
{
    _socket.connectToHost(ip, port.toUInt());
}

void Client::trimite_mesaj(const QString &message)
{
    _socket.write(message.toUtf8(),message.size());
    _socket.waitForBytesWritten();
}

QString Client::primire_mesaj()
{
  //  qDebug()<<"Receiving!";
    _socket.waitForReadyRead();
    QByteArray str=_socket.readAll();
   // _socket.waitForReadyRead();
   // str=_socket.readAll();
    //QString s(str);
    QString s=QString::fromStdString(str.toStdString());
    qDebug()<<s;
    return s;
}



void Client::onConnected()
{
    qInfo() << "Connected to host.";
}

QString Client::onReadyRead()
{
   // const auto message = _socket.readAll();
    //emit newMessage(message);

    //QByteArray str = _socket.readAll();
   // QString s (str);

    //qDebug()<<s;
   // qDebug()<<"Receiving!";
    return "";
}

void Client::onErrorOccurred(QAbstractSocket::SocketError error)
{
    qWarning() << "Error:" << error;
}
