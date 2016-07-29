#ifndef CLICKABLE_LABEL_H
#define CLICKABLE_LABEL_H

#include <QMainWindow>
#include <QtGui>
#include <QLabel>

#include <string>

class myLabel : public QLabel
{
    Q_OBJECT
public:
    myLabel(QWidget *parent);
    ~myLabel(){}

signals:
    void clicked();

public slots:
    void slotClicked();
    void select_pic();

protected:
    void mousePressEvent ( QMouseEvent * event ) ;

private :
    QPixmap *qImage;

};


#endif // CLICKABLE_LABEL_H
