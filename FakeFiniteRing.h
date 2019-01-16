//
// Created by Luke on 1/14/2019.
//

#ifndef FAKEFINITERING_H
#define FAKEFINITERING_H
#include <iostream>


class FakeFiniteRing {
public:
    //the value of the FakeFiniteRing
    int value = 0;
    //the order of the FakeFiniteRing
    int order = 0;

    //returns the order of the FakeFiniteRing
    const int getOrder();

    //returns the value of the FakeFiniteRing
    const int getValue();

    void setOrder();

    void setValue();

    //Constructor for the FakeFiniteRing, Takes 2 ints for value and order
    FakeFiniteRing(int val, int ord);

    friend bool compareTo(FakeFiniteRing ring2);

    //Overloaded + function creating a new FakeFiniteRing adding the two sides together
    friend FakeFiniteRing operator+(const FakeFiniteRing &left, const FakeFiniteRing &right);

    //Overloaded - function creating a new FakeFiniteRing subtracting the right from the left side
    friend FakeFiniteRing operator-(const FakeFiniteRing &left, const FakeFiniteRing &right);

    //overloaded * function creating a new FakeFiniteRing by multiplying the rings together
    friend FakeFiniteRing operator*(const FakeFiniteRing &left, const FakeFiniteRing &right);

    //overloaded == function that will return whether two FakeFiniteRings are congruent
    friend bool operator==(const FakeFiniteRing &left, const FakeFiniteRing &right);

    //overloaded != function that will return true if the two FakeFiniteRings are not congruent
    friend bool operator!=(const FakeFiniteRing &left, const FakeFiniteRing &right);

    //overloaded += function that will create a new FakeFiniteRing by adding to the previous FakeFiniteRing
    friend FakeFiniteRing operator+=(const FakeFiniteRing &left, const FakeFiniteRing &right);

    //overloaded -= function that will create a new FakeFiniteRing by subtracting the right from the left FakeFiniteRing
    friend FakeFiniteRing operator-=(const FakeFiniteRing &left, const FakeFiniteRing &right);

    //overloaded *= function that will create a new FakeFiniteRing by multiplying the new FakeFiniteRing by the old one
    friend FakeFiniteRing operator*=(const FakeFiniteRing &left, const FakeFiniteRing &right);

    //overloaded = function that will create a new FakeFiniteRing with a shortcut instead of calling a constructor
    friend FakeFiniteRing &operator=(const FakeFiniteRing &ring) = delete;

    //overloaded >> function that will input the FakeFiniteRings
    friend istream &operator>>(istream &input, FakeFiniteRing &ring);

    //overloaded << function that will output the FakeFiniteRings to a readable format
    friend ostream &operator<<(ostream &output const FakeFiniteRing &ring);

};


#endif //FAKEFINITERING_H
