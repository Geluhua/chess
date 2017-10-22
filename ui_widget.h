/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumberTime;
    QLCDNumber *lcdNumberBlack;
    QLCDNumber *lcdNumberWhite;
    QToolButton *toolButtonBegin;
    QToolButton *toolButton_2;
    QLabel *labelBlack;
    QLabel *labelWhite;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1000, 600);
        Widget->setMinimumSize(QSize(1000, 600));
        Widget->setMaximumSize(QSize(1000, 600));
        lcdNumberTime = new QLCDNumber(Widget);
        lcdNumberTime->setObjectName(QStringLiteral("lcdNumberTime"));
        lcdNumberTime->setGeometry(QRect(410, 20, 61, 41));
        QPalette palette;
        QBrush brush(QColor(0, 85, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lcdNumberTime->setPalette(palette);
        lcdNumberTime->setFrameShape(QFrame::NoFrame);
        lcdNumberTime->setDigitCount(2);
        lcdNumberBlack = new QLCDNumber(Widget);
        lcdNumberBlack->setObjectName(QStringLiteral("lcdNumberBlack"));
        lcdNumberBlack->setGeometry(QRect(50, 110, 71, 41));
        lcdNumberBlack->setFrameShape(QFrame::NoFrame);
        lcdNumberBlack->setDigitCount(2);
        lcdNumberWhite = new QLCDNumber(Widget);
        lcdNumberWhite->setObjectName(QStringLiteral("lcdNumberWhite"));
        lcdNumberWhite->setGeometry(QRect(820, 120, 71, 41));
        lcdNumberWhite->setFrameShape(QFrame::NoFrame);
        lcdNumberWhite->setDigitCount(2);
        toolButtonBegin = new QToolButton(Widget);
        toolButtonBegin->setObjectName(QStringLiteral("toolButtonBegin"));
        toolButtonBegin->setGeometry(QRect(190, 560, 131, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Image/begin.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonBegin->setIcon(icon);
        toolButtonBegin->setIconSize(QSize(200, 200));
        toolButtonBegin->setAutoRaise(true);
        toolButton_2 = new QToolButton(Widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(590, 560, 131, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Image/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon1);
        toolButton_2->setIconSize(QSize(200, 200));
        toolButton_2->setAutoRaise(true);
        labelBlack = new QLabel(Widget);
        labelBlack->setObjectName(QStringLiteral("labelBlack"));
        labelBlack->setGeometry(QRect(70, 50, 51, 51));
        labelBlack->setPixmap(QPixmap(QString::fromUtf8(":/Image/black.png")));
        labelBlack->setScaledContents(true);
        labelWhite = new QLabel(Widget);
        labelWhite->setObjectName(QStringLiteral("labelWhite"));
        labelWhite->setGeometry(QRect(840, 60, 51, 51));
        labelWhite->setPixmap(QPixmap(QString::fromUtf8(":/Image/white.png")));
        labelWhite->setScaledContents(true);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        toolButtonBegin->setText(QString());
        toolButton_2->setText(QString());
        labelBlack->setText(QString());
        labelWhite->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
