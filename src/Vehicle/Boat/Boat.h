//
// Created by Gabriel-Claudiu Privantu on 07.11.2023.
//

#ifndef TEMA2_BOAT_H
#define TEMA2_BOAT_H


#include "../Vehicle.h"

namespace MyVehicles {
    class Boat : public Vehicle {
    private:
        //restul membrilor sunt deja mosteniti de la clasa Vehicle
        int no_anchors;

    public:
        Boat(string brand, int manufacturingYear, char *info, int no_anchors); //constructor
        ~Boat(); //destructor
        Boat(const Boat &otherBoat); //copy constructor
        Boat(Boat &&otherBoat) noexcept; //move constructor
        Boat &operator=(const Boat &otherBoat); //assignment operator

        //incapsulare
        void toString() override;

        //new feature
        int getNoAnchors();

        void setNoAnchors(int no);
    };
}


#endif //TEMA2_BOAT_H
