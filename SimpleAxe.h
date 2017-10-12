/*
 * File:   SimpleAxe.h
 * Author: Cameron <pcs13@my.fsu.edu>
 *
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a Simple axe (hitpoints = 60, If armor is greater than 0 and less than 20,
the axe will ignore all the armor points.)
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple Axe", 60.0) {
    }
    virtual ~SimpleAxe() {};
    virtual double hit(double armor);

};

#endif /* SIMPLEAXE_H */
