#ifndef MILK_H
#define MILK_H

#include "beverage.h"
#include "condimentdecorator.h"

class Milk : public CondimentDecorator {
public:
    Milk(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

class Mocha : public CondimentDecorator {
public:
    Mocha(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

class Whip : public CondimentDecorator {
public:
    Whip(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};

class Soy : public CondimentDecorator {
public:
    Soy(Beverage*);
    virtual double cost();
    virtual QString getDescription();
};


#endif // MILK_H
