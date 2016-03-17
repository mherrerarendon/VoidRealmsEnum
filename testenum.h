#ifndef TESTENUM_H
#define TESTENUM_H

#include <QObject>
#include <QMetaEnum>
#include <QDebug>

class testEnum : public QObject
{
    Q_OBJECT
    Q_ENUMS(Tests)
public:
    explicit testEnum(QObject *parent = 0);

    enum Tests
    {
        TEST1,
        TEST2,
        TEST3
    };

signals:

public slots:
    void DoTest(QString Command);
};

#endif // TESTENUM_H
