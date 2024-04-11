/****************************************************************************
** Meta object code from reading C++ file 'ClockFace.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ClockFace.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClockFace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSClockFaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSClockFaceENDCLASS = QtMocHelpers::stringData(
    "ClockFace",
    "toggleHourHand",
    "",
    "toggleMinuteHand",
    "toggleSecondHand",
    "toggleDashLines",
    "setColorTheme",
    "ColorTheme",
    "theme",
    "setCurrentTime",
    "time"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClockFaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    0,   51,    2, 0x0a,    2 /* Public */,
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    0,   53,    2, 0x0a,    4 /* Public */,
       6,    1,   54,    2, 0x0a,    5 /* Public */,
       9,    1,   57,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QTime,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClockFace::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSClockFaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClockFaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClockFaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClockFace, std::true_type>,
        // method 'toggleHourHand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleMinuteHand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleSecondHand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleDashLines'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setColorTheme'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ColorTheme, std::false_type>,
        // method 'setCurrentTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>
    >,
    nullptr
} };

void ClockFace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClockFace *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggleHourHand(); break;
        case 1: _t->toggleMinuteHand(); break;
        case 2: _t->toggleSecondHand(); break;
        case 3: _t->toggleDashLines(); break;
        case 4: _t->setColorTheme((*reinterpret_cast< std::add_pointer_t<ColorTheme>>(_a[1]))); break;
        case 5: _t->setCurrentTime((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ClockFace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClockFace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClockFaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ClockFace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
