#include "ui_mainwindow.h"
#include "clickable_label.h"
#include <string>
#include <QApplication>
#include <QtWidgets>



myLabel::myLabel(QWidget *parent):QLabel(parent)
{
    connect( this, SIGNAL( clicked() ), this, SLOT(select_pic()) );
}

void myLabel::slotClicked()
{
    qDebug()<<"Clicked";
}

void myLabel::mousePressEvent ( QMouseEvent * event )
{
    emit clicked();
}

void myLabel::select_pic()
    {
        QString path = QFileDialog::getOpenFileName(this, tr("Choix de l'image à insérer"), "", "Image (*.jpg *.jpeg *.png *.gif)");
        if ( path.isNull() == false )
            {
                qDebug()<<path;
                qImage = new QPixmap(path);
                QPixmap qImage2 = qImage->scaled(this->width(),this->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation);

                this->setPixmap(qImage2);

                qImage2.save(QCoreApplication::applicationDirPath() + "/123.png");
                qDebug()<<QCoreApplication::applicationDirPath();

            }
    }
