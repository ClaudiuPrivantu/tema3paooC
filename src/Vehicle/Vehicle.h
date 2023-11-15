//
// Created by Gabriel-Claudiu Privantu on 07.11.2023.
//

#ifndef TEMA2_VEHICLE_H
#define TEMA2_VEHICLE_H

#include "IVehicle.h"
#include<iostream>
#include<string>

using namespace std;

namespace MyVehicles {
    class Vehicle : public IVehicle {
    private:
        string brand;
        int manufacturingYear;
        char *info;
    public:
        Vehicle(string brand, int manufacturingYear, char *info); //constructor
        ~Vehicle(); //destructor
        Vehicle(const Vehicle &otherVehicle);//copy constructor
        Vehicle(Vehicle &&otherVehicle) noexcept; //move constructor
        Vehicle(); //constructor default - fara parametrii
        Vehicle &operator=(const Vehicle &otherVehicle); //assignment operator

        //incapsulare
        string getBrand() override;

        void setBrand(string brand) override;

        int getManufacturingYear() override;

        void setManufacturingYear(int year) override;

        void toString() override;

        void changeInfo(char *info) override;

        // implementarea pentru clone()
        std::unique_ptr<IVehicle> clone() const override {
            return std::make_unique<Vehicle>(*this);
        }
    };
}

#endif //TEMA2_VEHICLE_H
