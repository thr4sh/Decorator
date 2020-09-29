#include "brews.h"

DarkRoast::DarkRoast() {
    this->descrition = "Dark Roast Coffee";
}

double DarkRoast::cost() {
    return 140.0;
}

HouseBlend::HouseBlend()
{
    this->descrition = "Tap-water-flavored coffe";
}

double HouseBlend::cost()
{
    return 55.f;
}

Espresso::Espresso()
{
    this->descrition = "Fast coffe?";
}

double Espresso::cost()
{
    return 55.f;
}

Decaf::Decaf()
{
    this->descrition = "I dont know what it is";
}

double Decaf::cost()
{
    return 55.f;
}
