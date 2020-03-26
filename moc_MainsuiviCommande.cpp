/****************************************************************************
** Meta object code from reading C++ file 'MainsuiviCommande.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainsuiviCommande.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainsuiviCommande.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainsuiviCommande[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      44,   18,   18,   18, 0x08,
      72,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainsuiviCommande[] = {
    "MainsuiviCommande\0\0on_ButtonSuivi_clicked()\0"
    "on_ButtonTerminer_clicked()\0"
    "on_ButtonRetrait_clicked()\0"
};

void MainsuiviCommande::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainsuiviCommande *_t = static_cast<MainsuiviCommande *>(_o);
        switch (_id) {
        case 0: _t->on_ButtonSuivi_clicked(); break;
        case 1: _t->on_ButtonTerminer_clicked(); break;
        case 2: _t->on_ButtonRetrait_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainsuiviCommande::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainsuiviCommande::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainsuiviCommande,
      qt_meta_data_MainsuiviCommande, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainsuiviCommande::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainsuiviCommande::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainsuiviCommande::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainsuiviCommande))
        return static_cast<void*>(const_cast< MainsuiviCommande*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainsuiviCommande::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
