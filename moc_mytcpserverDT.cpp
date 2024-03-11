/****************************************************************************
** Meta object code from reading C++ file 'mytcpserverDT.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mytcpserverDT.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpserverDT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyTcpServerDT_t {
    QByteArrayData data[17];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTcpServerDT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTcpServerDT_t qt_meta_stringdata_MyTcpServerDT = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MyTcpServerDT"
QT_MOC_LITERAL(1, 14, 17), // "sendNewConnection"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "port"
QT_MOC_LITERAL(4, 38, 12), // "QHostAddress"
QT_MOC_LITERAL(5, 51, 4), // "addr"
QT_MOC_LITERAL(6, 56, 10), // "sendDataTo"
QT_MOC_LITERAL(7, 67, 4), // "data"
QT_MOC_LITERAL(8, 72, 20), // "clientIsDisconnected"
QT_MOC_LITERAL(9, 93, 17), // "slotNewConnection"
QT_MOC_LITERAL(10, 111, 14), // "slotServerRead"
QT_MOC_LITERAL(11, 126, 20), // "onSocketStateChanged"
QT_MOC_LITERAL(12, 147, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(13, 176, 11), // "socketState"
QT_MOC_LITERAL(14, 188, 18), // "appendToSocketList"
QT_MOC_LITERAL(15, 207, 11), // "QTcpSocket*"
QT_MOC_LITERAL(16, 219, 6) // "socket"

    },
    "MyTcpServerDT\0sendNewConnection\0\0port\0"
    "QHostAddress\0addr\0sendDataTo\0data\0"
    "clientIsDisconnected\0slotNewConnection\0"
    "slotServerRead\0onSocketStateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "appendToSocketList\0QTcpSocket*\0socket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTcpServerDT[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,
       8,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,
      11,    1,   60,    2, 0x0a /* Public */,
      14,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void MyTcpServerDT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTcpServerDT *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNewConnection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QHostAddress(*)>(_a[2]))); break;
        case 1: _t->sendDataTo((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->clientIsDisconnected(); break;
        case 3: _t->slotNewConnection(); break;
        case 4: _t->slotServerRead(); break;
        case 5: _t->onSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 6: _t->appendToSocketList((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyTcpServerDT::*)(int , QHostAddress );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpServerDT::sendNewConnection)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyTcpServerDT::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpServerDT::sendDataTo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyTcpServerDT::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTcpServerDT::clientIsDisconnected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyTcpServerDT::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyTcpServerDT.data,
    qt_meta_data_MyTcpServerDT,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyTcpServerDT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTcpServerDT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTcpServerDT.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyTcpServerDT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MyTcpServerDT::sendNewConnection(int _t1, QHostAddress _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyTcpServerDT::sendDataTo(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyTcpServerDT::clientIsDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
