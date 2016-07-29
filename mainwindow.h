#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QLabel>

#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



public slots:
    void calculer();
    void displayConsole();
    void disdebug();
    void goAddGirl();



private:
    Ui::MainWindow *ui;

QPixmap *qImage;

};

#endif // MAINWINDOW_H
