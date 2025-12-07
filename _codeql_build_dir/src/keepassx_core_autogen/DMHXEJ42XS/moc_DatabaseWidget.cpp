/****************************************************************************
** Meta object code from reading C++ file 'DatabaseWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/gui/DatabaseWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabaseWidget_t {
    QByteArrayData data[163];
    char stringdata0[2510];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseWidget_t qt_meta_stringdata_DatabaseWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DatabaseWidget"
QT_MOC_LITERAL(1, 15, 23), // "databaseFilePathChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "oldPath"
QT_MOC_LITERAL(4, 48, 7), // "newPath"
QT_MOC_LITERAL(5, 56, 16), // "databaseModified"
QT_MOC_LITERAL(6, 73, 22), // "databaseNonDataChanged"
QT_MOC_LITERAL(7, 96, 13), // "databaseSaved"
QT_MOC_LITERAL(8, 110, 21), // "databaseAboutToUnlock"
QT_MOC_LITERAL(9, 132, 16), // "databaseUnlocked"
QT_MOC_LITERAL(10, 149, 21), // "databaseLockRequested"
QT_MOC_LITERAL(11, 171, 14), // "databaseLocked"
QT_MOC_LITERAL(12, 186, 16), // "databaseReplaced"
QT_MOC_LITERAL(13, 203, 24), // "QSharedPointer<Database>"
QT_MOC_LITERAL(14, 228, 5), // "oldDb"
QT_MOC_LITERAL(15, 234, 5), // "newDb"
QT_MOC_LITERAL(16, 240, 12), // "closeRequest"
QT_MOC_LITERAL(17, 253, 18), // "currentModeChanged"
QT_MOC_LITERAL(18, 272, 20), // "DatabaseWidget::Mode"
QT_MOC_LITERAL(19, 293, 4), // "mode"
QT_MOC_LITERAL(20, 298, 12), // "groupChanged"
QT_MOC_LITERAL(21, 311, 21), // "entrySelectionChanged"
QT_MOC_LITERAL(22, 333, 19), // "requestOpenDatabase"
QT_MOC_LITERAL(23, 353, 8), // "filePath"
QT_MOC_LITERAL(24, 362, 12), // "inBackground"
QT_MOC_LITERAL(25, 375, 8), // "password"
QT_MOC_LITERAL(26, 384, 7), // "keyFile"
QT_MOC_LITERAL(27, 392, 14), // "databaseMerged"
QT_MOC_LITERAL(28, 407, 8), // "mergedDb"
QT_MOC_LITERAL(29, 416, 18), // "updateSyncProgress"
QT_MOC_LITERAL(30, 435, 8), // "progress"
QT_MOC_LITERAL(31, 444, 7), // "message"
QT_MOC_LITERAL(32, 452, 25), // "groupContextMenuRequested"
QT_MOC_LITERAL(33, 478, 9), // "globalPos"
QT_MOC_LITERAL(34, 488, 25), // "entryContextMenuRequested"
QT_MOC_LITERAL(35, 514, 23), // "listModeAboutToActivate"
QT_MOC_LITERAL(36, 538, 17), // "listModeActivated"
QT_MOC_LITERAL(37, 556, 25), // "searchModeAboutToActivate"
QT_MOC_LITERAL(38, 582, 19), // "searchModeActivated"
QT_MOC_LITERAL(39, 602, 20), // "splitterSizesChanged"
QT_MOC_LITERAL(40, 623, 21), // "entryViewStateChanged"
QT_MOC_LITERAL(41, 645, 11), // "clearSearch"
QT_MOC_LITERAL(42, 657, 21), // "requestGlobalAutoType"
QT_MOC_LITERAL(43, 679, 6), // "search"
QT_MOC_LITERAL(44, 686, 13), // "requestSearch"
QT_MOC_LITERAL(45, 700, 11), // "reloadBegin"
QT_MOC_LITERAL(46, 712, 9), // "reloadEnd"
QT_MOC_LITERAL(47, 722, 4), // "lock"
QT_MOC_LITERAL(48, 727, 4), // "save"
QT_MOC_LITERAL(49, 732, 6), // "saveAs"
QT_MOC_LITERAL(50, 739, 10), // "saveBackup"
QT_MOC_LITERAL(51, 750, 15), // "replaceDatabase"
QT_MOC_LITERAL(52, 766, 2), // "db"
QT_MOC_LITERAL(53, 769, 11), // "createEntry"
QT_MOC_LITERAL(54, 781, 10), // "cloneEntry"
QT_MOC_LITERAL(55, 792, 21), // "expireSelectedEntries"
QT_MOC_LITERAL(56, 814, 21), // "deleteSelectedEntries"
QT_MOC_LITERAL(57, 836, 22), // "restoreSelectedEntries"
QT_MOC_LITERAL(58, 859, 13), // "deleteEntries"
QT_MOC_LITERAL(59, 873, 13), // "QList<Entry*>"
QT_MOC_LITERAL(60, 887, 7), // "entries"
QT_MOC_LITERAL(61, 895, 7), // "confirm"
QT_MOC_LITERAL(62, 903, 14), // "focusOnEntries"
QT_MOC_LITERAL(63, 918, 13), // "editIfFocused"
QT_MOC_LITERAL(64, 932, 13), // "focusOnGroups"
QT_MOC_LITERAL(65, 946, 11), // "moveEntryUp"
QT_MOC_LITERAL(66, 958, 13), // "moveEntryDown"
QT_MOC_LITERAL(67, 972, 9), // "copyTitle"
QT_MOC_LITERAL(68, 982, 12), // "copyUsername"
QT_MOC_LITERAL(69, 995, 12), // "copyPassword"
QT_MOC_LITERAL(70, 1008, 7), // "copyURL"
QT_MOC_LITERAL(71, 1016, 9), // "copyNotes"
QT_MOC_LITERAL(72, 1026, 13), // "copyAttribute"
QT_MOC_LITERAL(73, 1040, 8), // "QAction*"
QT_MOC_LITERAL(74, 1049, 6), // "action"
QT_MOC_LITERAL(75, 1056, 24), // "copyFocusedTextSelection"
QT_MOC_LITERAL(76, 1081, 11), // "filterByTag"
QT_MOC_LITERAL(77, 1093, 6), // "setTag"
QT_MOC_LITERAL(78, 1100, 8), // "showTotp"
QT_MOC_LITERAL(79, 1109, 17), // "showTotpKeyQrCode"
QT_MOC_LITERAL(80, 1127, 8), // "copyTotp"
QT_MOC_LITERAL(81, 1136, 16), // "copyPasswordTotp"
QT_MOC_LITERAL(82, 1153, 9), // "setupTotp"
QT_MOC_LITERAL(83, 1163, 15), // "performAutoType"
QT_MOC_LITERAL(84, 1179, 8), // "sequence"
QT_MOC_LITERAL(85, 1188, 23), // "performAutoTypeUsername"
QT_MOC_LITERAL(86, 1212, 28), // "performAutoTypeUsernameEnter"
QT_MOC_LITERAL(87, 1241, 23), // "performAutoTypePassword"
QT_MOC_LITERAL(88, 1265, 28), // "performAutoTypePasswordEnter"
QT_MOC_LITERAL(89, 1294, 19), // "performAutoTypeTOTP"
QT_MOC_LITERAL(90, 1314, 18), // "performAutoTypeURL"
QT_MOC_LITERAL(91, 1333, 23), // "performAutoTypeURLEnter"
QT_MOC_LITERAL(92, 1357, 27), // "setClipboardTextAndMinimize"
QT_MOC_LITERAL(93, 1385, 4), // "text"
QT_MOC_LITERAL(94, 1390, 7), // "openUrl"
QT_MOC_LITERAL(95, 1398, 24), // "downloadSelectedFavicons"
QT_MOC_LITERAL(96, 1423, 19), // "downloadAllFavicons"
QT_MOC_LITERAL(97, 1443, 27), // "downloadFaviconInBackground"
QT_MOC_LITERAL(98, 1471, 6), // "Entry*"
QT_MOC_LITERAL(99, 1478, 5), // "entry"
QT_MOC_LITERAL(100, 1484, 15), // "openUrlForEntry"
QT_MOC_LITERAL(101, 1500, 11), // "createGroup"
QT_MOC_LITERAL(102, 1512, 10), // "cloneGroup"
QT_MOC_LITERAL(103, 1523, 11), // "deleteGroup"
QT_MOC_LITERAL(104, 1535, 16), // "switchToMainView"
QT_MOC_LITERAL(105, 1552, 22), // "previousDialogAccepted"
QT_MOC_LITERAL(106, 1575, 17), // "switchToEntryEdit"
QT_MOC_LITERAL(107, 1593, 17), // "switchToGroupEdit"
QT_MOC_LITERAL(108, 1611, 13), // "sortGroupsAsc"
QT_MOC_LITERAL(109, 1625, 14), // "sortGroupsDesc"
QT_MOC_LITERAL(110, 1640, 24), // "switchToDatabaseSecurity"
QT_MOC_LITERAL(111, 1665, 23), // "switchToDatabaseReports"
QT_MOC_LITERAL(112, 1689, 24), // "switchToDatabaseSettings"
QT_MOC_LITERAL(113, 1714, 20), // "switchToOpenDatabase"
QT_MOC_LITERAL(114, 1735, 21), // "performUnlockDatabase"
QT_MOC_LITERAL(115, 1757, 7), // "keyfile"
QT_MOC_LITERAL(116, 1765, 15), // "emptyRecycleBin"
QT_MOC_LITERAL(117, 1781, 10), // "searchtext"
QT_MOC_LITERAL(118, 1792, 10), // "saveSearch"
QT_MOC_LITERAL(119, 1803, 12), // "deleteSearch"
QT_MOC_LITERAL(120, 1816, 4), // "name"
QT_MOC_LITERAL(121, 1821, 22), // "setSearchCaseSensitive"
QT_MOC_LITERAL(122, 1844, 5), // "state"
QT_MOC_LITERAL(123, 1850, 19), // "setSearchLimitGroup"
QT_MOC_LITERAL(124, 1870, 9), // "endSearch"
QT_MOC_LITERAL(125, 1880, 11), // "showMessage"
QT_MOC_LITERAL(126, 1892, 26), // "MessageWidget::MessageType"
QT_MOC_LITERAL(127, 1919, 4), // "type"
QT_MOC_LITERAL(128, 1924, 15), // "showClosebutton"
QT_MOC_LITERAL(129, 1940, 15), // "autoHideTimeout"
QT_MOC_LITERAL(130, 1956, 16), // "showErrorMessage"
QT_MOC_LITERAL(131, 1973, 12), // "errorMessage"
QT_MOC_LITERAL(132, 1986, 11), // "hideMessage"
QT_MOC_LITERAL(133, 1998, 20), // "triggerAutosaveTimer"
QT_MOC_LITERAL(134, 2019, 29), // "entryActivationSignalReceived"
QT_MOC_LITERAL(135, 2049, 23), // "EntryModel::ModelColumn"
QT_MOC_LITERAL(136, 2073, 6), // "column"
QT_MOC_LITERAL(137, 2080, 21), // "switchBackToEntryEdit"
QT_MOC_LITERAL(138, 2102, 19), // "switchToHistoryView"
QT_MOC_LITERAL(139, 2122, 6), // "create"
QT_MOC_LITERAL(140, 2129, 6), // "Group*"
QT_MOC_LITERAL(141, 2136, 29), // "emitGroupContextMenuRequested"
QT_MOC_LITERAL(142, 2166, 3), // "pos"
QT_MOC_LITERAL(143, 2170, 29), // "emitEntryContextMenuRequested"
QT_MOC_LITERAL(144, 2200, 14), // "onEntryChanged"
QT_MOC_LITERAL(145, 2215, 14), // "onGroupChanged"
QT_MOC_LITERAL(146, 2230, 18), // "onDatabaseModified"
QT_MOC_LITERAL(147, 2249, 24), // "onDatabaseNonDataChanged"
QT_MOC_LITERAL(148, 2274, 22), // "onAutosaveDelayTimeout"
QT_MOC_LITERAL(149, 2297, 22), // "connectDatabaseSignals"
QT_MOC_LITERAL(150, 2320, 12), // "loadDatabase"
QT_MOC_LITERAL(151, 2333, 8), // "accepted"
QT_MOC_LITERAL(152, 2342, 14), // "unlockDatabase"
QT_MOC_LITERAL(153, 2357, 13), // "mergeDatabase"
QT_MOC_LITERAL(154, 2371, 22), // "emitCurrentModeChanged"
QT_MOC_LITERAL(155, 2394, 18), // "reloadDatabaseFile"
QT_MOC_LITERAL(156, 2413, 15), // "triggeredBySave"
QT_MOC_LITERAL(157, 2429, 22), // "restoreGroupEntryFocus"
QT_MOC_LITERAL(158, 2452, 9), // "groupUuid"
QT_MOC_LITERAL(159, 2462, 9), // "EntryUuid"
QT_MOC_LITERAL(160, 2472, 15), // "onConfigChanged"
QT_MOC_LITERAL(161, 2488, 17), // "Config::ConfigKey"
QT_MOC_LITERAL(162, 2506, 3) // "key"

    },
    "DatabaseWidget\0databaseFilePathChanged\0"
    "\0oldPath\0newPath\0databaseModified\0"
    "databaseNonDataChanged\0databaseSaved\0"
    "databaseAboutToUnlock\0databaseUnlocked\0"
    "databaseLockRequested\0databaseLocked\0"
    "databaseReplaced\0QSharedPointer<Database>\0"
    "oldDb\0newDb\0closeRequest\0currentModeChanged\0"
    "DatabaseWidget::Mode\0mode\0groupChanged\0"
    "entrySelectionChanged\0requestOpenDatabase\0"
    "filePath\0inBackground\0password\0keyFile\0"
    "databaseMerged\0mergedDb\0updateSyncProgress\0"
    "progress\0message\0groupContextMenuRequested\0"
    "globalPos\0entryContextMenuRequested\0"
    "listModeAboutToActivate\0listModeActivated\0"
    "searchModeAboutToActivate\0searchModeActivated\0"
    "splitterSizesChanged\0entryViewStateChanged\0"
    "clearSearch\0requestGlobalAutoType\0"
    "search\0requestSearch\0reloadBegin\0"
    "reloadEnd\0lock\0save\0saveAs\0saveBackup\0"
    "replaceDatabase\0db\0createEntry\0"
    "cloneEntry\0expireSelectedEntries\0"
    "deleteSelectedEntries\0restoreSelectedEntries\0"
    "deleteEntries\0QList<Entry*>\0entries\0"
    "confirm\0focusOnEntries\0editIfFocused\0"
    "focusOnGroups\0moveEntryUp\0moveEntryDown\0"
    "copyTitle\0copyUsername\0copyPassword\0"
    "copyURL\0copyNotes\0copyAttribute\0"
    "QAction*\0action\0copyFocusedTextSelection\0"
    "filterByTag\0setTag\0showTotp\0"
    "showTotpKeyQrCode\0copyTotp\0copyPasswordTotp\0"
    "setupTotp\0performAutoType\0sequence\0"
    "performAutoTypeUsername\0"
    "performAutoTypeUsernameEnter\0"
    "performAutoTypePassword\0"
    "performAutoTypePasswordEnter\0"
    "performAutoTypeTOTP\0performAutoTypeURL\0"
    "performAutoTypeURLEnter\0"
    "setClipboardTextAndMinimize\0text\0"
    "openUrl\0downloadSelectedFavicons\0"
    "downloadAllFavicons\0downloadFaviconInBackground\0"
    "Entry*\0entry\0openUrlForEntry\0createGroup\0"
    "cloneGroup\0deleteGroup\0switchToMainView\0"
    "previousDialogAccepted\0switchToEntryEdit\0"
    "switchToGroupEdit\0sortGroupsAsc\0"
    "sortGroupsDesc\0switchToDatabaseSecurity\0"
    "switchToDatabaseReports\0"
    "switchToDatabaseSettings\0switchToOpenDatabase\0"
    "performUnlockDatabase\0keyfile\0"
    "emptyRecycleBin\0searchtext\0saveSearch\0"
    "deleteSearch\0name\0setSearchCaseSensitive\0"
    "state\0setSearchLimitGroup\0endSearch\0"
    "showMessage\0MessageWidget::MessageType\0"
    "type\0showClosebutton\0autoHideTimeout\0"
    "showErrorMessage\0errorMessage\0hideMessage\0"
    "triggerAutosaveTimer\0entryActivationSignalReceived\0"
    "EntryModel::ModelColumn\0column\0"
    "switchBackToEntryEdit\0switchToHistoryView\0"
    "create\0Group*\0emitGroupContextMenuRequested\0"
    "pos\0emitEntryContextMenuRequested\0"
    "onEntryChanged\0onGroupChanged\0"
    "onDatabaseModified\0onDatabaseNonDataChanged\0"
    "onAutosaveDelayTimeout\0connectDatabaseSignals\0"
    "loadDatabase\0accepted\0unlockDatabase\0"
    "mergeDatabase\0emitCurrentModeChanged\0"
    "reloadDatabaseFile\0triggeredBySave\0"
    "restoreGroupEntryFocus\0groupUuid\0"
    "EntryUuid\0onConfigChanged\0Config::ConfigKey\0"
    "key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     127,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      29,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  649,    2, 0x06 /* Public */,
       5,    0,  654,    2, 0x06 /* Public */,
       6,    0,  655,    2, 0x06 /* Public */,
       7,    0,  656,    2, 0x06 /* Public */,
       8,    0,  657,    2, 0x06 /* Public */,
       9,    0,  658,    2, 0x06 /* Public */,
      10,    0,  659,    2, 0x06 /* Public */,
      11,    0,  660,    2, 0x06 /* Public */,
      12,    2,  661,    2, 0x06 /* Public */,
      16,    0,  666,    2, 0x06 /* Public */,
      17,    1,  667,    2, 0x06 /* Public */,
      20,    0,  670,    2, 0x06 /* Public */,
      21,    0,  671,    2, 0x06 /* Public */,
      22,    4,  672,    2, 0x06 /* Public */,
      27,    1,  681,    2, 0x06 /* Public */,
      29,    2,  684,    2, 0x06 /* Public */,
      32,    1,  689,    2, 0x06 /* Public */,
      34,    1,  692,    2, 0x06 /* Public */,
      35,    0,  695,    2, 0x06 /* Public */,
      36,    0,  696,    2, 0x06 /* Public */,
      37,    0,  697,    2, 0x06 /* Public */,
      38,    0,  698,    2, 0x06 /* Public */,
      39,    0,  699,    2, 0x06 /* Public */,
      40,    0,  700,    2, 0x06 /* Public */,
      41,    0,  701,    2, 0x06 /* Public */,
      42,    1,  702,    2, 0x06 /* Public */,
      44,    1,  705,    2, 0x06 /* Public */,
      45,    0,  708,    2, 0x06 /* Public */,
      46,    0,  709,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      47,    0,  710,    2, 0x0a /* Public */,
      48,    0,  711,    2, 0x0a /* Public */,
      49,    0,  712,    2, 0x0a /* Public */,
      50,    0,  713,    2, 0x0a /* Public */,
      51,    1,  714,    2, 0x0a /* Public */,
      53,    0,  717,    2, 0x0a /* Public */,
      54,    0,  718,    2, 0x0a /* Public */,
      55,    0,  719,    2, 0x0a /* Public */,
      56,    0,  720,    2, 0x0a /* Public */,
      57,    0,  721,    2, 0x0a /* Public */,
      58,    2,  722,    2, 0x0a /* Public */,
      58,    1,  727,    2, 0x2a /* Public | MethodCloned */,
      62,    1,  730,    2, 0x0a /* Public */,
      62,    0,  733,    2, 0x2a /* Public | MethodCloned */,
      64,    1,  734,    2, 0x0a /* Public */,
      64,    0,  737,    2, 0x2a /* Public | MethodCloned */,
      65,    0,  738,    2, 0x0a /* Public */,
      66,    0,  739,    2, 0x0a /* Public */,
      67,    0,  740,    2, 0x0a /* Public */,
      68,    0,  741,    2, 0x0a /* Public */,
      69,    0,  742,    2, 0x0a /* Public */,
      70,    0,  743,    2, 0x0a /* Public */,
      71,    0,  744,    2, 0x0a /* Public */,
      72,    1,  745,    2, 0x0a /* Public */,
      75,    0,  748,    2, 0x0a /* Public */,
      76,    0,  749,    2, 0x0a /* Public */,
      77,    1,  750,    2, 0x0a /* Public */,
      78,    0,  753,    2, 0x0a /* Public */,
      79,    0,  754,    2, 0x0a /* Public */,
      80,    0,  755,    2, 0x0a /* Public */,
      81,    0,  756,    2, 0x0a /* Public */,
      82,    0,  757,    2, 0x0a /* Public */,
      83,    1,  758,    2, 0x0a /* Public */,
      83,    0,  761,    2, 0x2a /* Public | MethodCloned */,
      85,    0,  762,    2, 0x0a /* Public */,
      86,    0,  763,    2, 0x0a /* Public */,
      87,    0,  764,    2, 0x0a /* Public */,
      88,    0,  765,    2, 0x0a /* Public */,
      89,    0,  766,    2, 0x0a /* Public */,
      90,    0,  767,    2, 0x0a /* Public */,
      91,    0,  768,    2, 0x0a /* Public */,
      92,    1,  769,    2, 0x0a /* Public */,
      94,    0,  772,    2, 0x0a /* Public */,
      95,    0,  773,    2, 0x0a /* Public */,
      96,    0,  774,    2, 0x0a /* Public */,
      97,    1,  775,    2, 0x0a /* Public */,
     100,    1,  778,    2, 0x0a /* Public */,
     101,    0,  781,    2, 0x0a /* Public */,
     102,    0,  782,    2, 0x0a /* Public */,
     103,    0,  783,    2, 0x0a /* Public */,
     104,    1,  784,    2, 0x0a /* Public */,
     104,    0,  787,    2, 0x2a /* Public | MethodCloned */,
     106,    0,  788,    2, 0x0a /* Public */,
     107,    0,  789,    2, 0x0a /* Public */,
     108,    0,  790,    2, 0x0a /* Public */,
     109,    0,  791,    2, 0x0a /* Public */,
     110,    0,  792,    2, 0x0a /* Public */,
     111,    0,  793,    2, 0x0a /* Public */,
     112,    0,  794,    2, 0x0a /* Public */,
     113,    0,  795,    2, 0x0a /* Public */,
     113,    1,  796,    2, 0x0a /* Public */,
     113,    3,  799,    2, 0x0a /* Public */,
     114,    2,  806,    2, 0x0a /* Public */,
     114,    1,  811,    2, 0x2a /* Public | MethodCloned */,
     116,    0,  814,    2, 0x0a /* Public */,
      43,    1,  815,    2, 0x0a /* Public */,
     118,    1,  818,    2, 0x0a /* Public */,
     119,    1,  821,    2, 0x0a /* Public */,
     121,    1,  824,    2, 0x0a /* Public */,
     123,    1,  827,    2, 0x0a /* Public */,
     124,    0,  830,    2, 0x0a /* Public */,
     125,    4,  831,    2, 0x0a /* Public */,
     125,    3,  840,    2, 0x2a /* Public | MethodCloned */,
     125,    2,  847,    2, 0x2a /* Public | MethodCloned */,
     130,    1,  852,    2, 0x0a /* Public */,
     132,    0,  855,    2, 0x0a /* Public */,
     133,    0,  856,    2, 0x0a /* Public */,
     134,    2,  857,    2, 0x08 /* Private */,
     137,    0,  862,    2, 0x08 /* Private */,
     138,    1,  863,    2, 0x08 /* Private */,
     106,    1,  866,    2, 0x08 /* Private */,
     106,    2,  869,    2, 0x08 /* Private */,
     107,    2,  874,    2, 0x08 /* Private */,
     141,    1,  879,    2, 0x08 /* Private */,
     143,    1,  882,    2, 0x08 /* Private */,
     144,    1,  885,    2, 0x08 /* Private */,
     145,    0,  888,    2, 0x08 /* Private */,
     146,    0,  889,    2, 0x08 /* Private */,
     147,    0,  890,    2, 0x08 /* Private */,
     148,    0,  891,    2, 0x08 /* Private */,
     149,    0,  892,    2, 0x08 /* Private */,
     150,    1,  893,    2, 0x08 /* Private */,
     152,    1,  896,    2, 0x08 /* Private */,
     153,    1,  899,    2, 0x08 /* Private */,
     154,    0,  902,    2, 0x08 /* Private */,
     155,    1,  903,    2, 0x08 /* Private */,
     157,    2,  906,    2, 0x08 /* Private */,
     160,    1,  911,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::QString,   23,   24,   25,   26,
    QMetaType::Void, 0x80000000 | 13,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   30,   31,
    QMetaType::Void, QMetaType::QPoint,   33,
    QMetaType::Void, QMetaType::QPoint,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 13,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59, QMetaType::Bool,   60,   61,
    QMetaType::Void, 0x80000000 | 59,   60,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 73,   74,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 73,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 98,   99,
    QMetaType::Void, 0x80000000 | 98,   99,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  105,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   25,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   25,  115,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  117,
    QMetaType::Void, QMetaType::QString,  117,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 126, QMetaType::Bool, QMetaType::Int,   93,  127,  128,  129,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 126, QMetaType::Bool,   93,  127,  128,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 126,   93,  127,
    QMetaType::Void, QMetaType::QString,  131,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 135,   99,  136,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 98,   99,
    QMetaType::Void, 0x80000000 | 98,    2,
    QMetaType::Void, 0x80000000 | 98, QMetaType::Bool,   99,  139,
    QMetaType::Void, 0x80000000 | 140, QMetaType::Bool,   99,  139,
    QMetaType::Void, QMetaType::QPoint,  142,
    QMetaType::Void, QMetaType::QPoint,  142,
    QMetaType::Void, 0x80000000 | 98,   99,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  151,
    QMetaType::Void, QMetaType::Bool,  151,
    QMetaType::Void, QMetaType::Bool,  151,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  156,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QUuid,  158,  159,
    QMetaType::Void, 0x80000000 | 161,  162,

       0        // eod
};

void DatabaseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatabaseWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->databaseFilePathChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->databaseModified(); break;
        case 2: _t->databaseNonDataChanged(); break;
        case 3: _t->databaseSaved(); break;
        case 4: _t->databaseAboutToUnlock(); break;
        case 5: _t->databaseUnlocked(); break;
        case 6: _t->databaseLockRequested(); break;
        case 7: _t->databaseLocked(); break;
        case 8: _t->databaseReplaced((*reinterpret_cast< const QSharedPointer<Database>(*)>(_a[1])),(*reinterpret_cast< const QSharedPointer<Database>(*)>(_a[2]))); break;
        case 9: _t->closeRequest(); break;
        case 10: _t->currentModeChanged((*reinterpret_cast< DatabaseWidget::Mode(*)>(_a[1]))); break;
        case 11: _t->groupChanged(); break;
        case 12: _t->entrySelectionChanged(); break;
        case 13: _t->requestOpenDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 14: _t->databaseMerged((*reinterpret_cast< QSharedPointer<Database>(*)>(_a[1]))); break;
        case 15: _t->updateSyncProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->groupContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 17: _t->entryContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 18: _t->listModeAboutToActivate(); break;
        case 19: _t->listModeActivated(); break;
        case 20: _t->searchModeAboutToActivate(); break;
        case 21: _t->searchModeActivated(); break;
        case 22: _t->splitterSizesChanged(); break;
        case 23: _t->entryViewStateChanged(); break;
        case 24: _t->clearSearch(); break;
        case 25: _t->requestGlobalAutoType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->requestSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->reloadBegin(); break;
        case 28: _t->reloadEnd(); break;
        case 29: { bool _r = _t->lock();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->saveBackup();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->replaceDatabase((*reinterpret_cast< QSharedPointer<Database>(*)>(_a[1]))); break;
        case 34: _t->createEntry(); break;
        case 35: _t->cloneEntry(); break;
        case 36: _t->expireSelectedEntries(); break;
        case 37: _t->deleteSelectedEntries(); break;
        case 38: _t->restoreSelectedEntries(); break;
        case 39: _t->deleteEntries((*reinterpret_cast< QList<Entry*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->deleteEntries((*reinterpret_cast< QList<Entry*>(*)>(_a[1]))); break;
        case 41: _t->focusOnEntries((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->focusOnEntries(); break;
        case 43: _t->focusOnGroups((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->focusOnGroups(); break;
        case 45: _t->moveEntryUp(); break;
        case 46: _t->moveEntryDown(); break;
        case 47: _t->copyTitle(); break;
        case 48: _t->copyUsername(); break;
        case 49: _t->copyPassword(); break;
        case 50: _t->copyURL(); break;
        case 51: _t->copyNotes(); break;
        case 52: _t->copyAttribute((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 53: { bool _r = _t->copyFocusedTextSelection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->filterByTag(); break;
        case 55: _t->setTag((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 56: _t->showTotp(); break;
        case 57: _t->showTotpKeyQrCode(); break;
        case 58: _t->copyTotp(); break;
        case 59: _t->copyPasswordTotp(); break;
        case 60: _t->setupTotp(); break;
        case 61: _t->performAutoType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 62: _t->performAutoType(); break;
        case 63: _t->performAutoTypeUsername(); break;
        case 64: _t->performAutoTypeUsernameEnter(); break;
        case 65: _t->performAutoTypePassword(); break;
        case 66: _t->performAutoTypePasswordEnter(); break;
        case 67: _t->performAutoTypeTOTP(); break;
        case 68: _t->performAutoTypeURL(); break;
        case 69: _t->performAutoTypeURLEnter(); break;
        case 70: _t->setClipboardTextAndMinimize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 71: _t->openUrl(); break;
        case 72: _t->downloadSelectedFavicons(); break;
        case 73: _t->downloadAllFavicons(); break;
        case 74: _t->downloadFaviconInBackground((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 75: _t->openUrlForEntry((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 76: _t->createGroup(); break;
        case 77: _t->cloneGroup(); break;
        case 78: _t->deleteGroup(); break;
        case 79: _t->switchToMainView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: _t->switchToMainView(); break;
        case 81: _t->switchToEntryEdit(); break;
        case 82: _t->switchToGroupEdit(); break;
        case 83: _t->sortGroupsAsc(); break;
        case 84: _t->sortGroupsDesc(); break;
        case 85: _t->switchToDatabaseSecurity(); break;
        case 86: _t->switchToDatabaseReports(); break;
        case 87: _t->switchToDatabaseSettings(); break;
        case 88: _t->switchToOpenDatabase(); break;
        case 89: _t->switchToOpenDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 90: _t->switchToOpenDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 91: _t->performUnlockDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 92: _t->performUnlockDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 93: _t->emptyRecycleBin(); break;
        case 94: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 95: _t->saveSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 96: _t->deleteSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 97: _t->setSearchCaseSensitive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 98: _t->setSearchLimitGroup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 99: _t->endSearch(); break;
        case 100: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 101: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 102: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MessageWidget::MessageType(*)>(_a[2]))); break;
        case 103: _t->showErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 104: _t->hideMessage(); break;
        case 105: _t->triggerAutosaveTimer(); break;
        case 106: _t->entryActivationSignalReceived((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< EntryModel::ModelColumn(*)>(_a[2]))); break;
        case 107: _t->switchBackToEntryEdit(); break;
        case 108: _t->switchToHistoryView((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 109: _t->switchToEntryEdit((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 110: _t->switchToEntryEdit((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 111: _t->switchToGroupEdit((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 112: _t->emitGroupContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 113: _t->emitEntryContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 114: _t->onEntryChanged((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 115: _t->onGroupChanged(); break;
        case 116: _t->onDatabaseModified(); break;
        case 117: _t->onDatabaseNonDataChanged(); break;
        case 118: _t->onAutosaveDelayTimeout(); break;
        case 119: _t->connectDatabaseSignals(); break;
        case 120: _t->loadDatabase((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 121: _t->unlockDatabase((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 122: _t->mergeDatabase((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 123: _t->emitCurrentModeChanged(); break;
        case 124: _t->reloadDatabaseFile((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 125: _t->restoreGroupEntryFocus((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2]))); break;
        case 126: _t->onConfigChanged((*reinterpret_cast< Config::ConfigKey(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<Database> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<Database> >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<Database> >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Entry*> >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Entry*> >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 106:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 108:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 109:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 110:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        case 111:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Group* >(); break;
            }
            break;
        case 114:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Entry* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DatabaseWidget::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseFilePathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseModified)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseNonDataChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseSaved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseAboutToUnlock)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseUnlocked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseLockRequested)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseLocked)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)(const QSharedPointer<Database> & , const QSharedPointer<Database> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseReplaced)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::closeRequest)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)(DatabaseWidget::Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::currentModeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::groupChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::entrySelectionChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)(const QString & , bool , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::requestOpenDatabase)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)(QSharedPointer<Database> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::databaseMerged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::updateSyncProgress)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::groupContextMenuRequested)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::entryContextMenuRequested)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::listModeAboutToActivate)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::listModeActivated)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::searchModeAboutToActivate)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::searchModeActivated)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::splitterSizesChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::entryViewStateChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::clearSearch)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::requestGlobalAutoType)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::requestSearch)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::reloadBegin)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (DatabaseWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseWidget::reloadEnd)) {
                *result = 28;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DatabaseWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QStackedWidget::staticMetaObject>(),
    qt_meta_stringdata_DatabaseWidget.data,
    qt_meta_data_DatabaseWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatabaseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseWidget.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int DatabaseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 127)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 127;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 127)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 127;
    }
    return _id;
}

// SIGNAL 0
void DatabaseWidget::databaseFilePathChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DatabaseWidget::databaseModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DatabaseWidget::databaseNonDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DatabaseWidget::databaseSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DatabaseWidget::databaseAboutToUnlock()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DatabaseWidget::databaseUnlocked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DatabaseWidget::databaseLockRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DatabaseWidget::databaseLocked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void DatabaseWidget::databaseReplaced(const QSharedPointer<Database> & _t1, const QSharedPointer<Database> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DatabaseWidget::closeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void DatabaseWidget::currentModeChanged(DatabaseWidget::Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DatabaseWidget::groupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void DatabaseWidget::entrySelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void DatabaseWidget::requestOpenDatabase(const QString & _t1, bool _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DatabaseWidget::databaseMerged(QSharedPointer<Database> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DatabaseWidget::updateSyncProgress(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DatabaseWidget::groupContextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DatabaseWidget::entryContextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DatabaseWidget::listModeAboutToActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void DatabaseWidget::listModeActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void DatabaseWidget::searchModeAboutToActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void DatabaseWidget::searchModeActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void DatabaseWidget::splitterSizesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void DatabaseWidget::entryViewStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void DatabaseWidget::clearSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void DatabaseWidget::requestGlobalAutoType(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void DatabaseWidget::requestSearch(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void DatabaseWidget::reloadBegin()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void DatabaseWidget::reloadEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
