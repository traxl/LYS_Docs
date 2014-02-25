/****************************************************************************
** Meta object code from reading C++ file 'lanyourself.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Testkonzept/lanyourself.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lanyourself.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LanYourself_t {
    QByteArrayData data[21];
    char stringdata[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LanYourself_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LanYourself_t qt_meta_stringdata_LanYourself = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 7),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 4),
QT_MOC_LITERAL(4, 26, 7),
QT_MOC_LITERAL(5, 34, 8),
QT_MOC_LITERAL(6, 43, 8),
QT_MOC_LITERAL(7, 52, 10),
QT_MOC_LITERAL(8, 63, 10),
QT_MOC_LITERAL(9, 74, 10),
QT_MOC_LITERAL(10, 85, 5),
QT_MOC_LITERAL(11, 91, 10),
QT_MOC_LITERAL(12, 102, 7),
QT_MOC_LITERAL(13, 110, 11),
QT_MOC_LITERAL(14, 122, 8),
QT_MOC_LITERAL(15, 131, 13),
QT_MOC_LITERAL(16, 145, 4),
QT_MOC_LITERAL(17, 150, 3),
QT_MOC_LITERAL(18, 154, 13),
QT_MOC_LITERAL(19, 168, 13),
QT_MOC_LITERAL(20, 182, 5)
    },
    "LanYourself\0Connect\0\0Save\0ProLoad\0"
    "setParam\0getParam\0getNewLine\0getOldLine\0"
    "setOldLine\0value\0setNewLine\0toCharP\0"
    "const char*\0GotoLine\0std::fstream&\0"
    "file\0num\0getLineNumber\0setLineNumber\0"
    "lineN\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LanYourself[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08,
       3,    0,   80,    2, 0x08,
       4,    0,   81,    2, 0x08,
       5,    0,   82,    2, 0x08,
       6,    0,   83,    2, 0x08,
       7,    0,   84,    2, 0x08,
       8,    0,   85,    2, 0x08,
       9,    1,   86,    2, 0x08,
      11,    1,   89,    2, 0x08,
      12,    1,   92,    2, 0x08,
      14,    2,   95,    2, 0x08,
      18,    0,  100,    2, 0x08,
      19,    1,  101,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    0x80000000 | 13, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int,   16,   17,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void LanYourself::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LanYourself *_t = static_cast<LanYourself *>(_o);
        switch (_id) {
        case 0: _t->Connect(); break;
        case 1: _t->Save(); break;
        case 2: _t->ProLoad(); break;
        case 3: _t->setParam(); break;
        case 4: { QStringList _r = _t->getParam();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getNewLine();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getOldLine();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->setOldLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setNewLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: { const char* _r = _t->toCharP((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 10: _t->GotoLine((*reinterpret_cast< std::fstream(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: { int _r = _t->getLineNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->setLineNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LanYourself::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LanYourself.data,
      qt_meta_data_LanYourself,  qt_static_metacall, 0, 0}
};


const QMetaObject *LanYourself::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LanYourself::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LanYourself.stringdata))
        return static_cast<void*>(const_cast< LanYourself*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LanYourself::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
