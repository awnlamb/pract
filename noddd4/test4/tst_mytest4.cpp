#include <QtTest>
#include "../mynod4/nodnok.h"
// add necessary includes here

class mytest4 : public QObject
{
    Q_OBJECT

public:
    mytest4();
    ~mytest4();

private slots:
    void test_nod();
    void test_nok();
};

mytest4::mytest4() {}

mytest4::~mytest4() {}


void mytest4::test_nod()
{
    nodnok n1(19,19);
    QCOMPARE(n1.nod(),19);
    nodnok n2(45,299);
    QCOMPARE(n2.nod(),1);
    nodnok n3(6,8);
    QCOMPARE(n3.nod(),2);
    nodnok n4(7,-84);
    QCOMPARE(n4.nod(),7);
    nodnok n5(-9,-81);
    QCOMPARE(n5.nod(),-9);
}
void mytest4::test_nok()
{
    nodnok k1(19,19);
    QCOMPARE(k1.nok(),19);
    nodnok k2(2147483647,2147483646);
    QCOMPARE(k2.nok(), 2147483647);
    nodnok k3(1,10);
    QCOMPARE(k3.nok(),10);
    nodnok k4(13,45);
    QCOMPARE(k4.nok(),585);
    nodnok k5(16,-32);
    QCOMPARE(k5.nok(),16);
}


QTEST_APPLESS_MAIN(mytest4)

#include "tst_mytest4.moc"
