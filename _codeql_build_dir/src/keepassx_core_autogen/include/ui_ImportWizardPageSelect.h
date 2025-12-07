/********************************************************************************
** Form generated from reading UI file 'ImportWizardPageSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTWIZARDPAGESELECT_H
#define UI_IMPORTWIZARDPAGESELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>
#include "gui/PasswordWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ImportWizardPageSelect
{
public:
    QVBoxLayout *verticalLayout_2;
    QListWidget *importTypeList;
    QSpacerItem *verticalSpacer;
    QWidget *inputFields;
    QFormLayout *formLayout_2;
    QLabel *importFileLabel;
    QHBoxLayout *importFileLayout;
    QLineEdit *importFileEdit;
    QPushButton *importFileButton;
    QLabel *passwordLabel;
    PasswordWidget *passwordEdit;
    QLabel *keyFileLabel;
    QHBoxLayout *keyFileLayout;
    QLineEdit *keyFileEdit;
    QPushButton *keyFileButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *importIntoLabel;
    QGroupBox *importIntoGroupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *newDatabaseRadio;
    QHBoxLayout *existingDatabaseLayout;
    QRadioButton *existingDatabaseRadio;
    QComboBox *existingDatabaseChoice;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWizardPage *ImportWizardPageSelect)
    {
        if (ImportWizardPageSelect->objectName().isEmpty())
            ImportWizardPageSelect->setObjectName(QString::fromUtf8("ImportWizardPageSelect"));
        ImportWizardPageSelect->resize(500, 388);
        verticalLayout_2 = new QVBoxLayout(ImportWizardPageSelect);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        importTypeList = new QListWidget(ImportWizardPageSelect);
        importTypeList->setObjectName(QString::fromUtf8("importTypeList"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(importTypeList->sizePolicy().hasHeightForWidth());
        importTypeList->setSizePolicy(sizePolicy);
        importTypeList->setMinimumSize(QSize(500, 125));
        importTypeList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        importTypeList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        importTypeList->setTabKeyNavigation(true);
        importTypeList->setSelectionBehavior(QAbstractItemView::SelectRows);
        importTypeList->setTextElideMode(Qt::ElideNone);

        verticalLayout_2->addWidget(importTypeList);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        inputFields = new QWidget(ImportWizardPageSelect);
        inputFields->setObjectName(QString::fromUtf8("inputFields"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(inputFields->sizePolicy().hasHeightForWidth());
        inputFields->setSizePolicy(sizePolicy1);
        inputFields->setMinimumSize(QSize(400, 0));
        formLayout_2 = new QFormLayout(inputFields);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        importFileLabel = new QLabel(inputFields);
        importFileLabel->setObjectName(QString::fromUtf8("importFileLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, importFileLabel);

        importFileLayout = new QHBoxLayout();
        importFileLayout->setObjectName(QString::fromUtf8("importFileLayout"));
        importFileEdit = new QLineEdit(inputFields);
        importFileEdit->setObjectName(QString::fromUtf8("importFileEdit"));

        importFileLayout->addWidget(importFileEdit);

        importFileButton = new QPushButton(inputFields);
        importFileButton->setObjectName(QString::fromUtf8("importFileButton"));

        importFileLayout->addWidget(importFileButton);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, importFileLayout);

        passwordLabel = new QLabel(inputFields);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordEdit = new PasswordWidget(inputFields);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passwordEdit);

        keyFileLabel = new QLabel(inputFields);
        keyFileLabel->setObjectName(QString::fromUtf8("keyFileLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, keyFileLabel);

        keyFileLayout = new QHBoxLayout();
        keyFileLayout->setObjectName(QString::fromUtf8("keyFileLayout"));
        keyFileEdit = new QLineEdit(inputFields);
        keyFileEdit->setObjectName(QString::fromUtf8("keyFileEdit"));

        keyFileLayout->addWidget(keyFileEdit);

        keyFileButton = new QPushButton(inputFields);
        keyFileButton->setObjectName(QString::fromUtf8("keyFileButton"));

        keyFileLayout->addWidget(keyFileButton);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, keyFileLayout);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_2->setItem(3, QFormLayout::FieldRole, verticalSpacer_3);

        importIntoLabel = new QLabel(inputFields);
        importIntoLabel->setObjectName(QString::fromUtf8("importIntoLabel"));
        importIntoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, importIntoLabel);

        importIntoGroupBox = new QGroupBox(inputFields);
        importIntoGroupBox->setObjectName(QString::fromUtf8("importIntoGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(importIntoGroupBox->sizePolicy().hasHeightForWidth());
        importIntoGroupBox->setSizePolicy(sizePolicy2);
        importIntoGroupBox->setMinimumSize(QSize(0, 60));
        verticalLayout = new QVBoxLayout(importIntoGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        newDatabaseRadio = new QRadioButton(importIntoGroupBox);
        newDatabaseRadio->setObjectName(QString::fromUtf8("newDatabaseRadio"));
        newDatabaseRadio->setChecked(true);

        verticalLayout->addWidget(newDatabaseRadio);

        existingDatabaseLayout = new QHBoxLayout();
        existingDatabaseLayout->setObjectName(QString::fromUtf8("existingDatabaseLayout"));
        existingDatabaseRadio = new QRadioButton(importIntoGroupBox);
        existingDatabaseRadio->setObjectName(QString::fromUtf8("existingDatabaseRadio"));
        existingDatabaseRadio->setEnabled(false);

        existingDatabaseLayout->addWidget(existingDatabaseRadio);

        existingDatabaseChoice = new QComboBox(importIntoGroupBox);
        existingDatabaseChoice->setObjectName(QString::fromUtf8("existingDatabaseChoice"));
        existingDatabaseChoice->setEnabled(false);

        existingDatabaseLayout->addWidget(existingDatabaseChoice);

        existingDatabaseLayout->setStretch(1, 1);

        verticalLayout->addLayout(existingDatabaseLayout);


        formLayout_2->setWidget(4, QFormLayout::FieldRole, importIntoGroupBox);


        verticalLayout_2->addWidget(inputFields);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(ImportWizardPageSelect);

        QMetaObject::connectSlotsByName(ImportWizardPageSelect);
    } // setupUi

    void retranslateUi(QWizardPage *ImportWizardPageSelect)
    {
        ImportWizardPageSelect->setWindowTitle(QCoreApplication::translate("ImportWizardPageSelect", "Form", nullptr));
        ImportWizardPageSelect->setTitle(QCoreApplication::translate("ImportWizardPageSelect", "Import File Selection", nullptr));
        importFileLabel->setText(QCoreApplication::translate("ImportWizardPageSelect", "Import File:", nullptr));
        importFileButton->setText(QCoreApplication::translate("ImportWizardPageSelect", "Browse\342\200\246", nullptr));
        passwordLabel->setText(QCoreApplication::translate("ImportWizardPageSelect", "Password:", nullptr));
        keyFileLabel->setText(QCoreApplication::translate("ImportWizardPageSelect", "Key File:", nullptr));
        keyFileButton->setText(QCoreApplication::translate("ImportWizardPageSelect", "Browse\342\200\246", nullptr));
        importIntoLabel->setText(QCoreApplication::translate("ImportWizardPageSelect", "Import Into:", nullptr));
        importIntoGroupBox->setTitle(QString());
        newDatabaseRadio->setText(QCoreApplication::translate("ImportWizardPageSelect", "New Database", nullptr));
#if QT_CONFIG(tooltip)
        existingDatabaseRadio->setToolTip(QCoreApplication::translate("ImportWizardPageSelect", "No unlocked databases available", nullptr));
#endif // QT_CONFIG(tooltip)
        existingDatabaseRadio->setText(QCoreApplication::translate("ImportWizardPageSelect", "Existing Database:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportWizardPageSelect: public Ui_ImportWizardPageSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTWIZARDPAGESELECT_H
