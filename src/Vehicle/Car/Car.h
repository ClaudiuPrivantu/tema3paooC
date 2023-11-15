//
// Created by Gabriel-Claudiu Privantu on 07.11.2023.
//

#ifndef TEMA2_CAR_H
#define TEMA2_CAR_H


#include "../Vehicle.h"

namespace MyVehicles {
    class Car : public Vehicle {
    private:
        //restul membrilor sunt deja mosteniti de la clasa Vehicle
        int no_wheels;

    public:
        Car(string brand, int manufacturingYear, char *info, int no_wheels); //constructor
        ~Car(); //destructor
        Car(const Car &otherCar); //copy constructor
        Car(Car &&otherCar) noexcept; //move constructor
        Car &operator=(const Car &otherCar); //assignment operator

        //incapsulare
        void toString() override;

        //new feature
        int getNoWheels();

        void setNoWheels(int no);
    };
}


#endif //TEMA2_CAR_H
