ifndef MAIN_H
#define MAIN_H

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class mainData;

class main
{
public:
    main();
    main(const main &);
    main &operator=(const main &);
    ~main();

private:
    QSharedDataPointer<mainData> data;
};

#endif // MAIN_H
