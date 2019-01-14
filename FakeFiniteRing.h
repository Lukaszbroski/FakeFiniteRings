//
// Created by Luke on 1/14/2019.
//

#ifndef FAKEFINITERINGS_FAKEFINITERING_H
#define FAKEFINITERINGS_FAKEFINITERING_H




class FakeFiniteRing {
public:
    int value;
    int order;
    int getOrder();
    int getValue();
    FakeFiniteRing(int val, int ord);
    FakeFiniteRing add(int addedVal);
    FakeFiniteRing subtract(int valSubtracted);
    FakeFiniteRing multiply(int valMultiplied);
    bool compareTo(FakeFiniteRing ring2);
};



#endif //FAKEFINITERINGS_FAKEFINITERING_H
