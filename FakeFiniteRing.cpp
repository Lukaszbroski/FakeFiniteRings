//
// Created by Luke on 1/14/2019.
//

#ifndef FAKEFINITERINGs_FAKEFINITERING_H
#define FAKEFINITERINGs_FAKEFINITERING_H
#import "iostream"
#include "FakeFiniteRing.h"
#include <iostream>


//Returns the order of the FakeFiniteRing
const int FakeFiniteRing::getOrder() {
    return order;
}

//returns the value of the FakeFiniteRing
const int FakeFiniteRing::getValue() {
    return value;
}

//Constructor for a FakeFiniteRing that takes in two integers for value and order
FakeFiniteRing::FakeFiniteRing(int val, int ord) {
    value = val % ord;
    order = ord;
}

//Overloaded + function creating a new FakeFiniteRing adding the two sides together
FakeFiniteRing FakeFiniteRing::operator+(const FakeFiniteRing& left, const FakeFiniteRing& right)  {
    if (left.getOrder() == right.getOrder()) {
        return FakeFiniteRing((left.getValue() + right.getValue()) % left.getOrder(), left.getOrder());
    } else throw std::invalid_argument("bad order");
}

//Overloaded - function creating a new FakeFiniteRing subtracting the right from the left side
FakeFiniteRing FakeFiniteRing::operator-(const FakeFiniteRing& left, const FakeFiniteRing& right) const {
    if (left.getOrder() == right.getOrder()) {
        return FakeFiniteRing((left.getValue() - right.getValue()) % left.getOrder(), left.getOrder());
    } else throw std::invalid_argument("bad order");
}

//overloaded * function creating a new FakeFiniteRing by multiplying the rings together
FakeFiniteRing FakeFiniteRing::operator*(const FakeFiniteRing* left, const FakeFiniteRing& right) const {
    if (left.getOrder() == right.getOrder()) {
        return FakeFiniteRing((left.getValue() * right.getValue()) % left.getOrder(), left.getOrder());
    } else throw std::invalid_argument("bad order");
}

//overloaded == function that will return whether two FakeFiniteRings are congruent
bool operator==(const FakeFiniteRing& left, const FakeFiniteRing& right)  {
    if (left.getOrder() == right.getOrder() && left.getValue() = right.getValue()) {
        return true;
    } else return false;
}

//overloaded != function that will return true if the two FakeFiniteRings are not congruent
bool operator!=(const FakeFiniteRing &left, const FakeFiniteRing &right) const {
    if (left.getOrder() != right.getOrder() || left.getValue() != right.getValue()) {
        return true;
    } else return false;
}

//overloaded += function that will create a new FakeFiniteRing by adding to the previous FakeFiniteRing
FakeFiniteRing operator+=(const FakeFiniteRing &left, const FakeFiniteRing &right) {
    return left + right;
}

//overloaded -= function that will create a new FakeFiniteRing by subtracting the right from the left FakeFiniteRing
FakeFiniteRing operator-=(const FakeFiniteRing &left, const FakeFiniteRing &right) {
    return left - right;
}

//overloaded *= function that will create a new FakeFiniteRing by multiplying the new FakeFiniteRing by the old one
FakeFiniteRing operator*=(const FakeFiniteRing &left, const FakeFiniteRing &right) {
    return left * right;
}

//overloaded = function that will create a new FakeFiniteRing with a shortcut instead of calling a constructor
FakeFiniteRing &operator=(const FakeFiniteRing &ring) {
    return FakeFiniteRing(&ring.getValue(), &ring.getOrder())
}

//overloaded >> function that will input the FakeFiniteRings
istream &operator>>(istream &input, FakeFiniteRing ring) {

}

//overloaded << function that will output the FakeFiniteRings to a readable format
ostream &operator<<(ostream &output const FakeFiniteRing ring) {

}


#endif //FAKEFINITERINGs_FAKEFINITERING_H