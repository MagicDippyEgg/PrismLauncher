// SPDX-License-Identifier: GPL-3.0-only
/*
 *  Prism Launcher - Minecraft Launcher
 *  Copyright (C) 2024 Tayou <git@tayou.org>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#include "CyberpunkTheme.h"

#include <QObject>

QString CyberpunkTheme::id()
{
    return "cyberpunk";
}

QString CyberpunkTheme::name()
{
    return QObject::tr("Cyberpunk");
}

QPalette CyberpunkTheme::colorScheme()
{
    QPalette cyberpunkPalette;
    QColor black(0, 0, 0);
    QColor darkGrey(20, 20, 20);
    QColor neonCyan(0, 255, 255);
    QColor neonMagenta(255, 0, 255);

    cyberpunkPalette.setColor(QPalette::Window, darkGrey);
    cyberpunkPalette.setColor(QPalette::WindowText, neonCyan);
    cyberpunkPalette.setColor(QPalette::Base, black);
    cyberpunkPalette.setColor(QPalette::AlternateBase, darkGrey);
    cyberpunkPalette.setColor(QPalette::ToolTipBase, black);
    cyberpunkPalette.setColor(QPalette::ToolTipText, neonMagenta);
    cyberpunkPalette.setColor(QPalette::Text, neonCyan);
    cyberpunkPalette.setColor(QPalette::Button, darkGrey);
    cyberpunkPalette.setColor(QPalette::ButtonText, neonMagenta);
    cyberpunkPalette.setColor(QPalette::BrightText, Qt::red);
    cyberpunkPalette.setColor(QPalette::Link, neonMagenta);
    cyberpunkPalette.setColor(QPalette::Highlight, neonCyan);
    cyberpunkPalette.setColor(QPalette::HighlightedText, black);
    cyberpunkPalette.setColor(QPalette::PlaceholderText, Qt::darkCyan);

    return fadeInactive(cyberpunkPalette, fadeAmount(), fadeColor());
}

double CyberpunkTheme::fadeAmount()
{
    return 0.5;
}

QColor CyberpunkTheme::fadeColor()
{
    return QColor(0, 0, 0);
}

bool CyberpunkTheme::hasStyleSheet()
{
    return true;
}

QString CyberpunkTheme::appStyleSheet()
{
    return "QToolTip { color: #ff00ff; background-color: #000000; border: 1px solid #00ffff; } "
           "QProgressBar { border: 1px solid #00ffff; border-radius: 5px; text-align: center; } "
           "QProgressBar::chunk { background-color: #00ffff; }";
}

QString CyberpunkTheme::tooltip()
{
    return QObject::tr("Neon cyan and magenta theme.");
}
