/****************************************************************************
** Meta object code from reading C++ file 'MainAffClient.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainAffClient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainAffClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainAffClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      43,   14,   14,   14, 0x08,
      71,   14,   14,   14, 0x08,
     100,   14,   14,   14, 0x08,
     127,   14,   14,   14, 0x08,
     158,   14,   14,   14, 0x08,
     186,   14,   14,   14, 0x08,
     209,   14,   14,   14, 0x08,
     232,   14,   14,   14, 0x08,
     255,   14,   14,   14, 0x08,
     278,   14,   14,   14, 0x08,
     301,   14,   14,   14, 0x08,
     327,   14,   14,   14, 0x08,
     353,   14,   14,   14, 0x08,
     379,   14,   14,   14, 0x08,
     405,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainAffClient[] = {
    "MainAffClient\0\0on_ButtonMateriel_clicked()\0"
    "on_ButtonBrassage_clicked()\0"
    "on_ButtonCommander_clicked()\0"
    "on_ButtonAnnuler_clicked()\0"
    "on_ButtonInformation_clicked()\0"
    "on_ButtonTerminer_clicked()\0"
    "on_checkBox0_clicked()\0on_checkBox1_clicked()\0"
    "on_checkBox2_clicked()\0on_checkBox3_clicked()\0"
    "on_checkBox4_clicked()\0on_radioButton0_clicked()\0"
    "on_radioButton1_clicked()\0"
    "on_radioButton2_clicked()\0"
    "on_radioButton3_clicked()\0"
    "on_radioButton4_clicked()\0"
};

void MainAffClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainAffClient *_t = static_cast<MainAffClient *>(_o);
        switch (_id) {
        case 0: _t->on_ButtonMateriel_clicked(); break;
        case 1: _t->on_ButtonBrassage_clicked(); break;
        case 2: _t->on_ButtonCommander_clicked(); break;
        case 3: _t->on_ButtonAnnuler_clicked(); break;
        case 4: _t->on_ButtonInformation_clicked(); break;
        case 5: _t->on_ButtonTerminer_clicked(); break;
        case 6: _t->on_checkBox0_clicked(); break;
        case 7: _t->on_checkBox1_clicked(); break;
        case 8: _t->on_checkBox2_clicked(); break;
        case 9: _t->on_checkBox3_clicked(); break;
        case 10: _t->on_checkBox4_clicked(); break;
        case 11: _t->on_radioButton0_clicked(); break;
        case 12: _t->on_radioButton1_clicked(); break;
        case 13: _t->on_radioButton2_clicked(); break;
        case 14: _t->on_radioButton3_clicked(); break;
        case 15: _t->on_radioButton4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainAffClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainAffClient::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainAffClient,
      qt_meta_data_MainAffClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainAffClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainAffClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainAffClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainAffClient))
        return static_cast<void*>(const_cast< MainAffClient*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainAffClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
