#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"

class Weapon : public Item{
public:
    Weapon(string description, int weightGrams = 1, float value = 1.0,
           float damage = 1.0, int durability = 1);

private:
    float damage;
    int durability;

};


#endif // WEAPON_H
