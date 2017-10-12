/*
 * File:   DothrakiArakh.h
 * Author: Cameron <pcs13@my.fsu.edu>
 *
 */

#include <string>
#include "Weapon.h"

#ifndef DOTHRAKIARAKH_H
#define DOTHRAKIARAKH_H

/**
 * Defines the behavior of a Dothraki Arakh from Game of Thrones
 * hitpoints = 15, and decreases armor by 5 with each hit.
 */
class DothrakiArakh : public Weapon {
public:

    DothrakiArakh() : Weapon("Dothraki Arakh", 15.0) {
    }
    virtual ~DothrakiArakh() {};
    virtual double hit(double armor);

};

#endif /* DOTHRAKIARAKH_H */
