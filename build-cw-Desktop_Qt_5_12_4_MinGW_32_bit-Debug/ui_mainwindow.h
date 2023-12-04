/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QPushButton *del;
    QPushButton *add;
    QPushButton *updateStatusButton;
    QTableView *tableView;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QTableView *tableView_2;
    QSpacerItem *verticalSpacer;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QPushButton *del_employee_button;
    QPushButton *add_employee_Button;
    QTableView *tableView_3;
    QWidget *tab_7;
    QGridLayout *gridLayout_5;
    QPushButton *add_employee_Button_2;
    QPushButton *del_employee_button_2;
    QTableView *tableView_5;
    QWidget *tab_3;
    QGridLayout *gridLayout_6;
    QPushButton *reportButton;
    QTableView *tableView_4;
    QPushButton *reportButton_2;
    QPushButton *incomeButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1160, 698);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resourses/images/icons8-\321\210\320\262\320\265\320\271\320\275\320\260\321\217-\320\274\320\260\321\210\320\270\320\275\320\260-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(688, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 7, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 6, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        del = new QPushButton(tab);
        del->setObjectName(QString::fromUtf8("del"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resourses/images/icons8-\320\274\320\270\320\275\321\203\321\201-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        del->setIcon(icon1);

        gridLayout_3->addWidget(del, 1, 1, 1, 1);

        add = new QPushButton(tab);
        add->setObjectName(QString::fromUtf8("add"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resourses/images/icons8-\320\277\320\273\321\216\321\201-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon2);

        gridLayout_3->addWidget(add, 0, 1, 1, 1);

        updateStatusButton = new QPushButton(tab);
        updateStatusButton->setObjectName(QString::fromUtf8("updateStatusButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resourses/images/icons8-\320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateStatusButton->setIcon(icon3);

        gridLayout_3->addWidget(updateStatusButton, 2, 1, 1, 1);

        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8(""));
        tableView->setSortingEnabled(true);

        gridLayout_3->addWidget(tableView, 0, 0, 5, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout_2->addWidget(tableView_2, 0, 0, 2, 1);

        verticalSpacer = new QSpacerItem(20, 499, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        del_employee_button = new QPushButton(tab_4);
        del_employee_button->setObjectName(QString::fromUtf8("del_employee_button"));
        del_employee_button->setIcon(icon1);

        gridLayout_4->addWidget(del_employee_button, 1, 1, 1, 1);

        add_employee_Button = new QPushButton(tab_4);
        add_employee_Button->setObjectName(QString::fromUtf8("add_employee_Button"));
        add_employee_Button->setIcon(icon2);

        gridLayout_4->addWidget(add_employee_Button, 0, 1, 1, 1);

        tableView_3 = new QTableView(tab_4);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));

        gridLayout_4->addWidget(tableView_3, 0, 0, 4, 1);

        tabWidget->addTab(tab_4, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_5 = new QGridLayout(tab_7);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        add_employee_Button_2 = new QPushButton(tab_7);
        add_employee_Button_2->setObjectName(QString::fromUtf8("add_employee_Button_2"));
        add_employee_Button_2->setIcon(icon2);

        gridLayout_5->addWidget(add_employee_Button_2, 0, 1, 1, 1);

        del_employee_button_2 = new QPushButton(tab_7);
        del_employee_button_2->setObjectName(QString::fromUtf8("del_employee_button_2"));
        del_employee_button_2->setIcon(icon1);

        gridLayout_5->addWidget(del_employee_button_2, 1, 1, 1, 1);

        tableView_5 = new QTableView(tab_7);
        tableView_5->setObjectName(QString::fromUtf8("tableView_5"));

        gridLayout_5->addWidget(tableView_5, 0, 0, 3, 1);

        tabWidget->addTab(tab_7, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_6 = new QGridLayout(tab_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        reportButton = new QPushButton(tab_3);
        reportButton->setObjectName(QString::fromUtf8("reportButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resourses/images/icons8-\321\202\320\260\320\261\320\265\320\273\321\214-\321\203\321\201\320\277\320\265\320\262\320\260\320\265\320\274\320\276\321\201\321\202\320\270-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        reportButton->setIcon(icon4);

        gridLayout_6->addWidget(reportButton, 0, 2, 1, 1);

        tableView_4 = new QTableView(tab_3);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));

        gridLayout_6->addWidget(tableView_4, 0, 0, 5, 1);

        reportButton_2 = new QPushButton(tab_3);
        reportButton_2->setObjectName(QString::fromUtf8("reportButton_2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resourses/images/icons8-\321\201\320\272\320\260\321\207\320\260\321\202\321\214-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        reportButton_2->setIcon(icon5);

        gridLayout_6->addWidget(reportButton_2, 1, 2, 1, 1);

        incomeButton = new QPushButton(tab_3);
        incomeButton->setObjectName(QString::fromUtf8("incomeButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resourses/images/icons8-\320\277\321\200\320\270\320\261\321\213\320\273\321\214-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        incomeButton->setIcon(icon6);

        gridLayout_6->addWidget(incomeButton, 4, 2, 1, 1);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1160, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\250\320\262\320\265\320\271\320\275\320\276\320\265 \320\260\321\202\320\265\320\273\321\214\320\265", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">\320\222\321\200\320\265\320\274\321\217 \321\200\320\260\320\261\320\276\321\202\321\213 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217:</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "0", nullptr));
        del->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
        add->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
        updateStatusButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\321\202\320\260\321\202\321\203\321\201 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\244\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\276\321\201\321\202\320\270 \320\267\320\260\320\272\320\260\320\267\320\260", nullptr));
        del_employee_button->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        add_employee_Button->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        add_employee_Button_2->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\201\320\273\321\203\320\263\321\203", nullptr));
        del_employee_button_2->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\203\321\201\320\273\321\203\320\263\321\203", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "\320\243\321\201\320\273\321\203\320\263\320\270", nullptr));
        reportButton->setText(QApplication::translate("MainWindow", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\236\321\202\321\207\320\265\321\202", nullptr));
        reportButton_2->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\276\321\202\321\207\320\265\321\202", nullptr));
        incomeButton->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\267\320\260\321\200\320\260\320\261\320\276\321\202\320\272\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\202", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
