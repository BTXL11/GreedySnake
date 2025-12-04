#include "RankingPage.h"

RankingPage::RankingPage(QWidget *parent) : QWidget(parent){
    backButton = new QPushButton("Back", this);
    connect(backButton, &QPushButton::clicked, this, [this](){
        emit backButtonClicked();
    });
}