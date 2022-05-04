#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <QObject>
#include <QTcpSocket>

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);

signals:
    void mesaj_nou(const QByteArray &);

public slots:
    void conectare_la_server(const QString &, const QString &);
    void trimite_mesaj(const QString &message);
    QString primire_mesaj();


private slots:
    void onConnected();
    QString onReadyRead();
    void onErrorOccurred(QAbstractSocket::SocketError);

private:
    QTcpSocket _socket;
};

#endif // CLIENT_HPP
