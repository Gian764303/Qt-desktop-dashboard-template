#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QHash>
#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_menu_clicked();
    void actualizarEstiloBoton(QPushButton *botonPresionado);
    void on_bt_0_clicked();
    void on_bt_1_clicked();
    void on_bt_4_clicked();
    void on_bt_5_clicked();
    void on_bt_2_clicked();
    void on_bt_3_clicked();

private:
    void applyTheme();
    void cacheNavButtonLabels();
    void updateNavButtonLabels();
    void navigateTo(QWidget *page, QPushButton *button);

    Ui::MainWindow *ui;
    QHash<QPushButton *, QString> m_navLabels;
    bool m_frameLateralCollapsed = false;
    static constexpr int m_collapsedWidth = 52;
    static constexpr int m_expandedMinWidth = 200;
    static constexpr int m_expandedMaxWidth = 240;
};
#endif // MAINWINDOW_H
