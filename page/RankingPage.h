#pragma once
#include "qtmetamacros.h"
#include <QWidget>
#include <QTableWidget>
#include <QPushButton>

class RankingPage : public QWidget
{
    Q_OBJECT
public:
    RankingPage(QWidget *parent = nullptr);
private:
    QPushButton *backButton;
signals:
    void backButtonClicked();
public slots:
};