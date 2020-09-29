#ifndef DARKROAST_H
#define DARKROAST_H

#include "beverage.h"

class DarkRoast : public Beverage {
public:
    DarkRoast();
    virtual double cost();
};

class HouseBlend : public Beverage {
public:
    HouseBlend();
    virtual double cost();
};

class Espresso : public Beverage
{
public:
    Espresso();
    virtual double cost();
};

class Decaf : public Beverage {
public:
    Decaf();
    virtual double cost();
};


#endif // DARKROAST_H
