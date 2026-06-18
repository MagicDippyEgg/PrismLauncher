// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <QObject>
#include "FusionTheme.h"

class MidnightTheme : public FusionTheme {
   public:
    virtual ~MidnightTheme() {}
    QString id() override { return "midnight"; }
    QString name() override { return QObject::tr("Midnight"); }
    QString tooltip() override { return QObject::tr("Pure black theme for OLED screens."); }
    bool hasStyleSheet() override { return false; }
    QString appStyleSheet() override { return QString(); }
    QPalette colorScheme() override;
    double fadeAmount() override { return 0.5; }
    QColor fadeColor() override { return Qt::black; }
};

class MatrixTheme : public FusionTheme {
   public:
    virtual ~MatrixTheme() {}
    QString id() override { return "matrix"; }
    QString name() override { return QObject::tr("Matrix"); }
    QString tooltip() override { return QObject::tr("Digital rain inspired theme."); }
    bool hasStyleSheet() override { return true; }
    QString appStyleSheet() override;
    QPalette colorScheme() override;
    double fadeAmount() override { return 0.5; }
    QColor fadeColor() override { return Qt::black; }
};

class MinecraftTheme : public FusionTheme {
   public:
    virtual ~MinecraftTheme() {}
    QString id() override { return "minecraft"; }
    QString name() override { return QObject::tr("Minecraft"); }
    QString tooltip() override { return QObject::tr("Dirt and grass inspired theme."); }
    bool hasStyleSheet() override { return true; }
    QString appStyleSheet() override;
    QPalette colorScheme() override;
    double fadeAmount() override { return 0.5; }
    QColor fadeColor() override { return QColor(139, 69, 19); }
};

class PrideTheme : public FusionTheme {
   public:
    virtual ~PrideTheme() {}
    QString id() override { return "pride"; }
    QString name() override { return QObject::tr("Pride"); }
    QString tooltip() override { return QObject::tr("Colorful rainbow theme."); }
    bool hasStyleSheet() override { return true; }
    QString appStyleSheet() override;
    QPalette colorScheme() override;
    double fadeAmount() override { return 0.5; }
    QColor fadeColor() override { return Qt::white; }
};
