/*
 * File:   SimpleAxe.cpp
 * Author: Cameron <pcs13@my.fsu.edu>
 *
 */

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
    double damage; 	//initialize outside if/else
    if (armor > 20) {
	    // armor works normally above 20
	    damage = hitPoints - armor;
    } else {
	    // otherwise, axe ignores armor
	    damage = hitPoints;
    }

    if (damage < 0) {
        return 0;
    }
    return damage;
}
