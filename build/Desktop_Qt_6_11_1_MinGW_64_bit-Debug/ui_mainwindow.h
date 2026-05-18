/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_superior;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_menu;
    QLabel *lbl_app_title;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_inferior;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_lateral;
    QVBoxLayout *verticalLayout_3;
    QPushButton *bt_0;
    QPushButton *bt_1;
    QPushButton *bt_2;
    QPushButton *bt_3;
    QSpacerItem *verticalSpacer;
    QPushButton *bt_4;
    QPushButton *bt_5;
    QFrame *main_body;
    QVBoxLayout *verticalLayout_8;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_sub_0;
    QSpacerItem *verticalSpacer_page0;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label_sub_2;
    QSpacerItem *verticalSpacer_page2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QLabel *label_sub_3;
    QSpacerItem *verticalSpacer_page3;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QLabel *label_sub_4;
    QSpacerItem *verticalSpacer_page4;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QLabel *label_sub_5;
    QSpacerItem *verticalSpacer_page5;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_1;
    QLabel *label_sub_1;
    QSpacerItem *verticalSpacer_page1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1204, 609);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_superior = new QFrame(centralwidget);
        frame_superior->setObjectName("frame_superior");
        frame_superior->setMinimumSize(QSize(0, 44));
        frame_superior->setMaximumSize(QSize(16777215, 44));
        frame_superior->setFrameShape(QFrame::NoFrame);
        horizontalLayout_2 = new QHBoxLayout(frame_superior);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(12, 0, 16, 0);
        btn_menu = new QPushButton(frame_superior);
        btn_menu->setObjectName("btn_menu");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        btn_menu->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon_light/menu.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btn_menu->setIcon(icon);
        btn_menu->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(btn_menu);

        lbl_app_title = new QLabel(frame_superior);
        lbl_app_title->setObjectName("lbl_app_title");

        horizontalLayout_2->addWidget(lbl_app_title);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame_superior);

        frame_inferior = new QFrame(centralwidget);
        frame_inferior->setObjectName("frame_inferior");
        frame_inferior->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(frame_inferior);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_lateral = new QFrame(frame_inferior);
        frame_lateral->setObjectName("frame_lateral");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_lateral->sizePolicy().hasHeightForWidth());
        frame_lateral->setSizePolicy(sizePolicy1);
        frame_lateral->setMinimumSize(QSize(0, 0));
        frame_lateral->setMaximumSize(QSize(16777215, 16777215));
        frame_lateral->setFrameShape(QFrame::NoFrame);
        verticalLayout_3 = new QVBoxLayout(frame_lateral);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 8, 0, 0);
        bt_0 = new QPushButton(frame_lateral);
        bt_0->setObjectName("bt_0");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bt_0->sizePolicy().hasHeightForWidth());
        bt_0->setSizePolicy(sizePolicy2);
        bt_0->setMinimumSize(QSize(0, 38));
        bt_0->setMaximumSize(QSize(16777215, 40));
        bt_0->setBaseSize(QSize(0, 0));
        bt_0->setContextMenuPolicy(Qt::PreventContextMenu);
        bt_0->setAcceptDrops(true);
        bt_0->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icon_light/home.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_0->setIcon(icon1);
        bt_0->setIconSize(QSize(20, 20));
        bt_0->setAutoRepeatDelay(300);

        verticalLayout_3->addWidget(bt_0);

        bt_1 = new QPushButton(frame_lateral);
        bt_1->setObjectName("bt_1");
        bt_1->setMinimumSize(QSize(0, 38));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/icon_light/user-plus.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_1->setIcon(icon2);
        bt_1->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(bt_1);

        bt_2 = new QPushButton(frame_lateral);
        bt_2->setObjectName("bt_2");
        bt_2->setMinimumSize(QSize(0, 38));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/icon_light/edit-3.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_2->setIcon(icon3);
        bt_2->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(bt_2);

        bt_3 = new QPushButton(frame_lateral);
        bt_3->setObjectName("bt_3");
        bt_3->setMinimumSize(QSize(0, 38));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/icon_light/file-plus.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_3->setIcon(icon4);
        bt_3->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(bt_3);

        verticalSpacer = new QSpacerItem(20, 108, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        bt_4 = new QPushButton(frame_lateral);
        bt_4->setObjectName("bt_4");
        bt_4->setMinimumSize(QSize(0, 38));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/icon_light/settings.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_4->setIcon(icon5);
        bt_4->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(bt_4);

        bt_5 = new QPushButton(frame_lateral);
        bt_5->setObjectName("bt_5");
        bt_5->setMinimumSize(QSize(0, 38));
        bt_5->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/icon_light/alert-circle.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bt_5->setIcon(icon6);
        bt_5->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(bt_5);


        horizontalLayout->addWidget(frame_lateral, 0, Qt::AlignLeft);

        main_body = new QFrame(frame_inferior);
        main_body->setObjectName("main_body");
        sizePolicy1.setHeightForWidth(main_body->sizePolicy().hasHeightForWidth());
        main_body->setSizePolicy(sizePolicy1);
        main_body->setMinimumSize(QSize(0, 0));
        main_body->setFrameShape(QFrame::NoFrame);
        verticalLayout_8 = new QVBoxLayout(main_body);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(main_body);
        stackedWidget->setObjectName("stackedWidget");
        page_0 = new QWidget();
        page_0->setObjectName("page_0");
        verticalLayout_2 = new QVBoxLayout(page_0);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(36, 36, 36, 36);
        label = new QLabel(page_0);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_sub_0 = new QLabel(page_0);
        label_sub_0->setObjectName("label_sub_0");

        verticalLayout_2->addWidget(label_sub_0);

        verticalSpacer_page0 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_page0);

        stackedWidget->addWidget(page_0);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(36, 36, 36, 36);
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");

        verticalLayout_5->addWidget(label_2);

        label_sub_2 = new QLabel(page_2);
        label_sub_2->setObjectName("label_sub_2");

        verticalLayout_5->addWidget(label_sub_2);

        verticalSpacer_page2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_page2);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout_6 = new QVBoxLayout(page_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(36, 36, 36, 36);
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");

        verticalLayout_6->addWidget(label_3);

        label_sub_3 = new QLabel(page_3);
        label_sub_3->setObjectName("label_sub_3");

        verticalLayout_6->addWidget(label_sub_3);

        verticalSpacer_page3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_page3);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        verticalLayout_7 = new QVBoxLayout(page_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(36, 36, 36, 36);
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");

        verticalLayout_7->addWidget(label_4);

        label_sub_4 = new QLabel(page_4);
        label_sub_4->setObjectName("label_sub_4");

        verticalLayout_7->addWidget(label_sub_4);

        verticalSpacer_page4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_page4);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        verticalLayout_9 = new QVBoxLayout(page_5);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(36, 36, 36, 36);
        label_5 = new QLabel(page_5);
        label_5->setObjectName("label_5");

        verticalLayout_9->addWidget(label_5);

        label_sub_5 = new QLabel(page_5);
        label_sub_5->setObjectName("label_sub_5");

        verticalLayout_9->addWidget(label_sub_5);

        verticalSpacer_page5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_page5);

        stackedWidget->addWidget(page_5);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        verticalLayout_4 = new QVBoxLayout(page_1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(36, 36, 36, 36);
        label_1 = new QLabel(page_1);
        label_1->setObjectName("label_1");

        verticalLayout_4->addWidget(label_1);

        label_sub_1 = new QLabel(page_1);
        label_sub_1->setObjectName("label_sub_1");

        verticalLayout_4->addWidget(label_sub_1);

        verticalSpacer_page1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_page1);

        stackedWidget->addWidget(page_1);

        verticalLayout_8->addWidget(stackedWidget);


        horizontalLayout->addWidget(main_body);


        verticalLayout->addWidget(frame_inferior);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Panel de control", nullptr));
        btn_menu->setText(QCoreApplication::translate("MainWindow", "  MENU", nullptr));
        lbl_app_title->setText(QCoreApplication::translate("MainWindow", "APLICACI\303\223N", nullptr));
        bt_0->setText(QCoreApplication::translate("MainWindow", "  Inicio", nullptr));
        bt_1->setText(QCoreApplication::translate("MainWindow", "  Usuarios", nullptr));
        bt_2->setText(QCoreApplication::translate("MainWindow", "  Editar", nullptr));
        bt_3->setText(QCoreApplication::translate("MainWindow", "  Archivos", nullptr));
        bt_4->setText(QCoreApplication::translate("MainWindow", "  Ajustes", nullptr));
        bt_5->setText(QCoreApplication::translate("MainWindow", "  Ayuda", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Inicio", nullptr));
        label_sub_0->setText(QCoreApplication::translate("MainWindow", "Resumen y accesos r\303\241pidos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        label_sub_2->setText(QCoreApplication::translate("MainWindow", "Modificar registros existentes", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Archivos", nullptr));
        label_sub_3->setText(QCoreApplication::translate("MainWindow", "Gesti\303\263n de documentos", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Configuraci\303\263n", nullptr));
        label_sub_4->setText(QCoreApplication::translate("MainWindow", "Preferencias de la aplicaci\303\263n", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Ayuda", nullptr));
        label_sub_5->setText(QCoreApplication::translate("MainWindow", "Informaci\303\263n y soporte", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Usuarios", nullptr));
        label_sub_1->setText(QCoreApplication::translate("MainWindow", "Alta y administraci\303\263n de usuarios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
