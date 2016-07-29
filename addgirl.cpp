#include "addgirl.h"
#include "ui_addgirl.h"

addGirl::addGirl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addGirl)
{
    ui->setupUi(this);

    connect(ui->validate, SIGNAL(clicked()), this, SLOT(hide()));

}

addGirl::~addGirl()
{
    delete ui;
}


