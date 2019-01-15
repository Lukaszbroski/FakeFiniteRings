//
// Created by Luke on 1/14/2019.
//

#ifndef FAKEFINITERINGS_FAKEFINITERING_H
#define FAKEFINITERINGS_FAKEFINITERING_H




class FakeFiniteRing {
public:
    //the value of the FakeFiniteRing
    int value;
    //the order of the FakeFiniteRing
    int order;
    //returns the order of the FakeFiniteRing
    int getOrder();
    //returns the value of the FakeFiniteRing
    int getValue();
    //Constructor for the FakeFiniteRing, Takes 2 ints for value and order
    FakeFiniteRing(int val, int ord);
    bool compareTo(FakeFiniteRing ring2);
    //Overloaded + function creating a new FakeFiniteRing adding the two sides together
    FakeFiniteRing operator+(const FakeFiniteRing& left, const FakeFiniteRing& right);
    //Overloaded - function creating a new FakeFiniteRing subtracting the right from the left side
    FakeFiniteRing operator-(const FakeFiniteRing& left, const FakeFiniteRing& right);
    //overloaded * function creating a new FakeFiniteRing by multiplying the rings together
    FakeFiniteRing operator*(const FakeFiniteRing& left, const FakeFiniteRing& right);
    //overloaded == function that will return whether two FakeFiniteRings are congruent
    bool operator==(const FakeFiniteRing& left, const FakeFiniteRing& right);
    //overloaded != function that will return true if the two FakeFiniteRings are not congruent
    bool operator!=(const FakeFiniteRing& left, const FakeFiniteRing& right);
    //overloaded += function that will create a new FakeFiniteRing by adding to the previous FakeFiniteRing
    FakeFiniteRing operator+=(const FakeFiniteRing& left, const FakeFiniteRing& right);
    //overloaded -= function that will create a new FakeFiniteRing by subtracting the right from the left FakeFiniteRing
    FakeFiniteRing operator-=(const FakeFiniteRing& left, const FakeFiniteRing& right);
    //overloaded *= function that will create a new FakeFiniteRing by multiplying the new FakeFiniteRing by the old one
    FakeFiniteRing operator*=(const FakeFiniteRing& left, const FakeFiniteRing& right);
    //overloaded = function that will create a new FakeFiniteRing with a shortcut instead of calling a constructor
    FakeFiniteRing& operator= (const FakeFiniteRing &ring) = delete;
    //overloaded >> function that will input the FakeFiniteRings
    istream& operator >> (istream input, FakeFiniteRing& ring);
    //overloaded << function that will output the FakeFiniteRings to a readable format
    ostream& operator << (ostream& output const FakeFiniteRing& ring);

};



#endif //FAKEFINITERINGS_FAKEFINITERING_H
