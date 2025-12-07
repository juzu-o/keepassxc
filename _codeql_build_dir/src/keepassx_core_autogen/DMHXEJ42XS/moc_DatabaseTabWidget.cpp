/****************************************************************************
** Meta object code from reading C++ file 'DatabaseTabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/gui/DatabaseTabWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabaseTabWidget_t {
    QByteArrayData data[63];
    char stringdata0[1066];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseTabWidget_t qt_meta_stringdata_DatabaseTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DatabaseTabWidget"
QT_MOC_LITERAL(1, 18, 14), // "databaseOpened"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "DatabaseWidget*"
QT_MOC_LITERAL(4, 50, 8), // "dbWidget"
QT_MOC_LITERAL(5, 59, 14), // "databaseClosed"
QT_MOC_LITERAL(6, 74, 8), // "filePath"
QT_MOC_LITERAL(7, 83, 16), // "databaseUnlocked"
QT_MOC_LITERAL(8, 100, 14), // "databaseLocked"
QT_MOC_LITERAL(9, 115, 21), // "activeDatabaseChanged"
QT_MOC_LITERAL(10, 137, 14), // "tabNameChanged"
QT_MOC_LITERAL(11, 152, 20), // "tabVisibilityChanged"
QT_MOC_LITERAL(12, 173, 11), // "tabsVisible"
QT_MOC_LITERAL(13, 185, 13), // "messageGlobal"
QT_MOC_LITERAL(14, 199, 26), // "MessageWidget::MessageType"
QT_MOC_LITERAL(15, 226, 4), // "type"
QT_MOC_LITERAL(16, 231, 20), // "messageDismissGlobal"
QT_MOC_LITERAL(17, 252, 28), // "databaseUnlockDialogFinished"
QT_MOC_LITERAL(18, 281, 8), // "accepted"
QT_MOC_LITERAL(19, 290, 36), // "lockAndSwitchToFirstUnlockedD..."
QT_MOC_LITERAL(20, 327, 5), // "index"
QT_MOC_LITERAL(21, 333, 14), // "addDatabaseTab"
QT_MOC_LITERAL(22, 348, 12), // "inBackground"
QT_MOC_LITERAL(23, 361, 8), // "password"
QT_MOC_LITERAL(24, 370, 7), // "keyfile"
QT_MOC_LITERAL(25, 378, 16), // "closeDatabaseTab"
QT_MOC_LITERAL(26, 395, 20), // "closeAllDatabaseTabs"
QT_MOC_LITERAL(27, 416, 23), // "closeCurrentDatabaseTab"
QT_MOC_LITERAL(28, 440, 26), // "closeDatabaseTabFromSender"
QT_MOC_LITERAL(29, 467, 13), // "updateTabName"
QT_MOC_LITERAL(30, 481, 11), // "newDatabase"
QT_MOC_LITERAL(31, 493, 12), // "openDatabase"
QT_MOC_LITERAL(32, 506, 13), // "mergeDatabase"
QT_MOC_LITERAL(33, 520, 10), // "importFile"
QT_MOC_LITERAL(34, 531, 12), // "saveDatabase"
QT_MOC_LITERAL(35, 544, 14), // "saveDatabaseAs"
QT_MOC_LITERAL(36, 559, 18), // "saveDatabaseBackup"
QT_MOC_LITERAL(37, 578, 11), // "exportToCsv"
QT_MOC_LITERAL(38, 590, 12), // "exportToHtml"
QT_MOC_LITERAL(39, 603, 11), // "exportToXML"
QT_MOC_LITERAL(40, 615, 13), // "lockDatabases"
QT_MOC_LITERAL(41, 629, 20), // "lockDatabasesDelayed"
QT_MOC_LITERAL(42, 650, 25), // "lockDatabasesOnUserSwitch"
QT_MOC_LITERAL(43, 676, 23), // "closeDatabaseFromSender"
QT_MOC_LITERAL(44, 700, 22), // "unlockDatabaseInDialog"
QT_MOC_LITERAL(45, 723, 26), // "DatabaseOpenDialog::Intent"
QT_MOC_LITERAL(46, 750, 6), // "intent"
QT_MOC_LITERAL(47, 757, 25), // "unlockAnyDatabaseInDialog"
QT_MOC_LITERAL(48, 783, 21), // "relockPendingDatabase"
QT_MOC_LITERAL(49, 805, 19), // "showDatabaseReports"
QT_MOC_LITERAL(50, 825, 5), // "state"
QT_MOC_LITERAL(51, 831, 20), // "showDatabaseSettings"
QT_MOC_LITERAL(52, 852, 20), // "showDatabaseSecurity"
QT_MOC_LITERAL(53, 873, 21), // "performGlobalAutoType"
QT_MOC_LITERAL(54, 895, 6), // "search"
QT_MOC_LITERAL(55, 902, 20), // "performBrowserUnlock"
QT_MOC_LITERAL(56, 923, 12), // "toggleTabbar"
QT_MOC_LITERAL(57, 936, 25), // "emitActiveDatabaseChanged"
QT_MOC_LITERAL(58, 962, 23), // "emitDatabaseLockChanged"
QT_MOC_LITERAL(59, 986, 34), // "handleDatabaseUnlockDialogFin..."
QT_MOC_LITERAL(60, 1021, 17), // "handleExportError"
QT_MOC_LITERAL(61, 1039, 6), // "reason"
QT_MOC_LITERAL(62, 1046, 19) // "updateLastDatabases"

    },
    "DatabaseTabWidget\0databaseOpened\0\0"
    "DatabaseWidget*\0dbWidget\0databaseClosed\0"
    "filePath\0databaseUnlocked\0databaseLocked\0"
    "activeDatabaseChanged\0tabNameChanged\0"
    "tabVisibilityChanged\0tabsVisible\0"
    "messageGlobal\0MessageWidget::MessageType\0"
    "type\0messageDismissGlobal\0"
    "databaseUnlockDialogFinished\0accepted\0"
    "lockAndSwitchToFirstUnlockedDatabase\0"
    "index\0addDatabaseTab\0inBackground\0"
    "password\0keyfile\0closeDatabaseTab\0"
    "closeAllDatabaseTabs\0closeCurrentDatabaseTab\0"
    "closeDatabaseTabFromSender\0updateTabName\0"
    "newDatabase\0openDatabase\0mergeDatabase\0"
    "importFile\0saveDatabase\0saveDatabaseAs\0"
    "saveDatabaseBackup\0exportToCsv\0"
    "exportToHtml\0exportToXML\0lockDatabases\0"
    "lockDatabasesDelayed\0lockDatabasesOnUserSwitch\0"
    "closeDatabaseFromSender\0unlockDatabaseInDialog\0"
    "DatabaseOpenDialog::Intent\0intent\0"
    "unlockAnyDatabaseInDialog\0"
    "relockPendingDatabase\0showDatabaseReports\0"
    "state\0showDatabaseSettings\0"
    "showDatabaseSecurity\0performGlobalAutoType\0"
    "search\0performBrowserUnlock\0toggleTabbar\0"
    "emitActiveDatabaseChanged\0"
    "emitDatabaseLockChanged\0"
    "handleDatabaseUnlockDialogFinished\0"
    "handleExportError\0reason\0updateLastDatabases"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseTabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  299,    2, 0x06 /* Public */,
       5,    1,  302,    2, 0x06 /* Public */,
       7,    1,  305,    2, 0x06 /* Public */,
       8,    1,  308,    2, 0x06 /* Public */,
       9,    1,  311,    2, 0x06 /* Public */,
      10,    0,  314,    2, 0x06 /* Public */,
      11,    1,  315,    2, 0x06 /* Public */,
      13,    2,  318,    2, 0x06 /* Public */,
      16,    0,  323,    2, 0x06 /* Public */,
      17,    2,  324,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  329,    2, 0x0a /* Public */,
      19,    0,  332,    2, 0x2a /* Public | MethodCloned */,
      21,    4,  333,    2, 0x0a /* Public */,
      21,    3,  342,    2, 0x2a /* Public | MethodCloned */,
      21,    2,  349,    2, 0x2a /* Public | MethodCloned */,
      21,    1,  354,    2, 0x2a /* Public | MethodCloned */,
      21,    2,  357,    2, 0x0a /* Public */,
      21,    1,  362,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  365,    2, 0x0a /* Public */,
      25,    1,  368,    2, 0x0a /* Public */,
      26,    0,  371,    2, 0x0a /* Public */,
      27,    0,  372,    2, 0x0a /* Public */,
      28,    0,  373,    2, 0x0a /* Public */,
      29,    1,  374,    2, 0x0a /* Public */,
      29,    0,  377,    2, 0x2a /* Public | MethodCloned */,
      30,    0,  378,    2, 0x0a /* Public */,
      31,    0,  379,    2, 0x0a /* Public */,
      32,    0,  380,    2, 0x0a /* Public */,
      33,    0,  381,    2, 0x0a /* Public */,
      34,    1,  382,    2, 0x0a /* Public */,
      34,    0,  385,    2, 0x2a /* Public | MethodCloned */,
      35,    1,  386,    2, 0x0a /* Public */,
      35,    0,  389,    2, 0x2a /* Public | MethodCloned */,
      36,    1,  390,    2, 0x0a /* Public */,
      36,    0,  393,    2, 0x2a /* Public | MethodCloned */,
      37,    0,  394,    2, 0x0a /* Public */,
      38,    0,  395,    2, 0x0a /* Public */,
      39,    0,  396,    2, 0x0a /* Public */,
      40,    0,  397,    2, 0x0a /* Public */,
      41,    0,  398,    2, 0x0a /* Public */,
      42,    0,  399,    2, 0x0a /* Public */,
      43,    0,  400,    2, 0x0a /* Public */,
      44,    2,  401,    2, 0x0a /* Public */,
      44,    3,  406,    2, 0x0a /* Public */,
      47,    1,  413,    2, 0x0a /* Public */,
      48,    0,  416,    2, 0x0a /* Public */,
      49,    1,  417,    2, 0x0a /* Public */,
      51,    1,  420,    2, 0x0a /* Public */,
      52,    0,  423,    2, 0x0a /* Public */,
      53,    1,  424,    2, 0x0a /* Public */,
      55,    0,  427,    2, 0x0a /* Public */,
      56,    0,  428,    2, 0x08 /* Private */,
      57,    0,  429,    2, 0x08 /* Private */,
      58,    0,  430,    2, 0x08 /* Private */,
      59,    2,  431,    2, 0x08 /* Private */,
      60,    1,  436,    2, 0x08 /* Private */,
      62,    0,  439,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,    2,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3,   18,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    6,   22,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    6,   22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,   22,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   22,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::Int,   20,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    0x80000000 | 3,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 3,
    QMetaType::Bool, QMetaType::Int,   20,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,   20,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,   20,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 45,    4,   46,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 45, QMetaType::QString,    4,   46,    6,
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3,   18,    4,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void,

       0        // eod
};

void DatabaseTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatabaseTabWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->databaseOpened((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 1: _t->databaseClosed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->databaseUnlocked((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 3: _t->databaseLocked((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 4: _t->activeDatabaseChanged((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 5: _t->tabNameChanged(); break;
        case 6: _t->tabVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->messageGlobal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2]))); break;
        case 8: _t->messageDismissGlobal(); break;
        case 9: _t->databaseUnlockDialogFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< DatabaseWidget*(*)>(_a[2]))); break;
        case 10: _t->lockAndSwitchToFirstUnlockedDatabase((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->lockAndSwitchToFirstUnlockedDatabase(); break;
        case 12: _t->addDatabaseTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 13: _t->addDatabaseTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->addDatabaseTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->addDatabaseTab((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->addDatabaseTab((*reinterpret_cast< DatabaseWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->addDatabaseTab((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 18: { bool _r = _t->closeDatabaseTab((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->closeDatabaseTab((*reinterpret_cast< DatabaseWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->closeAllDatabaseTabs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->closeCurrentDatabaseTab();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->closeDatabaseTabFromSender();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->updateTabName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->updateTabName(); break;
        case 25: { DatabaseWidget* _r = _t->newDatabase();
            if (_a[0]) *reinterpret_cast< DatabaseWidget**>(_a[0]) = std::move(_r); }  break;
        case 26: _t->openDatabase(); break;
        case 27: _t->mergeDatabase(); break;
        case 28: { DatabaseWidget* _r = _t->importFile();
            if (_a[0]) *reinterpret_cast< DatabaseWidget**>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->saveDatabase((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->saveDatabase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->saveDatabaseAs((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->saveDatabaseAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->saveDatabaseBackup((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->saveDatabaseBackup();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->exportToCsv(); break;
        case 36: _t->exportToHtml(); break;
        case 37: _t->exportToXML(); break;
        case 38: { bool _r = _t->lockDatabases();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->lockDatabasesDelayed(); break;
        case 40: _t->lockDatabasesOnUserSwitch(); break;
        case 41: _t->closeDatabaseFromSender(); break;
        case 42: _t->unlockDatabaseInDialog((*reinterpret_cast< DatabaseWidget*(*)>(_a[1])),(*reinterpret_cast< DatabaseOpenDialog::Intent(*)>(_a[2]))); break;
        case 43: _t->unlockDatabaseInDialog((*reinterpret_cast< DatabaseWidget*(*)>(_a[1])),(*reinterpret_cast< DatabaseOpenDialog::Intent(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 44: _t->unlockAnyDatabaseInDialog((*reinterpret_cast< DatabaseOpenDialog::Intent(*)>(_a[1]))); break;
        case 45: _t->relockPendingDatabase(); break;
        case 46: _t->showDatabaseReports((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->showDatabaseSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->showDatabaseSecurity(); break;
        case 49: _t->performGlobalAutoType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 50: _t->performBrowserUnlock(); break;
        case 51: _t->toggleTabbar(); break;
        case 52: _t->emitActiveDatabaseChanged(); break;
        case 53: _t->emitDatabaseLockChanged(); break;
        case 54: _t->handleDatabaseUnlockDialogFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< DatabaseWidget*(*)>(_a[2]))); break;
        case 55: _t->handleExportError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 56: _t->updateLastDatabases(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DatabaseTabWidget::*)(DatabaseWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::databaseOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DatabaseTabWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::databaseClosed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DatabaseTabWidget::*)(DatabaseWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::databaseUnlocked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DatabaseTabWidget::*)(DatabaseWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::databaseLocked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DatabaseTabWidget::*)(DatabaseWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::activeDatabaseChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DatabaseTabWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::tabNameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DatabaseTabWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::tabVisibilityChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DatabaseTabWidget::*)(const QString & , MessageWidget::MessageType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::messageGlobal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DatabaseTabWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::messageDismissGlobal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DatabaseTabWidget::*)(bool , DatabaseWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseTabWidget::databaseUnlockDialogFinished)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DatabaseTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_DatabaseTabWidget.data,
    qt_meta_data_DatabaseTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatabaseTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int DatabaseTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
    }
    return _id;
}

// SIGNAL 0
void DatabaseTabWidget::databaseOpened(DatabaseWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DatabaseTabWidget::databaseClosed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DatabaseTabWidget::databaseUnlocked(DatabaseWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DatabaseTabWidget::databaseLocked(DatabaseWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DatabaseTabWidget::activeDatabaseChanged(DatabaseWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DatabaseTabWidget::tabNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DatabaseTabWidget::tabVisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DatabaseTabWidget::messageGlobal(const QString & _t1, MessageWidget::MessageType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DatabaseTabWidget::messageDismissGlobal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DatabaseTabWidget::databaseUnlockDialogFinished(bool _t1, DatabaseWidget * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
