#include "CDbrews.h"

Milk::Milk(Beverage *b) : CondimentDecorator (b) {

}

double Milk::cost() {
    return 15.0 + beverage->cost();
}

QString Milk::getDescription() {
    return beverage->getDescription() + ", Milk";
}

Mocha::Mocha(Beverage *b) : CondimentDecorator (b) {

}

double Mocha::cost() {
    return 25.0 + beverage->cost();
}

QString Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}

Whip::Whip(Beverage *b) : CondimentDecorator (b) {

}

double Whip::cost() {
    return 100.0 + beverage->cost();
}

QString Whip::getDescription() {
    return beverage->getDescription() + ", Whip";
}

Soy::Soy(Beverage *b) : CondimentDecorator (b) {

}

double Soy::cost() {
    return 666 + beverage->cost();
}

QString Soy::getDescription() {
    return beverage->getDescription() + ", SOY";
}
