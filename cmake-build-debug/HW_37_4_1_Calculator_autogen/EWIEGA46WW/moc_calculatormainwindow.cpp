/****************************************************************************
** Meta object code from reading C++ file 'calculatormainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../calculatormainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculatormainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalculatorMainWindow_t {
    QByteArrayData data[23];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalculatorMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalculatorMainWindow_t qt_meta_stringdata_CalculatorMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CalculatorMainWindow"
QT_MOC_LITERAL(1, 21, 21), // "pressButtonAfterEqual"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "afterResult"
QT_MOC_LITERAL(4, 56, 17), // "sameButtonProcess"
QT_MOC_LITERAL(5, 74, 7), // "numeral"
QT_MOC_LITERAL(6, 82, 6), // "press0"
QT_MOC_LITERAL(7, 89, 6), // "press1"
QT_MOC_LITERAL(8, 96, 6), // "press2"
QT_MOC_LITERAL(9, 103, 6), // "press3"
QT_MOC_LITERAL(10, 110, 6), // "press4"
QT_MOC_LITERAL(11, 117, 6), // "press5"
QT_MOC_LITERAL(12, 124, 6), // "press6"
QT_MOC_LITERAL(13, 131, 6), // "press7"
QT_MOC_LITERAL(14, 138, 6), // "press8"
QT_MOC_LITERAL(15, 145, 6), // "press9"
QT_MOC_LITERAL(16, 152, 4), // "plus"
QT_MOC_LITERAL(17, 157, 5), // "minus"
QT_MOC_LITERAL(18, 163, 5), // "equal"
QT_MOC_LITERAL(19, 169, 8), // "multiply"
QT_MOC_LITERAL(20, 178, 6), // "divide"
QT_MOC_LITERAL(21, 185, 5), // "comma"
QT_MOC_LITERAL(22, 191, 5) // "clear"

    },
    "CalculatorMainWindow\0pressButtonAfterEqual\0"
    "\0afterResult\0sameButtonProcess\0numeral\0"
    "press0\0press1\0press2\0press3\0press4\0"
    "press5\0press6\0press7\0press8\0press9\0"
    "plus\0minus\0equal\0multiply\0divide\0comma\0"
    "clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalculatorMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x0a /* Public */,
       3,    0,  115,    2, 0x0a /* Public */,
       4,    1,  116,    2, 0x0a /* Public */,
       6,    0,  119,    2, 0x0a /* Public */,
       7,    0,  120,    2, 0x0a /* Public */,
       8,    0,  121,    2, 0x0a /* Public */,
       9,    0,  122,    2, 0x0a /* Public */,
      10,    0,  123,    2, 0x0a /* Public */,
      11,    0,  124,    2, 0x0a /* Public */,
      12,    0,  125,    2, 0x0a /* Public */,
      13,    0,  126,    2, 0x0a /* Public */,
      14,    0,  127,    2, 0x0a /* Public */,
      15,    0,  128,    2, 0x0a /* Public */,
      16,    0,  129,    2, 0x0a /* Public */,
      17,    0,  130,    2, 0x0a /* Public */,
      18,    0,  131,    2, 0x0a /* Public */,
      19,    0,  132,    2, 0x0a /* Public */,
      20,    0,  133,    2, 0x0a /* Public */,
      21,    0,  134,    2, 0x0a /* Public */,
      22,    0,  135,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CalculatorMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalculatorMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressButtonAfterEqual(); break;
        case 1: _t->afterResult(); break;
        case 2: _t->sameButtonProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->press0(); break;
        case 4: _t->press1(); break;
        case 5: _t->press2(); break;
        case 6: _t->press3(); break;
        case 7: _t->press4(); break;
        case 8: _t->press5(); break;
        case 9: _t->press6(); break;
        case 10: _t->press7(); break;
        case 11: _t->press8(); break;
        case 12: _t->press9(); break;
        case 13: _t->plus(); break;
        case 14: _t->minus(); break;
        case 15: _t->equal(); break;
        case 16: _t->multiply(); break;
        case 17: _t->divide(); break;
        case 18: _t->comma(); break;
        case 19: _t->clear(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalculatorMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CalculatorMainWindow.data,
    qt_meta_data_CalculatorMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalculatorMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalculatorMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalculatorMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CalculatorMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
