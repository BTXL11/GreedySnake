#pragma once

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QLayout>
#include <QDir>
#include <QMainWindow>

class GameOverDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GameOverDialog(QWidget *parent = nullptr);

private:
    void initUI();
    void initConnect();
    
    QLabel *imageLabel;
    QPushButton *exitBtn;
    QPushButton *restartBtn;
    QVBoxLayout *mainLayout;

signals:
    void restartGame();
    void exitGame();

public slots:

};