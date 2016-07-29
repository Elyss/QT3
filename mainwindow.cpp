#include "clickable_label.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addgirl.h"

#include <string>
#include <QApplication>
#include <QtWidgets>

using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->calculer, SIGNAL(pressed()), this, SLOT(calculer()));

    connect(ui->consInput, SIGNAL(cursorPositionChanged()), this, SLOT(displayConsole()));
    connect(ui->addGirl, SIGNAL(clicked()), this, SLOT(goAddGirl()));



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::calculer()
{
    int result(0);

    QString operateur = ui->operateur->currentText();
    QString plus = "+";

    if((operateur == plus))
    {
        result = int (ui->nb1->value()) + int(ui->nb2->value());
    }

    else if((operateur == "-"))
    {
        result = int (ui->nb1->value()) - int(ui->nb2->value());
    }


    ui->resultat->setNum(result);
}


void MainWindow::displayConsole()
    {
        QString qText = ui->consInput->toPlainText();
        ui->disCons->setText(qText);

        qImage = new QPixmap(qText + ".png");
        QPixmap qImage2 = qImage->scaled(ui->imageDis->width(),ui->imageDis->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation);

        ui->imageDis->setPixmap(qImage2);
    }

void MainWindow::disdebug()
    {
        qDebug()<<"test";
    }

void MainWindow::goAddGirl()
    {
        addGirl *form = new addGirl;
        form->show();
        qDebug()<<"test";
    }

