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
    void test_nod_1();
    void test_nod_2();
    void test_nod_3();
    void test_nod_4();
    void test_nod_5();
    void test_nok_1();
    void test_nok_2();
    void test_nok_3();
    void test_nok_4();
    void test_nok_5();
};

mytest4::mytest4() {}

mytest4::~mytest4() {}


void mytest4::test_nod_1()
{
    nodnok n1(19,19);
    QCOMPARE(n1.nod(),19);
    /*nodnok n1(19,19);
    QCOMPARE(n1.nod(),19);
    nodnok n2(45,299);
    QCOMPARE(n2.nod(),1);
    nodnok n3(6,8);
    QCOMPARE(n3.nod(),2);*/
    /*nodnok n4(7,-84);
    QCOMPARE(n4.nod(),7);*/
    /*nodnok n5(-9,-81);
    QCOMPARE(n5.nod(),-9);*/
}
void mytest4::test_nod_2()
{
    nodnok n2(45,225);
    QCOMPARE(n2.nod(),45);
}
void mytest4::test_nod_3()
{
    nodnok n3(6,8);
    QCOMPARE(n3.nod(),2);
}
void mytest4::test_nod_4()
{
    nodnok n4(7,-84);
    QCOMPARE(n4.nod(),7);
}
void mytest4::test_nod_5()
{
    nodnok n5(-9,-81);
    QCOMPARE(n5.nod(),9);
}
void mytest4::test_nok_1()
{
    nodnok k1(19,19);
    QCOMPARE(k1.nok(),19);
    /*nodnok k2(2147483647,2147483646);
    QCOMPARE(k2.nok(), -2147483646);
    nodnok k3(1,10);
    QCOMPARE(k3.nok(),10);
    nodnok k4(13,45);
    QCOMPARE(k4.nok(),585);
    nodnok k5(16,-32);
    QCOMPARE(k5.nok(),16);*/
}

void mytest4::test_nok_2()
{
    nodnok k2(2147483647,2147483646);
    QCOMPARE(k2.nok(), -2147483646);
}
void mytest4::test_nok_3()
{
    nodnok k3(1,10);
    QCOMPARE(k3.nok(),10);
}
void mytest4::test_nok_4()
{
    nodnok k4(13,45);
    QCOMPARE(k4.nok(),585);
}
void mytest4::test_nok_5()
{
    nodnok k5(16,-32);
    QCOMPARE(k5.nok(),32);
}
QTEST_APPLESS_MAIN(mytest4)

#include "tst_mytest4.moc"
