/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/ApplicationSettingsWidget.h"
#include "gui/DatabaseTabWidget.h"
#include "gui/MessageWidget.h"
#include "gui/PasswordGeneratorWidget.h"
#include "gui/WelcomeWidget.h"
#include "gui/widgets/KPToolBar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionCheckForUpdates;
    QAction *actionDatabaseOpen;
    QAction *actionDatabaseSave;
    QAction *actionDatabaseClose;
    QAction *actionDatabaseNew;
    QAction *actionDatabaseMerge;
    QAction *actionEntryNew;
    QAction *actionEntryEdit;
    QAction *actionEntryExpire;
    QAction *actionEntryDelete;
    QAction *actionGroupNew;
    QAction *actionGroupEdit;
    QAction *actionGroupDelete;
    QAction *actionGroupDownloadFavicons;
    QAction *actionGroupSortAsc;
    QAction *actionGroupSortDesc;
    QAction *actionDatabaseSaveAs;
    QAction *actionDatabaseSecurity;
    QAction *actionReports;
    QAction *actionDatabaseSettings;
    QAction *actionPasskeys;
    QAction *actionImportPasskey;
    QAction *actionEntryClone;
    QAction *actionEntryMoveUp;
    QAction *actionEntryMoveDown;
    QAction *actionEntryCopyUsername;
    QAction *actionEntryCopyPassword;
    QAction *actionSettings;
    QAction *actionPasswordGenerator;
    QAction *actionEntryAutoType;
    QAction *actionEntryImportPasskey;
    QAction *actionEntryRemovePasskey;
    QAction *actionEntryAutoTypeUsername;
    QAction *actionEntryAutoTypeUsernameEnter;
    QAction *actionEntryAutoTypePassword;
    QAction *actionEntryAutoTypePasswordEnter;
    QAction *actionEntryAutoTypeTOTP;
    QAction *actionEntryAutoTypeURL;
    QAction *actionEntryAutoTypeURLEnter;
    QAction *actionEntryDownloadIcon;
    QAction *actionEntryOpenUrl;
    QAction *actionLockDatabase;
    QAction *actionLockAllDatabases;
    QAction *actionEntryCopyTitle;
    QAction *actionEntryCopyURL;
    QAction *actionEntryCopyNotes;
    QAction *actionExportCsv;
    QAction *actionExportHtml;
    QAction *actionImportKeePass1;
    QAction *actionImportOpVault;
    QAction *actionImportCsv;
    QAction *actionEntryTotp;
    QAction *actionEntryTotpQRCode;
    QAction *actionEntrySetupTotp;
    QAction *actionEntryCopyTotp;
    QAction *actionEntryCopyPasswordTotp;
    QAction *actionGroupEmptyRecycleBin;
    QAction *actionDonate;
    QAction *actionBugReport;
    QAction *actionGettingStarted;
    QAction *actionOnlineHelp;
    QAction *actionUserGuide;
    QAction *actionKeyboardShortcuts;
    QAction *actionDatabaseSaveBackup;
    QAction *actionEntryAddToAgent;
    QAction *actionEntryRemoveFromAgent;
    QAction *actionCompactMode;
    QAction *actionThemeAuto;
    QAction *actionThemeLight;
    QAction *actionThemeDark;
    QAction *actionThemeClassic;
    QAction *actionShowMenubar;
    QAction *actionShowToolbar;
    QAction *actionShowEntriesOfSubgroups;
    QAction *actionShowPreviewPanel;
    QAction *actionAlwaysOnTop;
    QAction *actionHideUsernames;
    QAction *actionHidePasswords;
    QAction *actionEntryAutoTypeSequence;
    QAction *actionGroupClone;
    QAction *actionEntryRestore;
    QAction *actionLockDatabaseToolbar;
    QAction *actionExportXML;
    QAction *actionAllowScreenCapture;
    QAction *actionImport1PUX;
    QAction *actionImport;
    QAction *actionShowGroupPanel;
    QAction *actionClearSSHAgent;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    MessageWidget *globalMessageWidget;
    QFrame *toolbarSeparator;
    QStackedWidget *stackedWidget;
    QWidget *pageDatabase;
    QVBoxLayout *verticalLayout_2;
    DatabaseTabWidget *tabWidget;
    QWidget *pageSettings;
    QVBoxLayout *verticalLayout_3;
    ApplicationSettingsWidget *settingsWidget;
    QWidget *pageWelcome;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    WelcomeWidget *welcomeWidget;
    QSpacerItem *horizontalSpacer_2;
    QWidget *pagePasswordGenerator;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    PasswordGeneratorWidget *passwordGeneratorWidget;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuRecentDatabases;
    QMenu *menuExport;
    QMenu *menuHelp;
    QMenu *menuEntries;
    QMenu *menuEntryCopyAttribute;
    QMenu *menuEntryTotp;
    QMenu *menuTags;
    QMenu *menuGroups;
    QMenu *menuTools;
    QMenu *menuView;
    QMenu *menuTheme;
    KPToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setWindowTitle(QString::fromUtf8("KeePassXC"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionQuit->setMenuRole(QAction::QuitRole);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setMenuRole(QAction::AboutRole);
        actionCheckForUpdates = new QAction(MainWindow);
        actionCheckForUpdates->setObjectName(QString::fromUtf8("actionCheckForUpdates"));
        actionCheckForUpdates->setMenuRole(QAction::ApplicationSpecificRole);
        actionDatabaseOpen = new QAction(MainWindow);
        actionDatabaseOpen->setObjectName(QString::fromUtf8("actionDatabaseOpen"));
        actionDatabaseSave = new QAction(MainWindow);
        actionDatabaseSave->setObjectName(QString::fromUtf8("actionDatabaseSave"));
        actionDatabaseClose = new QAction(MainWindow);
        actionDatabaseClose->setObjectName(QString::fromUtf8("actionDatabaseClose"));
        actionDatabaseNew = new QAction(MainWindow);
        actionDatabaseNew->setObjectName(QString::fromUtf8("actionDatabaseNew"));
        actionDatabaseMerge = new QAction(MainWindow);
        actionDatabaseMerge->setObjectName(QString::fromUtf8("actionDatabaseMerge"));
        actionEntryNew = new QAction(MainWindow);
        actionEntryNew->setObjectName(QString::fromUtf8("actionEntryNew"));
        actionEntryEdit = new QAction(MainWindow);
        actionEntryEdit->setObjectName(QString::fromUtf8("actionEntryEdit"));
        actionEntryExpire = new QAction(MainWindow);
        actionEntryExpire->setObjectName(QString::fromUtf8("actionEntryExpire"));
        actionEntryExpire->setEnabled(false);
        actionEntryDelete = new QAction(MainWindow);
        actionEntryDelete->setObjectName(QString::fromUtf8("actionEntryDelete"));
#if QT_CONFIG(shortcut)
        actionEntryDelete->setShortcut(QString::fromUtf8("Del"));
#endif // QT_CONFIG(shortcut)
        actionGroupNew = new QAction(MainWindow);
        actionGroupNew->setObjectName(QString::fromUtf8("actionGroupNew"));
        actionGroupEdit = new QAction(MainWindow);
        actionGroupEdit->setObjectName(QString::fromUtf8("actionGroupEdit"));
        actionGroupDelete = new QAction(MainWindow);
        actionGroupDelete->setObjectName(QString::fromUtf8("actionGroupDelete"));
        actionGroupDownloadFavicons = new QAction(MainWindow);
        actionGroupDownloadFavicons->setObjectName(QString::fromUtf8("actionGroupDownloadFavicons"));
        actionGroupSortAsc = new QAction(MainWindow);
        actionGroupSortAsc->setObjectName(QString::fromUtf8("actionGroupSortAsc"));
        actionGroupSortDesc = new QAction(MainWindow);
        actionGroupSortDesc->setObjectName(QString::fromUtf8("actionGroupSortDesc"));
        actionDatabaseSaveAs = new QAction(MainWindow);
        actionDatabaseSaveAs->setObjectName(QString::fromUtf8("actionDatabaseSaveAs"));
        actionDatabaseSecurity = new QAction(MainWindow);
        actionDatabaseSecurity->setObjectName(QString::fromUtf8("actionDatabaseSecurity"));
        actionReports = new QAction(MainWindow);
        actionReports->setObjectName(QString::fromUtf8("actionReports"));
        actionReports->setCheckable(true);
        actionReports->setMenuRole(QAction::NoRole);
        actionDatabaseSettings = new QAction(MainWindow);
        actionDatabaseSettings->setObjectName(QString::fromUtf8("actionDatabaseSettings"));
        actionDatabaseSettings->setCheckable(true);
        actionDatabaseSettings->setMenuRole(QAction::NoRole);
        actionPasskeys = new QAction(MainWindow);
        actionPasskeys->setObjectName(QString::fromUtf8("actionPasskeys"));
        actionPasskeys->setMenuRole(QAction::NoRole);
        actionImportPasskey = new QAction(MainWindow);
        actionImportPasskey->setObjectName(QString::fromUtf8("actionImportPasskey"));
        actionImportPasskey->setMenuRole(QAction::NoRole);
        actionEntryClone = new QAction(MainWindow);
        actionEntryClone->setObjectName(QString::fromUtf8("actionEntryClone"));
        actionEntryMoveUp = new QAction(MainWindow);
        actionEntryMoveUp->setObjectName(QString::fromUtf8("actionEntryMoveUp"));
        actionEntryMoveDown = new QAction(MainWindow);
        actionEntryMoveDown->setObjectName(QString::fromUtf8("actionEntryMoveDown"));
        actionEntryCopyUsername = new QAction(MainWindow);
        actionEntryCopyUsername->setObjectName(QString::fromUtf8("actionEntryCopyUsername"));
        actionEntryCopyPassword = new QAction(MainWindow);
        actionEntryCopyPassword->setObjectName(QString::fromUtf8("actionEntryCopyPassword"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionSettings->setCheckable(true);
        actionSettings->setMenuRole(QAction::PreferencesRole);
        actionPasswordGenerator = new QAction(MainWindow);
        actionPasswordGenerator->setObjectName(QString::fromUtf8("actionPasswordGenerator"));
        actionPasswordGenerator->setCheckable(true);
        actionEntryAutoType = new QAction(MainWindow);
        actionEntryAutoType->setObjectName(QString::fromUtf8("actionEntryAutoType"));
        actionEntryImportPasskey = new QAction(MainWindow);
        actionEntryImportPasskey->setObjectName(QString::fromUtf8("actionEntryImportPasskey"));
        actionEntryRemovePasskey = new QAction(MainWindow);
        actionEntryRemovePasskey->setObjectName(QString::fromUtf8("actionEntryRemovePasskey"));
        actionEntryAutoTypeUsername = new QAction(MainWindow);
        actionEntryAutoTypeUsername->setObjectName(QString::fromUtf8("actionEntryAutoTypeUsername"));
        actionEntryAutoTypeUsername->setEnabled(false);
        actionEntryAutoTypeUsername->setText(QString::fromUtf8("{USERNAME}"));
        actionEntryAutoTypeUsername->setIconText(QString::fromUtf8("{USERNAME}"));
#if QT_CONFIG(tooltip)
        actionEntryAutoTypeUsername->setToolTip(QString::fromUtf8("{USERNAME}"));
#endif // QT_CONFIG(tooltip)
        actionEntryAutoTypeUsernameEnter = new QAction(MainWindow);
        actionEntryAutoTypeUsernameEnter->setObjectName(QString::fromUtf8("actionEntryAutoTypeUsernameEnter"));
        actionEntryAutoTypeUsernameEnter->setEnabled(false);
        actionEntryAutoTypeUsernameEnter->setText(QString::fromUtf8("{USERNAME}{ENTER}"));
        actionEntryAutoTypeUsernameEnter->setIconText(QString::fromUtf8("{USERNAME}{ENTER}"));
#if QT_CONFIG(tooltip)
        actionEntryAutoTypeUsernameEnter->setToolTip(QString::fromUtf8("{USERNAME}{ENTER}"));
#endif // QT_CONFIG(tooltip)
        actionEntryAutoTypePassword = new QAction(MainWindow);
        actionEntryAutoTypePassword->setObjectName(QString::fromUtf8("actionEntryAutoTypePassword"));
        actionEntryAutoTypePassword->setEnabled(false);
        actionEntryAutoTypePassword->setText(QString::fromUtf8("{PASSWORD}"));
        actionEntryAutoTypePassword->setIconText(QString::fromUtf8("{PASSWORD}"));
#if QT_CONFIG(tooltip)
        actionEntryAutoTypePassword->setToolTip(QString::fromUtf8("{PASSWORD}"));
#endif // QT_CONFIG(tooltip)
        actionEntryAutoTypePasswordEnter = new QAction(MainWindow);
        actionEntryAutoTypePasswordEnter->setObjectName(QString::fromUtf8("actionEntryAutoTypePasswordEnter"));
        actionEntryAutoTypePasswordEnter->setEnabled(false);
        actionEntryAutoTypePasswordEnter->setText(QString::fromUtf8("{PASSWORD}{ENTER}"));
        actionEntryAutoTypePasswordEnter->setIconText(QString::fromUtf8("{PASSWORD}{ENTER}"));
#if QT_CONFIG(tooltip)
        actionEntryAutoTypePasswordEnter->setToolTip(QString::fromUtf8("{PASSWORD}{ENTER}"));
#endif // QT_CONFIG(tooltip)
        actionEntryAutoTypeTOTP = new QAction(MainWindow);
        actionEntryAutoTypeTOTP->setObjectName(QString::fromUtf8("actionEntryAutoTypeTOTP"));
        actionEntryAutoTypeTOTP->setEnabled(false);
        actionEntryAutoTypeTOTP->setText(QString::fromUtf8("{TOTP}"));
        actionEntryAutoTypeTOTP->setIconText(QString::fromUtf8("{TOTP}"));
#if QT_CONFIG(tooltip)
        actionEntryAutoTypeTOTP->setToolTip(QString::fromUtf8("{TOTP}"));
#endif // QT_CONFIG(tooltip)
        actionEntryAutoTypeURL = new QAction(MainWindow);
        actionEntryAutoTypeURL->setObjectName(QString::fromUtf8("actionEntryAutoTypeURL"));
        actionEntryAutoTypeURL->setEnabled(false);
        actionEntryAutoTypeURL->setText(QString::fromUtf8("{URL}"));
        actionEntryAutoTypeURL->setIconText(QString::fromUtf8("{URL}"));
#if QT_CONFIG(tooltip)
        actionEntryAutoTypeURL->setToolTip(QString::fromUtf8("{URL}"));
#endif // QT_CONFIG(tooltip)
        actionEntryAutoTypeURLEnter = new QAction(MainWindow);
        actionEntryAutoTypeURLEnter->setObjectName(QString::fromUtf8("actionEntryAutoTypeURLEnter"));
        actionEntryAutoTypeURLEnter->setEnabled(false);
        actionEntryAutoTypeURLEnter->setText(QString::fromUtf8("{URL}{ENTER}"));
        actionEntryAutoTypeURLEnter->setIconText(QString::fromUtf8("{URL}{ENTER}"));
#if QT_CONFIG(tooltip)
        actionEntryAutoTypeURLEnter->setToolTip(QString::fromUtf8("{URL}{ENTER}"));
#endif // QT_CONFIG(tooltip)
        actionEntryDownloadIcon = new QAction(MainWindow);
        actionEntryDownloadIcon->setObjectName(QString::fromUtf8("actionEntryDownloadIcon"));
        actionEntryOpenUrl = new QAction(MainWindow);
        actionEntryOpenUrl->setObjectName(QString::fromUtf8("actionEntryOpenUrl"));
        actionLockDatabase = new QAction(MainWindow);
        actionLockDatabase->setObjectName(QString::fromUtf8("actionLockDatabase"));
        actionLockAllDatabases = new QAction(MainWindow);
        actionLockAllDatabases->setObjectName(QString::fromUtf8("actionLockAllDatabases"));
        actionEntryCopyTitle = new QAction(MainWindow);
        actionEntryCopyTitle->setObjectName(QString::fromUtf8("actionEntryCopyTitle"));
        actionEntryCopyURL = new QAction(MainWindow);
        actionEntryCopyURL->setObjectName(QString::fromUtf8("actionEntryCopyURL"));
        actionEntryCopyNotes = new QAction(MainWindow);
        actionEntryCopyNotes->setObjectName(QString::fromUtf8("actionEntryCopyNotes"));
        actionExportCsv = new QAction(MainWindow);
        actionExportCsv->setObjectName(QString::fromUtf8("actionExportCsv"));
        actionExportHtml = new QAction(MainWindow);
        actionExportHtml->setObjectName(QString::fromUtf8("actionExportHtml"));
        actionImportKeePass1 = new QAction(MainWindow);
        actionImportKeePass1->setObjectName(QString::fromUtf8("actionImportKeePass1"));
        actionImportOpVault = new QAction(MainWindow);
        actionImportOpVault->setObjectName(QString::fromUtf8("actionImportOpVault"));
        actionImportCsv = new QAction(MainWindow);
        actionImportCsv->setObjectName(QString::fromUtf8("actionImportCsv"));
        actionEntryTotp = new QAction(MainWindow);
        actionEntryTotp->setObjectName(QString::fromUtf8("actionEntryTotp"));
        actionEntryTotpQRCode = new QAction(MainWindow);
        actionEntryTotpQRCode->setObjectName(QString::fromUtf8("actionEntryTotpQRCode"));
        actionEntrySetupTotp = new QAction(MainWindow);
        actionEntrySetupTotp->setObjectName(QString::fromUtf8("actionEntrySetupTotp"));
        actionEntryCopyTotp = new QAction(MainWindow);
        actionEntryCopyTotp->setObjectName(QString::fromUtf8("actionEntryCopyTotp"));
        actionEntryCopyPasswordTotp = new QAction(MainWindow);
        actionEntryCopyPasswordTotp->setObjectName(QString::fromUtf8("actionEntryCopyPasswordTotp"));
        actionGroupEmptyRecycleBin = new QAction(MainWindow);
        actionGroupEmptyRecycleBin->setObjectName(QString::fromUtf8("actionGroupEmptyRecycleBin"));
        actionDonate = new QAction(MainWindow);
        actionDonate->setObjectName(QString::fromUtf8("actionDonate"));
        actionBugReport = new QAction(MainWindow);
        actionBugReport->setObjectName(QString::fromUtf8("actionBugReport"));
        actionGettingStarted = new QAction(MainWindow);
        actionGettingStarted->setObjectName(QString::fromUtf8("actionGettingStarted"));
        actionOnlineHelp = new QAction(MainWindow);
        actionOnlineHelp->setObjectName(QString::fromUtf8("actionOnlineHelp"));
        actionUserGuide = new QAction(MainWindow);
        actionUserGuide->setObjectName(QString::fromUtf8("actionUserGuide"));
        actionKeyboardShortcuts = new QAction(MainWindow);
        actionKeyboardShortcuts->setObjectName(QString::fromUtf8("actionKeyboardShortcuts"));
#if QT_CONFIG(shortcut)
        actionKeyboardShortcuts->setShortcut(QString::fromUtf8("Ctrl+/"));
#endif // QT_CONFIG(shortcut)
        actionDatabaseSaveBackup = new QAction(MainWindow);
        actionDatabaseSaveBackup->setObjectName(QString::fromUtf8("actionDatabaseSaveBackup"));
        actionEntryAddToAgent = new QAction(MainWindow);
        actionEntryAddToAgent->setObjectName(QString::fromUtf8("actionEntryAddToAgent"));
        actionEntryRemoveFromAgent = new QAction(MainWindow);
        actionEntryRemoveFromAgent->setObjectName(QString::fromUtf8("actionEntryRemoveFromAgent"));
        actionCompactMode = new QAction(MainWindow);
        actionCompactMode->setObjectName(QString::fromUtf8("actionCompactMode"));
        actionCompactMode->setCheckable(true);
        actionThemeAuto = new QAction(MainWindow);
        actionThemeAuto->setObjectName(QString::fromUtf8("actionThemeAuto"));
        actionThemeAuto->setCheckable(true);
        actionThemeAuto->setChecked(true);
        actionThemeLight = new QAction(MainWindow);
        actionThemeLight->setObjectName(QString::fromUtf8("actionThemeLight"));
        actionThemeLight->setCheckable(true);
        actionThemeDark = new QAction(MainWindow);
        actionThemeDark->setObjectName(QString::fromUtf8("actionThemeDark"));
        actionThemeDark->setCheckable(true);
        actionThemeClassic = new QAction(MainWindow);
        actionThemeClassic->setObjectName(QString::fromUtf8("actionThemeClassic"));
        actionThemeClassic->setCheckable(true);
        actionShowMenubar = new QAction(MainWindow);
        actionShowMenubar->setObjectName(QString::fromUtf8("actionShowMenubar"));
        actionShowMenubar->setCheckable(true);
        actionShowMenubar->setChecked(true);
        actionShowToolbar = new QAction(MainWindow);
        actionShowToolbar->setObjectName(QString::fromUtf8("actionShowToolbar"));
        actionShowToolbar->setCheckable(true);
        actionShowToolbar->setChecked(true);
        actionShowEntriesOfSubgroups = new QAction(MainWindow);
        actionShowEntriesOfSubgroups->setObjectName(QString::fromUtf8("actionShowEntriesOfSubgroups"));
        actionShowEntriesOfSubgroups->setCheckable(true);
        actionShowPreviewPanel = new QAction(MainWindow);
        actionShowPreviewPanel->setObjectName(QString::fromUtf8("actionShowPreviewPanel"));
        actionShowPreviewPanel->setCheckable(true);
        actionShowPreviewPanel->setChecked(true);
        actionAlwaysOnTop = new QAction(MainWindow);
        actionAlwaysOnTop->setObjectName(QString::fromUtf8("actionAlwaysOnTop"));
        actionAlwaysOnTop->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionAlwaysOnTop->setShortcut(QString::fromUtf8("Ctrl+Shift+A"));
#endif // QT_CONFIG(shortcut)
        actionHideUsernames = new QAction(MainWindow);
        actionHideUsernames->setObjectName(QString::fromUtf8("actionHideUsernames"));
        actionHideUsernames->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionHideUsernames->setShortcut(QString::fromUtf8("Ctrl+Shift+B"));
#endif // QT_CONFIG(shortcut)
        actionHidePasswords = new QAction(MainWindow);
        actionHidePasswords->setObjectName(QString::fromUtf8("actionHidePasswords"));
        actionHidePasswords->setCheckable(true);
        actionHidePasswords->setChecked(true);
#if QT_CONFIG(shortcut)
        actionHidePasswords->setShortcut(QString::fromUtf8("Ctrl+Shift+C"));
#endif // QT_CONFIG(shortcut)
        actionEntryAutoTypeSequence = new QAction(MainWindow);
        actionEntryAutoTypeSequence->setObjectName(QString::fromUtf8("actionEntryAutoTypeSequence"));
        actionEntryAutoTypeSequence->setText(QString::fromUtf8("{USERNAME}{TAB}{PASSWORD}{ENTER}"));
        actionEntryAutoTypeSequence->setIconText(QString::fromUtf8("{USERNAME}{TAB}{PASSWORD}{ENTER}"));
#if QT_CONFIG(tooltip)
        actionEntryAutoTypeSequence->setToolTip(QString::fromUtf8("{USERNAME}{TAB}{PASSWORD}{ENTER}"));
#endif // QT_CONFIG(tooltip)
        actionGroupClone = new QAction(MainWindow);
        actionGroupClone->setObjectName(QString::fromUtf8("actionGroupClone"));
        actionEntryRestore = new QAction(MainWindow);
        actionEntryRestore->setObjectName(QString::fromUtf8("actionEntryRestore"));
        actionEntryRestore->setText(QString::fromUtf8("Restore Entry(s)"));
#if QT_CONFIG(tooltip)
        actionEntryRestore->setToolTip(QString::fromUtf8("Restore Entry(s)"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEntryRestore->setShortcut(QString::fromUtf8("Ctrl+R"));
#endif // QT_CONFIG(shortcut)
        actionLockDatabaseToolbar = new QAction(MainWindow);
        actionLockDatabaseToolbar->setObjectName(QString::fromUtf8("actionLockDatabaseToolbar"));
        actionExportXML = new QAction(MainWindow);
        actionExportXML->setObjectName(QString::fromUtf8("actionExportXML"));
        actionAllowScreenCapture = new QAction(MainWindow);
        actionAllowScreenCapture->setObjectName(QString::fromUtf8("actionAllowScreenCapture"));
        actionAllowScreenCapture->setCheckable(true);
        actionImport1PUX = new QAction(MainWindow);
        actionImport1PUX->setObjectName(QString::fromUtf8("actionImport1PUX"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionShowGroupPanel = new QAction(MainWindow);
        actionShowGroupPanel->setObjectName(QString::fromUtf8("actionShowGroupPanel"));
        actionShowGroupPanel->setCheckable(true);
        actionShowGroupPanel->setChecked(true);
        actionClearSSHAgent = new QAction(MainWindow);
        actionClearSSHAgent->setObjectName(QString::fromUtf8("actionClearSSHAgent"));
        actionClearSSHAgent->setMenuRole(QAction::TextHeuristicRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        globalMessageWidget = new MessageWidget(centralwidget);
        globalMessageWidget->setObjectName(QString::fromUtf8("globalMessageWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(globalMessageWidget->sizePolicy().hasHeightForWidth());
        globalMessageWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(globalMessageWidget);

        toolbarSeparator = new QFrame(centralwidget);
        toolbarSeparator->setObjectName(QString::fromUtf8("toolbarSeparator"));
        toolbarSeparator->setFrameShadow(QFrame::Plain);
        toolbarSeparator->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(toolbarSeparator);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageDatabase = new QWidget();
        pageDatabase->setObjectName(QString::fromUtf8("pageDatabase"));
        verticalLayout_2 = new QVBoxLayout(pageDatabase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new DatabaseTabWidget(pageDatabase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        verticalLayout_2->addWidget(tabWidget);

        stackedWidget->addWidget(pageDatabase);
        pageSettings = new QWidget();
        pageSettings->setObjectName(QString::fromUtf8("pageSettings"));
        verticalLayout_3 = new QVBoxLayout(pageSettings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        settingsWidget = new ApplicationSettingsWidget(pageSettings);
        settingsWidget->setObjectName(QString::fromUtf8("settingsWidget"));

        verticalLayout_3->addWidget(settingsWidget);

        stackedWidget->addWidget(pageSettings);
        pageWelcome = new QWidget();
        pageWelcome->setObjectName(QString::fromUtf8("pageWelcome"));
        verticalLayout_5 = new QVBoxLayout(pageWelcome);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        welcomeWidget = new WelcomeWidget(pageWelcome);
        welcomeWidget->setObjectName(QString::fromUtf8("welcomeWidget"));

        horizontalLayout->addWidget(welcomeWidget);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout);

        stackedWidget->addWidget(pageWelcome);
        pagePasswordGenerator = new QWidget();
        pagePasswordGenerator->setObjectName(QString::fromUtf8("pagePasswordGenerator"));
        verticalLayout_6 = new QVBoxLayout(pagePasswordGenerator);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(60, 30, 60, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        passwordGeneratorWidget = new PasswordGeneratorWidget(pagePasswordGenerator);
        passwordGeneratorWidget->setObjectName(QString::fromUtf8("passwordGeneratorWidget"));

        verticalLayout_6->addWidget(passwordGeneratorWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        stackedWidget->addWidget(pagePasswordGenerator);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menubar->setContextMenuPolicy(Qt::PreventContextMenu);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuRecentDatabases = new QMenu(menuFile);
        menuRecentDatabases->setObjectName(QString::fromUtf8("menuRecentDatabases"));
        menuExport = new QMenu(menuFile);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEntries = new QMenu(menubar);
        menuEntries->setObjectName(QString::fromUtf8("menuEntries"));
        menuEntries->setSeparatorsCollapsible(true);
        menuEntryCopyAttribute = new QMenu(menuEntries);
        menuEntryCopyAttribute->setObjectName(QString::fromUtf8("menuEntryCopyAttribute"));
        menuEntryTotp = new QMenu(menuEntries);
        menuEntryTotp->setObjectName(QString::fromUtf8("menuEntryTotp"));
        menuTags = new QMenu(menuEntries);
        menuTags->setObjectName(QString::fromUtf8("menuTags"));
        menuTags->setTearOffEnabled(true);
        menuGroups = new QMenu(menubar);
        menuGroups->setObjectName(QString::fromUtf8("menuGroups"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTheme = new QMenu(menuView);
        menuTheme->setObjectName(QString::fromUtf8("menuTheme"));
        MainWindow->setMenuBar(menubar);
        toolBar = new KPToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(26, 26));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEntries->menuAction());
        menubar->addAction(menuGroups->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionDatabaseNew);
        menuFile->addAction(actionDatabaseOpen);
        menuFile->addAction(menuRecentDatabases->menuAction());
        menuFile->addAction(actionDatabaseSave);
        menuFile->addAction(actionDatabaseSaveAs);
        menuFile->addAction(actionDatabaseSaveBackup);
        menuFile->addAction(actionDatabaseClose);
        menuFile->addSeparator();
        menuFile->addAction(actionLockDatabase);
        menuFile->addAction(actionLockAllDatabases);
        menuFile->addSeparator();
        menuFile->addAction(actionDatabaseSettings);
        menuFile->addAction(actionDatabaseSecurity);
        menuFile->addAction(actionReports);
        menuFile->addSeparator();
        menuFile->addAction(actionPasskeys);
        menuFile->addAction(actionImportPasskey);
        menuFile->addSeparator();
        menuFile->addAction(actionDatabaseMerge);
        menuFile->addAction(actionImport);
        menuFile->addAction(menuExport->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuExport->addAction(actionExportCsv);
        menuExport->addAction(actionExportHtml);
        menuExport->addAction(actionExportXML);
        menuHelp->addSeparator();
        menuHelp->addAction(actionGettingStarted);
        menuHelp->addAction(actionUserGuide);
        menuHelp->addAction(actionKeyboardShortcuts);
        menuHelp->addAction(actionOnlineHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheckForUpdates);
        menuHelp->addAction(actionDonate);
        menuHelp->addAction(actionBugReport);
        menuHelp->addAction(actionAbout);
        menuEntries->addSeparator();
        menuEntries->addAction(actionEntryNew);
        menuEntries->addAction(actionEntryEdit);
        menuEntries->addAction(actionEntryExpire);
        menuEntries->addAction(actionEntryClone);
        menuEntries->addAction(actionEntryDelete);
        menuEntries->addSeparator();
        menuEntries->addAction(actionEntryMoveUp);
        menuEntries->addAction(actionEntryMoveDown);
        menuEntries->addSeparator();
        menuEntries->addAction(actionEntryCopyUsername);
        menuEntries->addAction(actionEntryCopyPassword);
        menuEntries->addAction(actionEntryCopyURL);
        menuEntries->addAction(menuEntryCopyAttribute->menuAction());
        menuEntries->addAction(menuEntryTotp->menuAction());
        menuEntries->addAction(menuTags->menuAction());
        menuEntries->addSeparator();
        menuEntries->addAction(actionEntryAutoType);
        menuEntries->addSeparator();
        menuEntries->addAction(actionEntryImportPasskey);
        menuEntries->addAction(actionEntryRemovePasskey);
        menuEntries->addSeparator();
        menuEntries->addAction(actionEntryOpenUrl);
        menuEntries->addAction(actionEntryDownloadIcon);
        menuEntries->addSeparator();
        menuEntries->addAction(actionEntryAddToAgent);
        menuEntries->addAction(actionEntryRemoveFromAgent);
        menuEntries->addSeparator();
        menuEntries->addAction(actionEntryRestore);
        menuEntryCopyAttribute->addAction(actionEntryCopyTitle);
        menuEntryCopyAttribute->addAction(actionEntryCopyNotes);
        menuEntryCopyAttribute->addSeparator();
        menuEntryTotp->addAction(actionEntryCopyTotp);
        menuEntryTotp->addAction(actionEntryCopyPasswordTotp);
        menuEntryTotp->addAction(actionEntryTotp);
        menuEntryTotp->addAction(actionEntryTotpQRCode);
        menuEntryTotp->addAction(actionEntrySetupTotp);
        menuGroups->addAction(actionGroupEmptyRecycleBin);
        menuGroups->addSeparator();
        menuGroups->addAction(actionGroupNew);
        menuGroups->addAction(actionGroupEdit);
        menuGroups->addAction(actionGroupClone);
        menuGroups->addAction(actionGroupDelete);
        menuGroups->addSeparator();
        menuGroups->addAction(actionGroupSortAsc);
        menuGroups->addAction(actionGroupSortDesc);
        menuGroups->addSeparator();
        menuGroups->addAction(actionGroupDownloadFavicons);
        menuTools->addAction(actionPasswordGenerator);
        menuTools->addAction(actionClearSSHAgent);
        menuTools->addAction(actionSettings);
        menuView->addAction(menuTheme->menuAction());
        menuView->addAction(actionCompactMode);
        menuView->addAction(actionAlwaysOnTop);
        menuView->addAction(actionAllowScreenCapture);
        menuView->addSeparator();
        menuView->addAction(actionShowPreviewPanel);
        menuView->addAction(actionShowGroupPanel);
        menuView->addSeparator();
        menuView->addAction(actionShowMenubar);
        menuView->addAction(actionShowToolbar);
        menuView->addSeparator();
        menuView->addAction(actionShowEntriesOfSubgroups);
        menuView->addSeparator();
        menuView->addAction(actionHideUsernames);
        menuView->addAction(actionHidePasswords);
        menuTheme->addAction(actionThemeAuto);
        menuTheme->addAction(actionThemeLight);
        menuTheme->addAction(actionThemeDark);
        menuTheme->addAction(actionThemeClassic);
        toolBar->addAction(actionDatabaseOpen);
        toolBar->addAction(actionDatabaseSave);
        toolBar->addAction(actionLockDatabaseToolbar);
        toolBar->addSeparator();
        toolBar->addAction(actionEntryNew);
        toolBar->addAction(actionEntryEdit);
        toolBar->addAction(actionEntryDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionEntryCopyUsername);
        toolBar->addAction(actionEntryCopyPassword);
        toolBar->addAction(actionEntryCopyURL);
        toolBar->addAction(actionEntryAutoType);
        toolBar->addSeparator();
        toolBar->addAction(actionDatabaseSettings);
        toolBar->addAction(actionReports);
        toolBar->addSeparator();
        toolBar->addAction(actionPasswordGenerator);
        toolBar->addAction(actionSettings);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        actionCheckForUpdates->setText(QCoreApplication::translate("MainWindow", "&Check for Updates", nullptr));
        actionDatabaseOpen->setText(QCoreApplication::translate("MainWindow", "&Open Database\342\200\246", nullptr));
        actionDatabaseSave->setText(QCoreApplication::translate("MainWindow", "&Save Database", nullptr));
        actionDatabaseClose->setText(QCoreApplication::translate("MainWindow", "&Close Database", nullptr));
        actionDatabaseNew->setText(QCoreApplication::translate("MainWindow", "&New Database\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionDatabaseNew->setToolTip(QCoreApplication::translate("MainWindow", "Create a new database", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDatabaseMerge->setText(QCoreApplication::translate("MainWindow", "&Merge From Database\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionDatabaseMerge->setToolTip(QCoreApplication::translate("MainWindow", "Merge from another KDBX database", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryNew->setText(QCoreApplication::translate("MainWindow", "&New Entry\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryNew->setToolTip(QCoreApplication::translate("MainWindow", "New Entry", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryEdit->setText(QCoreApplication::translate("MainWindow", "&Edit Entry\342\200\246", nullptr));
        actionEntryEdit->setIconText(QCoreApplication::translate("MainWindow", "Edit Entry\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryEdit->setToolTip(QCoreApplication::translate("MainWindow", "View or edit entry", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryExpire->setText(QCoreApplication::translate("MainWindow", "E&xpire Entry", nullptr));
        actionEntryExpire->setIconText(QCoreApplication::translate("MainWindow", "Expire Entry", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryExpire->setToolTip(QCoreApplication::translate("MainWindow", "Expire Entry", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryDelete->setText(QCoreApplication::translate("MainWindow", "&Delete Entry", nullptr));
        actionEntryDelete->setIconText(QCoreApplication::translate("MainWindow", "Delete Entry", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryDelete->setToolTip(QCoreApplication::translate("MainWindow", "Delete Entry", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGroupNew->setText(QCoreApplication::translate("MainWindow", "&New Group\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionGroupNew->setToolTip(QCoreApplication::translate("MainWindow", "Add a new group", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGroupEdit->setText(QCoreApplication::translate("MainWindow", "&Edit Group\342\200\246", nullptr));
        actionGroupDelete->setText(QCoreApplication::translate("MainWindow", "&Delete Group\342\200\246", nullptr));
        actionGroupDownloadFavicons->setText(QCoreApplication::translate("MainWindow", "Download All &Favicons\342\200\246", nullptr));
        actionGroupSortAsc->setText(QCoreApplication::translate("MainWindow", "Sort &A-Z", nullptr));
        actionGroupSortDesc->setText(QCoreApplication::translate("MainWindow", "Sort &Z-A", nullptr));
        actionDatabaseSaveAs->setText(QCoreApplication::translate("MainWindow", "Sa&ve Database As\342\200\246", nullptr));
        actionDatabaseSecurity->setText(QCoreApplication::translate("MainWindow", "Database &Security\342\200\246", nullptr));
        actionReports->setText(QCoreApplication::translate("MainWindow", "Database &Reports\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionReports->setToolTip(QCoreApplication::translate("MainWindow", "Statistics, health check, etc.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDatabaseSettings->setText(QCoreApplication::translate("MainWindow", "&Database Settings\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionDatabaseSettings->setToolTip(QCoreApplication::translate("MainWindow", "Database settings", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPasskeys->setText(QCoreApplication::translate("MainWindow", "Passkeys\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionPasskeys->setToolTip(QCoreApplication::translate("MainWindow", "Passkeys", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImportPasskey->setText(QCoreApplication::translate("MainWindow", "Import Passkey", nullptr));
#if QT_CONFIG(tooltip)
        actionImportPasskey->setToolTip(QCoreApplication::translate("MainWindow", "Import Passkey", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryClone->setText(QCoreApplication::translate("MainWindow", "&Clone Entry\342\200\246", nullptr));
        actionEntryMoveUp->setText(QCoreApplication::translate("MainWindow", "Move u&p", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryMoveUp->setToolTip(QCoreApplication::translate("MainWindow", "Move entry one step up", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryMoveDown->setText(QCoreApplication::translate("MainWindow", "Move do&wn", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryMoveDown->setToolTip(QCoreApplication::translate("MainWindow", "Move entry one step down", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryCopyUsername->setText(QCoreApplication::translate("MainWindow", "Copy &Username", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryCopyUsername->setToolTip(QCoreApplication::translate("MainWindow", "Copy username to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryCopyPassword->setText(QCoreApplication::translate("MainWindow", "Copy &Password", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryCopyPassword->setToolTip(QCoreApplication::translate("MainWindow", "Copy password to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSettings->setText(QCoreApplication::translate("MainWindow", "&Settings", nullptr));
        actionPasswordGenerator->setText(QCoreApplication::translate("MainWindow", "&Password Generator", nullptr));
        actionEntryAutoType->setText(QCoreApplication::translate("MainWindow", "Perform &Auto-Type", nullptr));
        actionEntryImportPasskey->setText(QCoreApplication::translate("MainWindow", "Import Passkey", nullptr));
        actionEntryRemovePasskey->setText(QCoreApplication::translate("MainWindow", "Remove Passkey From Entry", nullptr));
        actionEntryDownloadIcon->setText(QCoreApplication::translate("MainWindow", "Download &Favicon", nullptr));
        actionEntryOpenUrl->setText(QCoreApplication::translate("MainWindow", "Open &URL", nullptr));
        actionLockDatabase->setText(QCoreApplication::translate("MainWindow", "&Lock Database", nullptr));
        actionLockAllDatabases->setText(QCoreApplication::translate("MainWindow", "Lock &All Databases", nullptr));
        actionEntryCopyTitle->setText(QCoreApplication::translate("MainWindow", "&Title", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryCopyTitle->setToolTip(QCoreApplication::translate("MainWindow", "Copy title to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryCopyURL->setText(QCoreApplication::translate("MainWindow", "Copy &URL", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryCopyURL->setToolTip(QCoreApplication::translate("MainWindow", "Copy URL to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryCopyNotes->setText(QCoreApplication::translate("MainWindow", "&Notes", nullptr));
#if QT_CONFIG(tooltip)
        actionEntryCopyNotes->setToolTip(QCoreApplication::translate("MainWindow", "Copy notes to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportCsv->setText(QCoreApplication::translate("MainWindow", "&CSV File\342\200\246", nullptr));
        actionExportHtml->setText(QCoreApplication::translate("MainWindow", "&HTML File\342\200\246", nullptr));
        actionImportKeePass1->setText(QCoreApplication::translate("MainWindow", "KeePass 1 Database\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionImportKeePass1->setToolTip(QCoreApplication::translate("MainWindow", "Import a KeePass 1 database", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImportOpVault->setText(QCoreApplication::translate("MainWindow", "1Password Vault\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionImportOpVault->setToolTip(QCoreApplication::translate("MainWindow", "Import a 1Password Vault", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImportCsv->setText(QCoreApplication::translate("MainWindow", "CSV File\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionImportCsv->setToolTip(QCoreApplication::translate("MainWindow", "Import a CSV file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEntryTotp->setText(QCoreApplication::translate("MainWindow", "Show TOTP", nullptr));
        actionEntryTotpQRCode->setText(QCoreApplication::translate("MainWindow", "Show QR Code", nullptr));
        actionEntrySetupTotp->setText(QCoreApplication::translate("MainWindow", "Set up TOTP\342\200\246", nullptr));
        actionEntryCopyTotp->setText(QCoreApplication::translate("MainWindow", "Copy &TOTP", nullptr));
        actionEntryCopyPasswordTotp->setText(QCoreApplication::translate("MainWindow", "Copy Password and TOTP", nullptr));
        actionGroupEmptyRecycleBin->setText(QCoreApplication::translate("MainWindow", "E&mpty recycle bin", nullptr));
#if QT_CONFIG(tooltip)
        actionGroupEmptyRecycleBin->setToolTip(QCoreApplication::translate("MainWindow", "Empty Recycle Bin", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDonate->setText(QCoreApplication::translate("MainWindow", "&Donate", nullptr));
        actionBugReport->setText(QCoreApplication::translate("MainWindow", "Report a &Bug", nullptr));
        actionGettingStarted->setText(QCoreApplication::translate("MainWindow", "&Getting Started", nullptr));
#if QT_CONFIG(tooltip)
        actionGettingStarted->setToolTip(QCoreApplication::translate("MainWindow", "Open Getting Started Guide", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOnlineHelp->setText(QCoreApplication::translate("MainWindow", "&Online Help", nullptr));
#if QT_CONFIG(tooltip)
        actionOnlineHelp->setToolTip(QCoreApplication::translate("MainWindow", "Go to online documentation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUserGuide->setText(QCoreApplication::translate("MainWindow", "&User Guide", nullptr));
#if QT_CONFIG(tooltip)
        actionUserGuide->setToolTip(QCoreApplication::translate("MainWindow", "Open User Guide", nullptr));
#endif // QT_CONFIG(tooltip)
        actionKeyboardShortcuts->setText(QCoreApplication::translate("MainWindow", "&Keyboard Shortcuts", nullptr));
        actionDatabaseSaveBackup->setText(QCoreApplication::translate("MainWindow", "Save Database Backup\342\200\246", nullptr));
        actionEntryAddToAgent->setText(QCoreApplication::translate("MainWindow", "Add key to SSH Agent", nullptr));
        actionEntryRemoveFromAgent->setText(QCoreApplication::translate("MainWindow", "Remove key from SSH Agent", nullptr));
        actionCompactMode->setText(QCoreApplication::translate("MainWindow", "Compact Mode", nullptr));
        actionThemeAuto->setText(QCoreApplication::translate("MainWindow", "Automatic", nullptr));
        actionThemeLight->setText(QCoreApplication::translate("MainWindow", "Light", nullptr));
        actionThemeDark->setText(QCoreApplication::translate("MainWindow", "Dark", nullptr));
        actionThemeClassic->setText(QCoreApplication::translate("MainWindow", "Classic (Platform-native)", nullptr));
        actionShowMenubar->setText(QCoreApplication::translate("MainWindow", "Show Menubar", nullptr));
#if QT_CONFIG(tooltip)
        actionShowMenubar->setToolTip(QCoreApplication::translate("MainWindow", "Toggle Show Menubar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowToolbar->setText(QCoreApplication::translate("MainWindow", "Show Toolbar", nullptr));
        actionShowEntriesOfSubgroups->setText(QCoreApplication::translate("MainWindow", "Show Entries of Subgroups", nullptr));
#if QT_CONFIG(tooltip)
        actionShowEntriesOfSubgroups->setToolTip(QCoreApplication::translate("MainWindow", "Toggle Show Entries of Subgroups", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowPreviewPanel->setText(QCoreApplication::translate("MainWindow", "Show Preview Panel", nullptr));
        actionAlwaysOnTop->setText(QCoreApplication::translate("MainWindow", "Always on Top", nullptr));
        actionHideUsernames->setText(QCoreApplication::translate("MainWindow", "Hide Usernames", nullptr));
        actionHidePasswords->setText(QCoreApplication::translate("MainWindow", "Hide Passwords", nullptr));
        actionGroupClone->setText(QCoreApplication::translate("MainWindow", "Clone Group...", nullptr));
        actionLockDatabaseToolbar->setText(QCoreApplication::translate("MainWindow", "&Lock Database", nullptr));
        actionExportXML->setText(QCoreApplication::translate("MainWindow", "&XML File\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionExportXML->setToolTip(QCoreApplication::translate("MainWindow", "XML File\342\200\246", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAllowScreenCapture->setText(QCoreApplication::translate("MainWindow", "Allow Screen Capture", nullptr));
        actionImport1PUX->setText(QCoreApplication::translate("MainWindow", "1Password 1PUX...", nullptr));
#if QT_CONFIG(tooltip)
        actionImport1PUX->setToolTip(QCoreApplication::translate("MainWindow", "Import a 1Password 1PUX file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImport->setText(QCoreApplication::translate("MainWindow", "Import\342\200\246", nullptr));
        actionShowGroupPanel->setText(QCoreApplication::translate("MainWindow", "Show Group Panel", nullptr));
#if QT_CONFIG(tooltip)
        actionShowGroupPanel->setToolTip(QCoreApplication::translate("MainWindow", "Toggle Show Group Panel", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClearSSHAgent->setText(QCoreApplication::translate("MainWindow", "Clear SSH Agent", nullptr));
#if QT_CONFIG(tooltip)
        actionClearSSHAgent->setToolTip(QCoreApplication::translate("MainWindow", "Clear all identities in ssh-agent", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&Database", nullptr));
        menuRecentDatabases->setTitle(QCoreApplication::translate("MainWindow", "&Recent Databases", nullptr));
        menuExport->setTitle(QCoreApplication::translate("MainWindow", "&Export", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuEntries->setTitle(QCoreApplication::translate("MainWindow", "&Entries", nullptr));
#if QT_CONFIG(tooltip)
        menuEntryCopyAttribute->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        menuEntryCopyAttribute->setTitle(QCoreApplication::translate("MainWindow", "Copy Att&ribute", nullptr));
        menuEntryTotp->setTitle(QCoreApplication::translate("MainWindow", "TOTP", nullptr));
        menuTags->setTitle(QCoreApplication::translate("MainWindow", "Tags", nullptr));
        menuGroups->setTitle(QCoreApplication::translate("MainWindow", "&Groups", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuTheme->setTitle(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
