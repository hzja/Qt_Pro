/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SimpleToDoList/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[513];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 34), // "on_ActionToDoListItemAdd_trig..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 37), // "on_ActionToDoListItemInsert_t..."
QT_MOC_LITERAL(4, 85, 37), // "on_ActionToDoListItemDelete_t..."
QT_MOC_LITERAL(5, 123, 35), // "on_ActionToDoListItemEdit_tri..."
QT_MOC_LITERAL(6, 159, 32), // "on_ActionToDoListClear_triggered"
QT_MOC_LITERAL(7, 192, 38), // "on_ActionToDoListItemNotDone_..."
QT_MOC_LITERAL(8, 231, 35), // "on_ActionToDoListItemDone_tri..."
QT_MOC_LITERAL(9, 267, 33), // "on_NotDoneListItemEditBtn_cli..."
QT_MOC_LITERAL(10, 301, 29), // "on_NotDoneListDoneBtn_clicked"
QT_MOC_LITERAL(11, 331, 32), // "on_NotDoneListItemDelBtn_clicked"
QT_MOC_LITERAL(12, 364, 28), // "on_NotDoneListClrBtn_clicked"
QT_MOC_LITERAL(13, 393, 33), // "on_NotDoneListItemToDoBtn_cli..."
QT_MOC_LITERAL(14, 427, 29), // "on_DoneListItemDelBtn_clicked"
QT_MOC_LITERAL(15, 457, 25), // "on_DoneListClrBtn_clicked"
QT_MOC_LITERAL(16, 483, 29) // "on_DoneListNotDoneBtn_clicked"

    },
    "MainWindow\0on_ActionToDoListItemAdd_triggered\0"
    "\0on_ActionToDoListItemInsert_triggered\0"
    "on_ActionToDoListItemDelete_triggered\0"
    "on_ActionToDoListItemEdit_triggered\0"
    "on_ActionToDoListClear_triggered\0"
    "on_ActionToDoListItemNotDone_triggered\0"
    "on_ActionToDoListItemDone_triggered\0"
    "on_NotDoneListItemEditBtn_clicked\0"
    "on_NotDoneListDoneBtn_clicked\0"
    "on_NotDoneListItemDelBtn_clicked\0"
    "on_NotDoneListClrBtn_clicked\0"
    "on_NotDoneListItemToDoBtn_clicked\0"
    "on_DoneListItemDelBtn_clicked\0"
    "on_DoneListClrBtn_clicked\0"
    "on_DoneListNotDoneBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ActionToDoListItemAdd_triggered(); break;
        case 1: _t->on_ActionToDoListItemInsert_triggered(); break;
        case 2: _t->on_ActionToDoListItemDelete_triggered(); break;
        case 3: _t->on_ActionToDoListItemEdit_triggered(); break;
        case 4: _t->on_ActionToDoListClear_triggered(); break;
        case 5: _t->on_ActionToDoListItemNotDone_triggered(); break;
        case 6: _t->on_ActionToDoListItemDone_triggered(); break;
        case 7: _t->on_NotDoneListItemEditBtn_clicked(); break;
        case 8: _t->on_NotDoneListDoneBtn_clicked(); break;
        case 9: _t->on_NotDoneListItemDelBtn_clicked(); break;
        case 10: _t->on_NotDoneListClrBtn_clicked(); break;
        case 11: _t->on_NotDoneListItemToDoBtn_clicked(); break;
        case 12: _t->on_DoneListItemDelBtn_clicked(); break;
        case 13: _t->on_DoneListClrBtn_clicked(); break;
        case 14: _t->on_DoneListNotDoneBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
