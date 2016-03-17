#include "testenum.h"

testEnum::testEnum(QObject *parent) : QObject(parent)
{

}

void testEnum::DoTest(QString Command)
{
    QMetaObject metaObject = this->staticMetaObject;
    QMetaEnum metaEnum = metaObject.enumerator(metaObject.indexOfEnumerator("Tests"));

    swith(metaEnum.keysToValue(Command.toLatin1()))
    {
        case TEST1:
            qDebug() << "Do something for test 1";
            break;

        case TEST2:
            qDebug() << "Do something for test 2";
            break;

        case TEST3:
            qDebug() << "Do something for test 3";
            break;
        default:
            qDebut() << "Unkown command";
            break;
    }
}
