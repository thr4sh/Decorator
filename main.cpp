#include <QCoreApplication>
#include <iostream>
#include "brews.h"
#include "CDbrews.h"


using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Beverage *beverage1 = new HouseBlend();
    //cout << beverage1->getDescription().toStdString() << " " << beverage1->cost() << "p." << endl;

    Beverage *beverage2 = new DarkRoast();
    beverage2 = new Milk(beverage2);
    beverage2 = new Mocha(beverage2);

    cout << beverage2->getDescription().toStdString()
         << " " << beverage2->cost() << "p." << endl;

    Beverage *bv3 = new Espresso();
    bv3 = new Soy(bv3);
    bv3 = new Milk(bv3);
    bv3 = new Whip(bv3);


    cout <<  bv3->getDescription().toStdString()
          <<  " " << bv3->cost() << "p." << endl;



    return a.exec();
}
