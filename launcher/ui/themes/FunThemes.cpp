// SPDX-License-Identifier: GPL-3.0-only
#include "FunThemes.h"
#include <QObject>

QPalette MidnightTheme::colorScheme() {
    QPalette palette;
    palette.setColor(QPalette::Window, Qt::black);
    palette.setColor(QPalette::WindowText, Qt::white);
    palette.setColor(QPalette::Base, Qt::black);
    palette.setColor(QPalette::AlternateBase, QColor(20, 20, 20));
    palette.setColor(QPalette::ToolTipBase, Qt::black);
    palette.setColor(QPalette::ToolTipText, Qt::white);
    palette.setColor(QPalette::Text, Qt::white);
    palette.setColor(QPalette::Button, QColor(30, 30, 30));
    palette.setColor(QPalette::ButtonText, Qt::white);
    palette.setColor(QPalette::Highlight, QColor(60, 60, 60));
    palette.setColor(QPalette::HighlightedText, Qt::white);
    return fadeInactive(palette, fadeAmount(), fadeColor());
}

QPalette MatrixTheme::colorScheme() {
    QPalette palette;
    QColor matrixGreen(0, 255, 70);
    palette.setColor(QPalette::Window, Qt::black);
    palette.setColor(QPalette::WindowText, matrixGreen);
    palette.setColor(QPalette::Base, Qt::black);
    palette.setColor(QPalette::AlternateBase, QColor(0, 20, 0));
    palette.setColor(QPalette::Text, matrixGreen);
    palette.setColor(QPalette::Button, Qt::black);
    palette.setColor(QPalette::ButtonText, matrixGreen);
    palette.setColor(QPalette::Highlight, matrixGreen);
    palette.setColor(QPalette::HighlightedText, Qt::black);
    return fadeInactive(palette, fadeAmount(), fadeColor());
}

QString MatrixTheme::appStyleSheet() {
    return "QWidget { font-family: 'Courier New'; } "
           "QToolTip { color: #00ff46; background-color: #000000; border: 1px solid #00ff46; }";
}

QPalette MinecraftTheme::colorScheme() {
    QPalette palette;
    QColor dirtBrown(139, 69, 19);
    QColor grassGreen(34, 139, 34);
    palette.setColor(QPalette::Window, dirtBrown);
    palette.setColor(QPalette::WindowText, Qt::white);
    palette.setColor(QPalette::Base, QColor(101, 67, 33));
    palette.setColor(QPalette::AlternateBase, QColor(80, 50, 20));
    palette.setColor(QPalette::Text, Qt::white);
    palette.setColor(QPalette::Button, QColor(120, 60, 15));
    palette.setColor(QPalette::ButtonText, Qt::white);
    palette.setColor(QPalette::Highlight, grassGreen);
    palette.setColor(QPalette::HighlightedText, Qt::white);
    return fadeInactive(palette, fadeAmount(), fadeColor());
}

QString MinecraftTheme::appStyleSheet() {
    return "QToolTip { background-color: #8b4513; color: white; border: 2px solid #228b22; } "
           "QProgressBar { border: 2px solid #228b22; background: #654321; } "
           "QProgressBar::chunk { background-color: #228b22; }";
}

QPalette PrideTheme::colorScheme() {
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(255, 255, 255));
    palette.setColor(QPalette::WindowText, Qt::black);
    palette.setColor(QPalette::Base, QColor(240, 240, 240));
    palette.setColor(QPalette::AlternateBase, QColor(220, 220, 220));
    palette.setColor(QPalette::Highlight, QColor(255, 105, 180)); // Hot pink
    palette.setColor(QPalette::HighlightedText, Qt::white);
    return fadeInactive(palette, fadeAmount(), fadeColor());
}

QString PrideTheme::appStyleSheet() {
    return "QMainWindow { border-top: 5px qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #ff0000, stop:0.2 #ff8000, stop:0.4 #ffff00, stop:0.6 #00ff00, stop:0.8 #0000ff, stop:1 #8000ff); } "
           "QToolTip { background-color: white; color: black; border: 1px solid pink; }";
}
