#include "SettingPage.h"
#include "qnamespace.h"

SettingPage::SettingPage(QWidget *parent) : QWidget(parent){
    backButton = new QPushButton(tr("Back"), this);
    connect(backButton, &QPushButton::clicked, this, [this](){
        emit backButtonClicked();
    });
}