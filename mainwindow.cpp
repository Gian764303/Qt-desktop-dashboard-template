#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>
#include <QFont>
#include <QIcon>

namespace {

const char *kStyleNavDefault = R"(
QPushButton {
    color: #c8c8d4;
    background-color: transparent;
    border: none;
    border-left: 3px solid transparent;
    border-radius: 0;
    padding: 10px 14px 10px 11px;
    text-align: left;
}
QPushButton:hover {
    background-color: #1e2433;
    color: #ffffff;
}
QPushButton:pressed {
    background-color: #0e0d14;
}
)";

const char *kStyleNavActive = R"(
QPushButton {
    color: #ffffff;
    background-color: #0e0d14;
    border: none;
    border-left: 3px solid #2d9cdb;
    border-radius: 0;
    padding: 10px 14px 10px 11px;
    text-align: left;
}
QPushButton:hover {
    background-color: #0e0d14;
    color: #ffffff;
}
)";

QString globalStyleSheet()
{
    return QString::fromUtf8(R"(
QMainWindow, QWidget#centralwidget {
    background-color: #12111a;
}
QFrame#frame_superior {
    background-color: #14131b;
    border: none;
    border-bottom: 1px solid #252430;
}
QFrame#frame_inferior {
    background-color: transparent;
    border: none;
}
QFrame#frame_lateral {
    background-color: #14131b;
    border: none;
    border-right: 1px solid #252430;
}
QFrame#main_body {
    background-color: #1b1b23;
    border: none;
}
QStackedWidget#stackedWidget {
    background-color: #1b1b23;
    border: none;
}
QPushButton#btn_menu {
    color: #e8e8ed;
    background-color: transparent;
    border: none;
    border-radius: 6px;
    padding: 6px 12px;
    text-align: left;
}
QPushButton#btn_menu:hover {
    background-color: #1e2433;
}
QPushButton#btn_menu:pressed {
    background-color: #2d9cdb;
    color: #ffffff;
}
QLabel#lbl_app_title {
    color: #8b8b9a;
    font-size: 11px;
    font-weight: 600;
    letter-spacing: 1.2px;
}
QLabel#pageTitle {
    color: #e8e8ed;
    font-size: 26px;
    font-weight: 600;
}
QLabel#pageSubtitle {
    color: #6b6b7b;
    font-size: 13px;
    font-weight: normal;
}
)");
}

} // namespace

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle(tr("Panel de control"));
    setMinimumSize(900, 560);

    applyTheme();
    cacheNavButtonLabels();

    QList<QPushButton *> botones = ui->frame_lateral->findChildren<QPushButton *>();
    for (QPushButton *btn : botones)
    {
        btn->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        btn->setMinimumHeight(42);
        btn->setCursor(Qt::PointingHandCursor);
        btn->setFocusPolicy(Qt::NoFocus);
        btn->setStyleSheet(QLatin1String(kStyleNavDefault));
    }

    ui->frame_lateral->setMinimumWidth(m_expandedMinWidth);
    ui->frame_lateral->setMaximumWidth(m_expandedMaxWidth);

    ui->bt_0->animateClick();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::applyTheme()
{
    setStyleSheet(globalStyleSheet());

    QFont navFont;
    navFont.setFamilies({QStringLiteral("Segoe UI"), QStringLiteral("Arial")});
    navFont.setPointSize(10);
    ui->frame_lateral->setFont(navFont);
    ui->btn_menu->setFont(navFont);

    const QList<QLabel *> titles = {ui->label, ui->label_1, ui->label_2,
                                    ui->label_3, ui->label_4, ui->label_5};
    for (QLabel *title : titles)
        title->setObjectName(QStringLiteral("pageTitle"));

    const QList<QLabel *> subtitles = {ui->label_sub_0, ui->label_sub_1, ui->label_sub_2,
                                       ui->label_sub_3, ui->label_sub_4, ui->label_sub_5};
    for (QLabel *subtitle : subtitles)
        subtitle->setObjectName(QStringLiteral("pageSubtitle"));
}

void MainWindow::cacheNavButtonLabels()
{
    const QList<QPushButton *> botones = ui->frame_lateral->findChildren<QPushButton *>();
    for (QPushButton *btn : botones)
        m_navLabels.insert(btn, btn->text().trimmed());
}

void MainWindow::updateNavButtonLabels()
{
    for (auto it = m_navLabels.constBegin(); it != m_navLabels.constEnd(); ++it)
    {
        QPushButton *btn = it.key();
        if (m_frameLateralCollapsed)
        {
            btn->setText(QString());
            btn->setToolTip(it.value());
        }
        else
        {
            btn->setText(QStringLiteral("  ") + it.value());
            btn->setToolTip(QString());
        }
    }
}

void MainWindow::actualizarEstiloBoton(QPushButton *botonPresionado)
{
    const QList<QPushButton *> botones = ui->frame_lateral->findChildren<QPushButton *>();

    for (QPushButton *btn : botones)
        btn->setStyleSheet(QLatin1String(kStyleNavDefault));

    botonPresionado->setStyleSheet(QLatin1String(kStyleNavActive));
}

void MainWindow::navigateTo(QWidget *page, QPushButton *button)
{
    ui->stackedWidget->setCurrentWidget(page);
    actualizarEstiloBoton(button);
}

void MainWindow::on_btn_menu_clicked()
{
    if (m_frameLateralCollapsed)
    {
        ui->frame_lateral->setMinimumWidth(m_expandedMinWidth);
        ui->frame_lateral->setMaximumWidth(m_expandedMaxWidth);
        ui->btn_menu->setIcon(QIcon(QStringLiteral(":/img/icon_light/menu.svg")));
        ui->btn_menu->setText(QStringLiteral("  MENU"));
        m_frameLateralCollapsed = false;
    }
    else
    {
        ui->frame_lateral->setMinimumWidth(m_collapsedWidth);
        ui->frame_lateral->setMaximumWidth(m_collapsedWidth);
        ui->btn_menu->setIcon(QIcon(QStringLiteral(":/img/icon_light/chevron-left.svg")));
        ui->btn_menu->setText(QString());
        ui->btn_menu->setToolTip(tr("Expandir menú"));
        m_frameLateralCollapsed = true;
    }

    if (!m_frameLateralCollapsed)
        ui->btn_menu->setToolTip(QString());

    updateNavButtonLabels();
}

void MainWindow::on_bt_0_clicked()
{
    navigateTo(ui->page_0, ui->bt_0);
}

void MainWindow::on_bt_1_clicked()
{
    navigateTo(ui->page_1, ui->bt_1);
}

void MainWindow::on_bt_2_clicked()
{
    navigateTo(ui->page_2, ui->bt_2);
}

void MainWindow::on_bt_3_clicked()
{
    navigateTo(ui->page_3, ui->bt_3);
}

void MainWindow::on_bt_4_clicked()
{
    navigateTo(ui->page_4, ui->bt_4);
}

void MainWindow::on_bt_5_clicked()
{
    navigateTo(ui->page_5, ui->bt_5);
}
