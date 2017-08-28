/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Supersonic_Nozzle/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 32), // "on_actionAbout_Project_triggered"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 34), // "on_actionAbout_Developer_trig..."
QT_MOC_LITERAL(4, 80, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 102, 21), // "on_checkBox_4_toggled"
QT_MOC_LITERAL(6, 124, 7), // "checked"
QT_MOC_LITERAL(7, 132, 21), // "on_checkBox_3_toggled"
QT_MOC_LITERAL(8, 154, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 178, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 202, 8), // "makePlot"
QT_MOC_LITERAL(11, 211, 24), // "on_radioButton_4_toggled"
QT_MOC_LITERAL(12, 236, 31), // "on_doubleSpinBox_9_valueChanged"
QT_MOC_LITERAL(13, 268, 4), // "arg1"
QT_MOC_LITERAL(14, 273, 24), // "on_radioButton_3_toggled"
QT_MOC_LITERAL(15, 298, 32) // "on_doubleSpinBox_11_valueChanged"

    },
    "MainWindow\0on_actionAbout_Project_triggered\0"
    "\0on_actionAbout_Developer_triggered\0"
    "on_pushButton_clicked\0on_checkBox_4_toggled\0"
    "checked\0on_checkBox_3_toggled\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "makePlot\0on_radioButton_4_toggled\0"
    "on_doubleSpinBox_9_valueChanged\0arg1\0"
    "on_radioButton_3_toggled\0"
    "on_doubleSpinBox_11_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      15,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Double,   13,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAbout_Project_triggered(); break;
        case 1: _t->on_actionAbout_Developer_triggered(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_checkBox_4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_checkBox_3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->makePlot(); break;
        case 8: _t->on_radioButton_4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_doubleSpinBox_9_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_radioButton_3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_doubleSpinBox_11_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
