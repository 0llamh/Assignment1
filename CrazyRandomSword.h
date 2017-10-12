/*
 * File:   SimpleAxe.h
 * Author: Cameron <pcs13@my.fsu.edu>
 *
 */

#include <string>
#include <stdlib.h>		// for rand()
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a Simple axe (hitpoints = random number 10-100,
 * Ignores a random amount of integer armor points, ranging from to 0 to half of the armor the weapon hits.
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", 10.0) {
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */
