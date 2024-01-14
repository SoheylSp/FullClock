#ifndef CORNOMETER_H
#define CORNOMETER_H

#include <QObject>
#include <QTimer>
#include <QQmlContext>

class Cornometer : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int counter READ counter WRITE setCounter NOTIFY counterChanged)


public:
    explicit Cornometer(QObject *parent = nullptr);

int counter() const;

void setCounter(int counter);

void updateSlot() ;

Q_INVOKABLE void start() ;
Q_INVOKABLE void stop() ;
Q_INVOKABLE void reset() ;


signals:

void counterChanged(int counter);


private:
int m_counter;
QTimer *m_timer ;
};

#endif // CORNOMETER_H
