/****************************************************************************
** Meta object code from reading C++ file 'browserwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyPlayer/browserwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browserwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BrowserWidget_t {
    QByteArrayData data[13];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BrowserWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BrowserWidget_t qt_meta_stringdata_BrowserWidget = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 8),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 8),
QT_MOC_LITERAL(4, 33, 11),
QT_MOC_LITERAL(5, 45, 8),
QT_MOC_LITERAL(6, 54, 11),
QT_MOC_LITERAL(7, 66, 11),
QT_MOC_LITERAL(8, 78, 12),
QT_MOC_LITERAL(9, 91, 8),
QT_MOC_LITERAL(10, 100, 10),
QT_MOC_LITERAL(11, 111, 15),
QT_MOC_LITERAL(12, 127, 11)
    },
    "BrowserWidget\0loadPage\0\0homePage\0"
    "forwardPage\0backPage\0refreshLine\0"
    "refreshPage\0handleNewTab\0loadPart\0"
    "loadFinish\0handleTabClosed\0loadWebPage\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrowserWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a,
       3,    0,   70,    2, 0x0a,
       4,    0,   71,    2, 0x0a,
       5,    0,   72,    2, 0x0a,
       6,    0,   73,    2, 0x0a,
       7,    0,   74,    2, 0x0a,
       8,    1,   75,    2, 0x0a,
       9,    1,   78,    2, 0x0a,
      10,    1,   81,    2, 0x0a,
      11,    1,   84,    2, 0x0a,
      12,    1,   87,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void BrowserWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BrowserWidget *_t = static_cast<BrowserWidget *>(_o);
        switch (_id) {
        case 0: _t->loadPage(); break;
        case 1: _t->homePage(); break;
        case 2: _t->forwardPage(); break;
        case 3: _t->backPage(); break;
        case 4: _t->refreshLine(); break;
        case 5: _t->refreshPage(); break;
        case 6: _t->handleNewTab((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 7: _t->loadPart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->loadFinish((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->handleTabClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->loadWebPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BrowserWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BrowserWidget.data,
      qt_meta_data_BrowserWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *BrowserWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowserWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrowserWidget.stringdata))
        return static_cast<void*>(const_cast< BrowserWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BrowserWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
