//
// Created by Gabriel-Claudiu Privantu on 14.11.2023.
//

#ifndef TEMA2_VEHICLESCOLLECTION_H
#define TEMA2_VEHICLESCOLLECTION_H

#include <vector>
#include <list>
#include <deque>
#include "../Vehicle/Vehicle.h"

namespace MyVehicles {
    class VehiclesCollection {
    private:
        std::vector<Vehicle> vehicles; // Array de vehicule
        std::list<Vehicle> vehiclesList; // Lista de vehicule
        std::deque<Vehicle> vehiclesDeque; // Deque de vehicule

    public:
        void addVehicle(const Vehicle& vehicle);
        void printVehiclesFromArray() const;
        void printVehiclesFromList() const;
        void printVehiclesFromDeque() const;
        Vehicle findVehicleInArray(const std::string& brand) const;
        Vehicle findVehicleInList(const std::string& brand) const;
        Vehicle findVehicleInDeque(const std::string& brand) const;
    };
}

#endif //TEMA2_VEHICLESCOLLECTION_H
