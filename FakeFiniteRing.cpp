//
// Created by Luke on 1/14/2019.
//

#ifndef FAKEFINITERINGs_FAKEFINITERING_H
#define FAKEFINITERINGs_FAKEFINITERING_H


class FakeFiniteRing {
public:
    int value;
    int order;
    int getOrder();
    int getValue();
    FakeFiniteRing(int val, int ord);
    add(int addedVal);
    subtract(int valSubtracted);
    multiply(int valMultiplied);
    bool compareTo(FakeFiniteRing ring2);
};



#endif //FAKEFINITERINGs_FAKEFINITERING_H