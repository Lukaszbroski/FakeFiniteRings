//
// Created by Luke on 1/14/2019.
//

#ifndef FAKEFINITERING_H
#define FAKEFINITERING_H
#include <iostream>
using namespace std;

class FakeFiniteRing {
private:
    //the value of the FakeFiniteRing
    int value;
    //the order of the FakeFiniteRing
    int order;

public:

    //returns the order of the FakeFiniteRing
    int getOrder() const;

    //returns the value of the FakeFiniteRing
    int getValue() const;

    void setOrder(int ord);

    void setValue(int val);

    //Constructor for the FakeFiniteRing, Takes 2 ints for value and order
    FakeFiniteRing(int val = 0, int ord = 0);

    //Overloaded + function creating a new FakeFiniteRing adding the two sides together
    FakeFiniteRing operator + (const FakeFiniteRing &ffr) const;

    //Overloaded - function creating a new FakeFiniteRing subtracting the right from the left side
    FakeFiniteRing operator - (const FakeFiniteRing &ffr) const;

    //overloaded * function creating a new FakeFiniteRing by multiplying the rings together
    FakeFiniteRing operator * (const FakeFiniteRing &ffr) const;

    //overloaded == function that will return whether two FakeFiniteRings are congruent
    bool operator == (const FakeFiniteRing &ffr) const;

    //overloaded != function that will return true if the two FakeFiniteRings are not congruent
    bool operator != (const FakeFiniteRing &ffr) const;

    //overloaded += function that will create a new FakeFiniteRing by adding to the previous FakeFiniteRing
    FakeFiniteRing& operator += (const FakeFiniteRing &ffr);

    //overloaded -= function that will create a new FakeFiniteRing by subtracting the right from the left FakeFiniteRing
    FakeFiniteRing& operator -= (const FakeFiniteRing &ffr);

    //overloaded *= function that will create a new FakeFiniteRing by multiplying the new FakeFiniteRing by the old one
    FakeFiniteRing& operator *= (const FakeFiniteRing &ffr);

    //overloaded >> function that will input the FakeFiniteRings
    friend istream& operator >> (istream &input, FakeFiniteRing &ffr);

    //overloaded << function that will output the FakeFiniteRings to a readable format
    friend ostream& operator << (ostream &output, const FakeFiniteRing &ffr);

};


#endif //FAKEFINITERING_H
