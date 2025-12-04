#pragma once
#include "qpushbutton.h"
#include "qtmetamacros.h"

#include <QWidget>
#include <QPushButton>

class SettingPage : public QWidget{
    Q_OBJECT
public:
    SettingPage(QWidget *parent = nullptr);

private:
    QPushButton *backButton;
signals:
    void backButtonClicked();

private slots:
};