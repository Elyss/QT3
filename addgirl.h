#ifndef ADDGIRL_H
#define ADDGIRL_H

#include <QWidget>

namespace Ui {
class addGirl;
}

class addGirl : public QWidget
{
    Q_OBJECT

public:
    explicit addGirl(QWidget *parent = 0);
    ~addGirl();

private:
    Ui::addGirl *ui;
};

#endif // ADDGIRL_H
