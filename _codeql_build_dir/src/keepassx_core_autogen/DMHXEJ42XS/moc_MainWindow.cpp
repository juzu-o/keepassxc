/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/gui/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[103];
    char stringdata0[1670];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 27, 34), // "org.keepassxc.KeePassXC.MainW..."
QT_MOC_LITERAL(3, 62, 16), // "databaseUnlocked"
QT_MOC_LITERAL(4, 79, 0), // ""
QT_MOC_LITERAL(5, 80, 15), // "DatabaseWidget*"
QT_MOC_LITERAL(6, 96, 8), // "dbWidget"
QT_MOC_LITERAL(7, 105, 14), // "databaseLocked"
QT_MOC_LITERAL(8, 120, 21), // "activeDatabaseChanged"
QT_MOC_LITERAL(9, 142, 28), // "databaseUnlockDialogFinished"
QT_MOC_LITERAL(10, 171, 8), // "accepted"
QT_MOC_LITERAL(11, 180, 12), // "openDatabase"
QT_MOC_LITERAL(12, 193, 8), // "filePath"
QT_MOC_LITERAL(13, 202, 8), // "password"
QT_MOC_LITERAL(14, 211, 7), // "keyfile"
QT_MOC_LITERAL(15, 219, 7), // "appExit"
QT_MOC_LITERAL(16, 227, 22), // "isHardwareKeySupported"
QT_MOC_LITERAL(17, 250, 19), // "refreshHardwareKeys"
QT_MOC_LITERAL(18, 270, 20), // "displayGlobalMessage"
QT_MOC_LITERAL(19, 291, 4), // "text"
QT_MOC_LITERAL(20, 296, 26), // "MessageWidget::MessageType"
QT_MOC_LITERAL(21, 323, 4), // "type"
QT_MOC_LITERAL(22, 328, 15), // "showClosebutton"
QT_MOC_LITERAL(23, 344, 15), // "autoHideTimeout"
QT_MOC_LITERAL(24, 360, 17), // "displayTabMessage"
QT_MOC_LITERAL(25, 378, 17), // "hideGlobalMessage"
QT_MOC_LITERAL(26, 396, 16), // "showYubiKeyPopup"
QT_MOC_LITERAL(27, 413, 16), // "hideYubiKeyPopup"
QT_MOC_LITERAL(28, 430, 4), // "hide"
QT_MOC_LITERAL(29, 435, 4), // "show"
QT_MOC_LITERAL(30, 440, 10), // "hideWindow"
QT_MOC_LITERAL(31, 451, 14), // "minimizeOrHide"
QT_MOC_LITERAL(32, 466, 12), // "toggleWindow"
QT_MOC_LITERAL(33, 479, 12), // "bringToFront"
QT_MOC_LITERAL(34, 492, 17), // "closeAllDatabases"
QT_MOC_LITERAL(35, 510, 16), // "lockAllDatabases"
QT_MOC_LITERAL(36, 527, 16), // "closeModalWindow"
QT_MOC_LITERAL(37, 544, 26), // "displayDesktopNotification"
QT_MOC_LITERAL(38, 571, 3), // "msg"
QT_MOC_LITERAL(39, 575, 5), // "title"
QT_MOC_LITERAL(40, 581, 13), // "msTimeoutHint"
QT_MOC_LITERAL(41, 595, 10), // "restartApp"
QT_MOC_LITERAL(42, 606, 7), // "message"
QT_MOC_LITERAL(43, 614, 21), // "updateMenuActionState"
QT_MOC_LITERAL(44, 636, 32), // "updateToolbarSeparatorVisibility"
QT_MOC_LITERAL(45, 669, 17), // "updateWindowTitle"
QT_MOC_LITERAL(46, 687, 15), // "showAboutDialog"
QT_MOC_LITERAL(47, 703, 18), // "performUpdateCheck"
QT_MOC_LITERAL(48, 722, 21), // "showUpdateCheckDialog"
QT_MOC_LITERAL(49, 744, 18), // "focusWindowChanged"
QT_MOC_LITERAL(50, 763, 8), // "QWindow*"
QT_MOC_LITERAL(51, 772, 11), // "focusWindow"
QT_MOC_LITERAL(52, 784, 18), // "hasUpdateAvailable"
QT_MOC_LITERAL(53, 803, 9), // "hasUpdate"
QT_MOC_LITERAL(54, 813, 7), // "version"
QT_MOC_LITERAL(55, 821, 19), // "isManuallyRequested"
QT_MOC_LITERAL(56, 841, 13), // "openDonateUrl"
QT_MOC_LITERAL(57, 855, 16), // "openBugReportUrl"
QT_MOC_LITERAL(58, 872, 23), // "openGettingStartedGuide"
QT_MOC_LITERAL(59, 896, 13), // "openUserGuide"
QT_MOC_LITERAL(60, 910, 14), // "openOnlineHelp"
QT_MOC_LITERAL(61, 925, 21), // "openKeyboardShortcuts"
QT_MOC_LITERAL(62, 947, 17), // "switchToDatabases"
QT_MOC_LITERAL(63, 965, 16), // "switchToSettings"
QT_MOC_LITERAL(64, 982, 7), // "enabled"
QT_MOC_LITERAL(65, 990, 23), // "togglePasswordGenerator"
QT_MOC_LITERAL(66, 1014, 19), // "switchToNewDatabase"
QT_MOC_LITERAL(67, 1034, 20), // "switchToOpenDatabase"
QT_MOC_LITERAL(68, 1055, 20), // "switchToDatabaseFile"
QT_MOC_LITERAL(69, 1076, 4), // "file"
QT_MOC_LITERAL(70, 1081, 21), // "databaseStatusChanged"
QT_MOC_LITERAL(71, 1103, 18), // "databaseTabChanged"
QT_MOC_LITERAL(72, 1122, 8), // "tabIndex"
QT_MOC_LITERAL(73, 1131, 18), // "openRecentDatabase"
QT_MOC_LITERAL(74, 1150, 8), // "QAction*"
QT_MOC_LITERAL(75, 1159, 6), // "action"
QT_MOC_LITERAL(76, 1166, 18), // "clearLastDatabases"
QT_MOC_LITERAL(77, 1185, 23), // "updateLastDatabasesMenu"
QT_MOC_LITERAL(78, 1209, 24), // "updateCopyAttributesMenu"
QT_MOC_LITERAL(79, 1234, 17), // "updateSetTagsMenu"
QT_MOC_LITERAL(80, 1252, 20), // "showEntryContextMenu"
QT_MOC_LITERAL(81, 1273, 9), // "globalPos"
QT_MOC_LITERAL(82, 1283, 20), // "showGroupContextMenu"
QT_MOC_LITERAL(83, 1304, 20), // "applySettingsChanges"
QT_MOC_LITERAL(84, 1325, 17), // "trayIconTriggered"
QT_MOC_LITERAL(85, 1343, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(86, 1377, 6), // "reason"
QT_MOC_LITERAL(87, 1384, 22), // "processTrayIconTrigger"
QT_MOC_LITERAL(88, 1407, 16), // "handleScreenLock"
QT_MOC_LITERAL(89, 1424, 16), // "showErrorMessage"
QT_MOC_LITERAL(90, 1441, 21), // "selectNextDatabaseTab"
QT_MOC_LITERAL(91, 1463, 25), // "selectPreviousDatabaseTab"
QT_MOC_LITERAL(92, 1489, 17), // "selectDatabaseTab"
QT_MOC_LITERAL(93, 1507, 4), // "wrap"
QT_MOC_LITERAL(94, 1512, 22), // "obtainContextFocusLock"
QT_MOC_LITERAL(95, 1535, 23), // "releaseContextFocusLock"
QT_MOC_LITERAL(96, 1559, 12), // "agentEnabled"
QT_MOC_LITERAL(97, 1572, 14), // "updateTrayIcon"
QT_MOC_LITERAL(98, 1587, 17), // "updateProgressBar"
QT_MOC_LITERAL(99, 1605, 10), // "percentage"
QT_MOC_LITERAL(100, 1616, 21), // "updateEntryCountLabel"
QT_MOC_LITERAL(101, 1638, 17), // "focusSearchWidget"
QT_MOC_LITERAL(102, 1656, 13) // "clearSSHAgent"

    },
    "MainWindow\0D-Bus Interface\0"
    "org.keepassxc.KeePassXC.MainWindow\0"
    "databaseUnlocked\0\0DatabaseWidget*\0"
    "dbWidget\0databaseLocked\0activeDatabaseChanged\0"
    "databaseUnlockDialogFinished\0accepted\0"
    "openDatabase\0filePath\0password\0keyfile\0"
    "appExit\0isHardwareKeySupported\0"
    "refreshHardwareKeys\0displayGlobalMessage\0"
    "text\0MessageWidget::MessageType\0type\0"
    "showClosebutton\0autoHideTimeout\0"
    "displayTabMessage\0hideGlobalMessage\0"
    "showYubiKeyPopup\0hideYubiKeyPopup\0"
    "hide\0show\0hideWindow\0minimizeOrHide\0"
    "toggleWindow\0bringToFront\0closeAllDatabases\0"
    "lockAllDatabases\0closeModalWindow\0"
    "displayDesktopNotification\0msg\0title\0"
    "msTimeoutHint\0restartApp\0message\0"
    "updateMenuActionState\0"
    "updateToolbarSeparatorVisibility\0"
    "updateWindowTitle\0showAboutDialog\0"
    "performUpdateCheck\0showUpdateCheckDialog\0"
    "focusWindowChanged\0QWindow*\0focusWindow\0"
    "hasUpdateAvailable\0hasUpdate\0version\0"
    "isManuallyRequested\0openDonateUrl\0"
    "openBugReportUrl\0openGettingStartedGuide\0"
    "openUserGuide\0openOnlineHelp\0"
    "openKeyboardShortcuts\0switchToDatabases\0"
    "switchToSettings\0enabled\0"
    "togglePasswordGenerator\0switchToNewDatabase\0"
    "switchToOpenDatabase\0switchToDatabaseFile\0"
    "file\0databaseStatusChanged\0"
    "databaseTabChanged\0tabIndex\0"
    "openRecentDatabase\0QAction*\0action\0"
    "clearLastDatabases\0updateLastDatabasesMenu\0"
    "updateCopyAttributesMenu\0updateSetTagsMenu\0"
    "showEntryContextMenu\0globalPos\0"
    "showGroupContextMenu\0applySettingsChanges\0"
    "trayIconTriggered\0QSystemTrayIcon::ActivationReason\0"
    "reason\0processTrayIconTrigger\0"
    "handleScreenLock\0showErrorMessage\0"
    "selectNextDatabaseTab\0selectPreviousDatabaseTab\0"
    "selectDatabaseTab\0wrap\0obtainContextFocusLock\0"
    "releaseContextFocusLock\0agentEnabled\0"
    "updateTrayIcon\0updateProgressBar\0"
    "percentage\0updateEntryCountLabel\0"
    "focusSearchWidget\0clearSSHAgent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      78,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,  406,    4, 0x06 /* Public */,
       7,    1,  409,    4, 0x06 /* Public */,
       8,    1,  412,    4, 0x06 /* Public */,
       9,    2,  415,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    3,  420,    4, 0x0a /* Public */,
      11,    2,  427,    4, 0x2a /* Public | MethodCloned */,
      11,    1,  432,    4, 0x2a /* Public | MethodCloned */,
      15,    0,  435,    4, 0x0a /* Public */,
      16,    0,  436,    4, 0x0a /* Public */,
      17,    0,  437,    4, 0x0a /* Public */,
      18,    4,  438,    4, 0x0a /* Public */,
      18,    3,  447,    4, 0x2a /* Public | MethodCloned */,
      18,    2,  454,    4, 0x2a /* Public | MethodCloned */,
      24,    4,  459,    4, 0x0a /* Public */,
      24,    3,  468,    4, 0x2a /* Public | MethodCloned */,
      24,    2,  475,    4, 0x2a /* Public | MethodCloned */,
      25,    0,  480,    4, 0x0a /* Public */,
      26,    0,  481,    4, 0x0a /* Public */,
      27,    0,  482,    4, 0x0a /* Public */,
      28,    0,  483,    4, 0x0a /* Public */,
      29,    0,  484,    4, 0x0a /* Public */,
      30,    0,  485,    4, 0x0a /* Public */,
      31,    0,  486,    4, 0x0a /* Public */,
      32,    0,  487,    4, 0x0a /* Public */,
      33,    0,  488,    4, 0x0a /* Public */,
      34,    0,  489,    4, 0x0a /* Public */,
      35,    0,  490,    4, 0x0a /* Public */,
      36,    0,  491,    4, 0x0a /* Public */,
      37,    3,  492,    4, 0x0a /* Public */,
      37,    2,  499,    4, 0x2a /* Public | MethodCloned */,
      37,    1,  504,    4, 0x2a /* Public | MethodCloned */,
      41,    1,  507,    4, 0x0a /* Public */,
      43,    0,  510,    4, 0x08 /* Private */,
      44,    0,  511,    4, 0x08 /* Private */,
      45,    0,  512,    4, 0x08 /* Private */,
      46,    0,  513,    4, 0x08 /* Private */,
      47,    0,  514,    4, 0x08 /* Private */,
      48,    0,  515,    4, 0x08 /* Private */,
      49,    1,  516,    4, 0x08 /* Private */,
      52,    3,  519,    4, 0x08 /* Private */,
      56,    0,  526,    4, 0x08 /* Private */,
      57,    0,  527,    4, 0x08 /* Private */,
      58,    0,  528,    4, 0x08 /* Private */,
      59,    0,  529,    4, 0x08 /* Private */,
      60,    0,  530,    4, 0x08 /* Private */,
      61,    0,  531,    4, 0x08 /* Private */,
      62,    0,  532,    4, 0x08 /* Private */,
      63,    1,  533,    4, 0x08 /* Private */,
      65,    1,  536,    4, 0x08 /* Private */,
      66,    0,  539,    4, 0x08 /* Private */,
      67,    0,  540,    4, 0x08 /* Private */,
      68,    1,  541,    4, 0x08 /* Private */,
      70,    1,  544,    4, 0x08 /* Private */,
      71,    1,  547,    4, 0x08 /* Private */,
      73,    1,  550,    4, 0x08 /* Private */,
      76,    0,  553,    4, 0x08 /* Private */,
      77,    0,  554,    4, 0x08 /* Private */,
      78,    0,  555,    4, 0x08 /* Private */,
      79,    0,  556,    4, 0x08 /* Private */,
      80,    1,  557,    4, 0x08 /* Private */,
      82,    1,  560,    4, 0x08 /* Private */,
      83,    0,  563,    4, 0x08 /* Private */,
      84,    1,  564,    4, 0x08 /* Private */,
      87,    0,  567,    4, 0x08 /* Private */,
      88,    0,  568,    4, 0x08 /* Private */,
      89,    1,  569,    4, 0x08 /* Private */,
      90,    0,  572,    4, 0x08 /* Private */,
      91,    0,  573,    4, 0x08 /* Private */,
      92,    2,  574,    4, 0x08 /* Private */,
      92,    1,  579,    4, 0x28 /* Private | MethodCloned */,
      94,    0,  582,    4, 0x08 /* Private */,
      95,    0,  583,    4, 0x08 /* Private */,
      96,    1,  584,    4, 0x08 /* Private */,
      97,    0,  587,    4, 0x08 /* Private */,
      98,    2,  588,    4, 0x08 /* Private */,
     100,    0,  593,    4, 0x08 /* Private */,
     101,    0,  594,    4, 0x08 /* Private */,
     102,    0,  595,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 5,   10,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20, QMetaType::Bool, QMetaType::Int,   19,   21,   22,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20, QMetaType::Bool,   19,   21,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   19,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20, QMetaType::Bool, QMetaType::Int,   19,   21,   22,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20, QMetaType::Bool,   19,   21,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   19,   21,
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
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   38,   39,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   38,   39,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   53,   54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   69,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void, 0x80000000 | 74,   75,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   81,
    QMetaType::Void, QMetaType::QPoint,   81,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 85,   86,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   72,   93,
    QMetaType::Void, QMetaType::Int,   72,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   99,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->databaseUnlocked((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 1: _t->databaseLocked((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 2: _t->activeDatabaseChanged((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 3: _t->databaseUnlockDialogFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< DatabaseWidget*(*)>(_a[2]))); break;
        case 4: _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->appExit(); break;
        case 8: { bool _r = _t->isHardwareKeySupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->refreshHardwareKeys();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->displayGlobalMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 11: _t->displayGlobalMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->displayGlobalMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2]))); break;
        case 13: _t->displayTabMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 14: _t->displayTabMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 15: _t->displayTabMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2]))); break;
        case 16: _t->hideGlobalMessage(); break;
        case 17: _t->showYubiKeyPopup(); break;
        case 18: _t->hideYubiKeyPopup(); break;
        case 19: _t->hide(); break;
        case 20: _t->show(); break;
        case 21: _t->hideWindow(); break;
        case 22: _t->minimizeOrHide(); break;
        case 23: _t->toggleWindow(); break;
        case 24: _t->bringToFront(); break;
        case 25: _t->closeAllDatabases(); break;
        case 26: _t->lockAllDatabases(); break;
        case 27: _t->closeModalWindow(); break;
        case 28: _t->displayDesktopNotification((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 29: _t->displayDesktopNotification((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 30: _t->displayDesktopNotification((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->restartApp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->updateMenuActionState(); break;
        case 33: _t->updateToolbarSeparatorVisibility(); break;
        case 34: _t->updateWindowTitle(); break;
        case 35: _t->showAboutDialog(); break;
        case 36: _t->performUpdateCheck(); break;
        case 37: _t->showUpdateCheckDialog(); break;
        case 38: _t->focusWindowChanged((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 39: _t->hasUpdateAvailable((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 40: _t->openDonateUrl(); break;
        case 41: _t->openBugReportUrl(); break;
        case 42: _t->openGettingStartedGuide(); break;
        case 43: _t->openUserGuide(); break;
        case 44: _t->openOnlineHelp(); break;
        case 45: _t->openKeyboardShortcuts(); break;
        case 46: _t->switchToDatabases(); break;
        case 47: _t->switchToSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->togglePasswordGenerator((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->switchToNewDatabase(); break;
        case 50: _t->switchToOpenDatabase(); break;
        case 51: _t->switchToDatabaseFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 52: _t->databaseStatusChanged((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 53: _t->databaseTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->openRecentDatabase((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 55: _t->clearLastDatabases(); break;
        case 56: _t->updateLastDatabasesMenu(); break;
        case 57: _t->updateCopyAttributesMenu(); break;
        case 58: _t->updateSetTagsMenu(); break;
        case 59: _t->showEntryContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 60: _t->showGroupContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 61: _t->applySettingsChanges(); break;
        case 62: _t->trayIconTriggered((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 63: _t->processTrayIconTrigger(); break;
        case 64: _t->handleScreenLock(); break;
        case 65: _t->showErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 66: _t->selectNextDatabaseTab(); break;
        case 67: _t->selectPreviousDatabaseTab(); break;
        case 68: _t->selectDatabaseTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 69: _t->selectDatabaseTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->obtainContextFocusLock(); break;
        case 71: _t->releaseContextFocusLock(); break;
        case 72: _t->agentEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: _t->updateTrayIcon(); break;
        case 74: _t->updateProgressBar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 75: _t->updateEntryCountLabel(); break;
        case 76: _t->focusSearchWidget(); break;
        case 77: _t->clearSSHAgent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatabaseWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatabaseWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatabaseWidget* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatabaseWidget* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatabaseWidget* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(DatabaseWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::databaseUnlocked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(DatabaseWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::databaseLocked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(DatabaseWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::activeDatabaseChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool , DatabaseWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::databaseUnlockDialogFinished)) {
                *result = 3;
                return;
            }
        }
    }
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
        if (_id < 78)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 78;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 78)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 78;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::databaseUnlocked(DatabaseWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::databaseLocked(DatabaseWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::activeDatabaseChanged(DatabaseWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::databaseUnlockDialogFinished(bool _t1, DatabaseWidget * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_MainWindowEventFilter_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindowEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindowEventFilter_t qt_meta_stringdata_MainWindowEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 21) // "MainWindowEventFilter"

    },
    "MainWindowEventFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowEventFilter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MainWindowEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MainWindowEventFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainWindowEventFilter.data,
    qt_meta_data_MainWindowEventFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindowEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainWindowEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
