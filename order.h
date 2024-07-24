#ifndef ORDER_H
#define ORDER_H

#include <QMainWindow>
#include <QMap>
#include <QPair>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QTcpSocket>



namespace Ui {
class Order;
}

class Order : public QMainWindow
{
    Q_OBJECT

public:
    explicit Order(int tableNumber, int dineNumber,QWidget *parent = nullptr);
    ~Order();
    double totalPrice;

    //设置窗口菜单的函数
    void setOrderedItems(const QMap<QString, QPair<int, QString>> &items);

    //void sendJsonData();


    //打包字符串json的函数
    QString packagingJson();

signals:
    void ret_confirm_menu(bool now);

private slots:
    void on_cancelBt_clicked();

    void on_submitBt_clicked();

    //tcp连接使用的槽函数
    void recv_server();
      void handleSocketError(QAbstractSocket::SocketError socketError);


private:
    Ui::Order *ui;
    QMap<QString, QPair<int, QString>> orderedItems;
    QString Jdata;
    int tableNumber;
    int dineNumber;
    /*因为它避免了在构造函数中使用阻塞连接，并确保在连接成功后才执行相关操作。
     * 通过在类成员中直接定义 QTcpSocket，
     * 并在需要时连接服务器，可以有效地避免程序卡死的问题。*/
    QTcpSocket socket;
    QWidget *pare;
    static bool flag;
      bool confirm;
};

#endif // ORDER_H
