/*
 * File:   SimpleAxe.cpp
 * Author: Cameron <pcs13@my.fsu.edu>
 *
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
    damage = rand() % 90 + hitPoints; 	// hitPoints = 10; random damage between 10 and 100
    damage -= rand() % (armor/2);	// decreast damage by a random number between 0 and half the armor

    if (damage < 0) {
        return 0;
    }
    return damage;
}
