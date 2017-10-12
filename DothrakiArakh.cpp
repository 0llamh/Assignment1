/*
 * File:   DothrakiArakh.cpp
 * Author: Cameron <pcs13@my.fsu.edu>
 *
 */

#include "DothrakiArakh.h"

double DothrakiArakh::hit(double armor) {
    double damage = hitPoints - armor;
    armor -= 5.0;

    if (damage < 0) {
        return 0;
    }
    return damage;
}
