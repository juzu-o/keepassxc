/********************************************************************************
** Form generated from reading UI file 'EditWidgetProperties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWIDGETPROPERTIES_H
#define UI_EDITWIDGETPROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditWidgetProperties
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelCreated;
    QLineEdit *createdEdit;
    QLabel *labelModfied;
    QLineEdit *modifiedEdit;
    QLabel *labelUuid;
    QLineEdit *uuidEdit;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *customDataTable;
    QVBoxLayout *verticalLayout_2;
    QPushButton *removeCustomDataButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EditWidgetProperties)
    {
        if (EditWidgetProperties->objectName().isEmpty())
            EditWidgetProperties->setObjectName(QString::fromUtf8("EditWidgetProperties"));
        EditWidgetProperties->resize(364, 408);
        verticalLayout = new QVBoxLayout(EditWidgetProperties);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(8);
        labelCreated = new QLabel(EditWidgetProperties);
        labelCreated->setObjectName(QString::fromUtf8("labelCreated"));
        labelCreated->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelCreated, 0, 0, 1, 1);

        createdEdit = new QLineEdit(EditWidgetProperties);
        createdEdit->setObjectName(QString::fromUtf8("createdEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(createdEdit->sizePolicy().hasHeightForWidth());
        createdEdit->setSizePolicy(sizePolicy);
        createdEdit->setReadOnly(true);

        gridLayout->addWidget(createdEdit, 0, 1, 1, 1);

        labelModfied = new QLabel(EditWidgetProperties);
        labelModfied->setObjectName(QString::fromUtf8("labelModfied"));
        labelModfied->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelModfied, 1, 0, 1, 1);

        modifiedEdit = new QLineEdit(EditWidgetProperties);
        modifiedEdit->setObjectName(QString::fromUtf8("modifiedEdit"));
        sizePolicy.setHeightForWidth(modifiedEdit->sizePolicy().hasHeightForWidth());
        modifiedEdit->setSizePolicy(sizePolicy);
        modifiedEdit->setReadOnly(true);

        gridLayout->addWidget(modifiedEdit, 1, 1, 1, 1);

        labelUuid = new QLabel(EditWidgetProperties);
        labelUuid->setObjectName(QString::fromUtf8("labelUuid"));
        labelUuid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelUuid, 2, 0, 1, 1);

        uuidEdit = new QLineEdit(EditWidgetProperties);
        uuidEdit->setObjectName(QString::fromUtf8("uuidEdit"));
        uuidEdit->setReadOnly(true);

        gridLayout->addWidget(uuidEdit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        groupBox = new QGroupBox(EditWidgetProperties);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        customDataTable = new QTableView(groupBox);
        customDataTable->setObjectName(QString::fromUtf8("customDataTable"));
        customDataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        customDataTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        customDataTable->horizontalHeader()->setDefaultSectionSize(200);
        customDataTable->horizontalHeader()->setStretchLastSection(true);
        customDataTable->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(customDataTable);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        removeCustomDataButton = new QPushButton(groupBox);
        removeCustomDataButton->setObjectName(QString::fromUtf8("removeCustomDataButton"));

        verticalLayout_2->addWidget(removeCustomDataButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addWidget(groupBox);

        QWidget::setTabOrder(createdEdit, modifiedEdit);
        QWidget::setTabOrder(modifiedEdit, uuidEdit);

        retranslateUi(EditWidgetProperties);

        QMetaObject::connectSlotsByName(EditWidgetProperties);
    } // setupUi

    void retranslateUi(QWidget *EditWidgetProperties)
    {
        labelCreated->setText(QCoreApplication::translate("EditWidgetProperties", "Created:", nullptr));
#if QT_CONFIG(accessibility)
        createdEdit->setAccessibleName(QCoreApplication::translate("EditWidgetProperties", "Datetime created", nullptr));
#endif // QT_CONFIG(accessibility)
        labelModfied->setText(QCoreApplication::translate("EditWidgetProperties", "Modified:", nullptr));
#if QT_CONFIG(accessibility)
        modifiedEdit->setAccessibleName(QCoreApplication::translate("EditWidgetProperties", "Datetime modified", nullptr));
#endif // QT_CONFIG(accessibility)
        labelUuid->setText(QCoreApplication::translate("EditWidgetProperties", "Uuid:", nullptr));
#if QT_CONFIG(accessibility)
        uuidEdit->setAccessibleName(QCoreApplication::translate("EditWidgetProperties", "Unique ID", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox->setTitle(QCoreApplication::translate("EditWidgetProperties", "Plugin Data", nullptr));
#if QT_CONFIG(accessibility)
        customDataTable->setAccessibleName(QCoreApplication::translate("EditWidgetProperties", "Plugin data", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        removeCustomDataButton->setAccessibleName(QCoreApplication::translate("EditWidgetProperties", "Remove selected plugin data", nullptr));
#endif // QT_CONFIG(accessibility)
        removeCustomDataButton->setText(QCoreApplication::translate("EditWidgetProperties", "Remove", nullptr));
        (void)EditWidgetProperties;
    } // retranslateUi

};

namespace Ui {
    class EditWidgetProperties: public Ui_EditWidgetProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWIDGETPROPERTIES_H
