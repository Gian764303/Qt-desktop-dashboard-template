#include "mainwindow.h"

#include <QApplication>
#include <QColor>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle(QStringLiteral("Fusion"));

    QPalette palette = a.palette();
    palette.setColor(QPalette::Window, QColor(0x1b, 0x1b, 0x23));
    palette.setColor(QPalette::WindowText, QColor(0xe8, 0xe8, 0xed));
    palette.setColor(QPalette::Base, QColor(0x14, 0x13, 0x1b));
    palette.setColor(QPalette::AlternateBase, QColor(0x1e, 0x24, 0x33));
    palette.setColor(QPalette::ToolTipBase, QColor(0x14, 0x13, 0x1b));
    palette.setColor(QPalette::ToolTipText, QColor(0xe8, 0xe8, 0xed));
    palette.setColor(QPalette::Text, QColor(0xe8, 0xe8, 0xed));
    palette.setColor(QPalette::Button, QColor(0x14, 0x13, 0x1b));
    palette.setColor(QPalette::ButtonText, QColor(0xc8, 0xc8, 0xd4));
    palette.setColor(QPalette::Highlight, QColor(0x2d, 0x9c, 0xdb));
    palette.setColor(QPalette::HighlightedText, Qt::white);
    a.setPalette(palette);

    MainWindow w;
    w.show();
    return a.exec();
}
