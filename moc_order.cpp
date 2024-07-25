/****************************************************************************
** Meta object code from reading C++ file 'order.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "order.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'order.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Order_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Order_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Order_t qt_meta_stringdata_Order = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Order"
QT_MOC_LITERAL(1, 6, 16), // "ret_confirm_menu"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "now"
QT_MOC_LITERAL(4, 28, 19), // "on_cancelBt_clicked"
QT_MOC_LITERAL(5, 48, 19), // "on_submitBt_clicked"
QT_MOC_LITERAL(6, 68, 11), // "recv_server"
QT_MOC_LITERAL(7, 80, 17), // "handleSocketError"
QT_MOC_LITERAL(8, 98, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 127, 11) // "socketError"

    },
    "Order\0ret_confirm_menu\0\0now\0"
    "on_cancelBt_clicked\0on_submitBt_clicked\0"
    "recv_server\0handleSocketError\0"
    "QAbstractSocket::SocketError\0socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Order[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void Order::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Order *_t = static_cast<Order *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ret_confirm_menu((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_cancelBt_clicked(); break;
        case 2: _t->on_submitBt_clicked(); break;
        case 3: _t->recv_server(); break;
        case 4: _t->handleSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Order::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Order::ret_confirm_menu)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Order::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Order.data,
      qt_meta_data_Order,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Order::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Order::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Order.stringdata0))
        return static_cast<void*>(const_cast< Order*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Order::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Order::ret_confirm_menu(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
