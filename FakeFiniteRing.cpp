//
// Created by Luke on 1/14/2019.
//

#ifndef FAKEFINITERINGs_FAKEFINITERING_H
#define FAKEFINITERINGs_FAKEFINITERING_H
#include "FakeFiniteRing.h"
#include <iostream>


//Returns the order of the FakeFiniteRing
int FakeFiniteRing::getOrder() const {
    return order;
}

//returns the value of the FakeFiniteRing
int FakeFiniteRing::getValue() const {
    return value;
}

//sets the value of order in a FakeFiniteRing
void FakeFiniteRing::setOrder(int ord) {
    order = ord;
}

//sets the value of value in a FakeFiniteRing
void FakeFiniteRing::setValue(int val) {
    value = val;
}

//Constructor for a FakeFiniteRing that takes in two integers for value and order
FakeFiniteRing::FakeFiniteRing(int val, int ord) {
    value = val % ord;
    order = ord;
}

//Overloaded + function creating a new FakeFiniteRing adding the two sides together
FakeFiniteRing FakeFiniteRing::operator + (const FakeFiniteRing &ffr) const {
    FakeFiniteRing newffr(value, order);
    if (newffr.getOrder() == ffr.getOrder()) {
        return FakeFiniteRing((newffr.getValue() + ffr.getValue()) % newffr.getOrder(), newffr.getOrder());
    } else throw std::invalid_argument("bad order");
}

//Overloaded - function creating a new FakeFiniteRing subtracting the right from the left side
FakeFiniteRing FakeFiniteRing::operator - (const FakeFiniteRing &ffr) const {
    FakeFiniteRing newffr(value, order);
    if (newffr.getOrder() == ffr.getOrder()) {
        return FakeFiniteRing((newffr.getValue() - ffr.getValue()) % newffr.getOrder(), newffr.getOrder());
    } else throw std::invalid_argument("bad order");
}

//overloaded * function creating a new FakeFiniteRing by multiplying the rings together
FakeFiniteRing FakeFiniteRing::operator * (const FakeFiniteRing &ffr) const {
    FakeFiniteRing newffr(value, order);
    if (newffr.getOrder() == ffr.getOrder()) {
        return FakeFiniteRing((newffr.getValue() * ffr.getValue()) % newffr.getOrder(), ffr.getOrder());
    } else throw std::invalid_argument("bad order");
}

//overloaded == function that will return whether two FakeFiniteRings are congruent
bool FakeFiniteRing::operator == (const FakeFiniteRing &ffr) const {
    if (order == ffr.getOrder()) {
        return ffr.getOrder() == order && ffr.getValue() == value;
    }
    else throw std::invalid_argument("bad order");
}

//overloaded != function that will return true if the two FakeFiniteRings are not congruent
bool FakeFiniteRing::operator != (const FakeFiniteRing &ffr) const {
    if (order == ffr.getOrder()) {
        return !operator==(ffr);
    }
    else throw std::invalid_argument("bad order");
}

//overloaded += function that will create a new FakeFiniteRing by adding to the previous FakeFiniteRing
FakeFiniteRing& FakeFiniteRing::operator += (const FakeFiniteRing &ffr) {
    FakeFiniteRing newffr = *this;
    *this = newffr + ffr;
    return *this;
}

//overloaded -= function that will create a new FakeFiniteRing by subtracting the right from the left FakeFiniteRing
FakeFiniteRing& FakeFiniteRing::operator -= (const FakeFiniteRing &ffr) {
    FakeFiniteRing newffr = *this;
    *this = newffr - ffr;
    return *this;
}

//overloaded *= function that will create a new FakeFiniteRing by multiplying the new FakeFiniteRing by the old one
FakeFiniteRing& FakeFiniteRing::operator *= (const FakeFiniteRing &ffr) {
    FakeFiniteRing newffr = *this;
    *this = newffr * ffr;
    return *this;
}


//overloaded >> function that will input the FakeFiniteRings
istream& operator >> (istream &input, FakeFiniteRing &ffr) {
    int val, ord;
    input >> val;
    input >> ord;
    ffr.setValue(val);
    ffr.setOrder(ord);
    return input;
}

//overloaded << function that will output the FakeFiniteRings to a readable format
ostream& operator << (ostream &output, const FakeFiniteRing &ffr) {
    output << "(value = " << ffr.getValue() << ", order = " << ffr.getOrder() << ")" << endl;
    return output;
}


#endif //FAKEFINITERINGs_FAKEFINITERING_H