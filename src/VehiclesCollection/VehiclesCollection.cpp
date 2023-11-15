//
// Created by Gabriel-Claudiu Privantu on 14.11.2023.
//

#include "VehiclesCollection.h"
namespace MyVehicles {
    void VehiclesCollection::addVehicle(const Vehicle &vehicle) {
        vehicles.push_back(vehicle);
        vehiclesList.push_back(vehicle);
        vehiclesDeque.push_back(vehicle);
    }

    //cautam un vehicul in array dupa brand
    Vehicle VehiclesCollection::findVehicleInArray(const std::string &brand) const {
        //utilizarea auto in C++ este un mod de a declara variabile fara a specifica explicit tipul lor
        //compilatorul deduce tipul variabilei in functie de valoarea cu care este initializata
        auto it = std::find_if(vehicles.begin(), vehicles.end(), [&brand](Vehicle vehicle) {
            return vehicle.getBrand() == brand;
        });

        if (it != vehicles.end()) {
            return *it;
        } else {
            throw std::runtime_error("Vehicle not found in array.");
        }
    }

    //cautam un vehicul in lista dupa brand
    Vehicle VehiclesCollection::findVehicleInList(const std::string &brand) const {
        //folosim std::find_if pentru a cauta un element in intervalul dat in functie de conditia precizata prin lambda expression
        //lambda expresion [&brand](Vehicle vehicle) {...} spune compilatorului ca lambda va prelua
        // variabila brand prin referinta si va primi un parametru de tip Vehicle
        auto it = std::find_if(vehiclesList.begin(), vehiclesList.end(), [&brand](Vehicle vehicle) {
            //conditia este ca brand-ul vehiculului sa fie cel cautat
            return vehicle.getBrand() == brand;
        });

        if (it != vehiclesList.end()) {
            //daca a fost gasit un element, adica nu am ajuns la final, returnam vehiculul gasit
            return *it;
        } else {
            //in caz contrar aruncam o eroare
            throw std::runtime_error("Vehicle not found in list.");
        }
    }

    //cautam un vehicul in deque dupa brand
    Vehicle VehiclesCollection::findVehicleInDeque(const std::string &brand) const {
        //folosim std::find_if pentru a cauta un element in intervalul dat in functie de conditia precizata prin lambda expression
        //lambda expresion [&brand](Vehicle vehicle) {...} spune compilatorului ca lambda va prelua
        // variabila brand prin referinta si va primi un parametru de tip Vehicle
        auto it = std::find_if(vehiclesDeque.begin(), vehiclesDeque.end(), [&brand](Vehicle vehicle) {
            //conditia este ca brand-ul vehiculului sa fie cel cautat
            return vehicle.getBrand() == brand;
        });

        if (it != vehiclesDeque.end()) {
            //daca a fost gasit un element, adica nu am ajuns la final, returnam vehiculul gasit
            return *it;
        } else {
            //in caz contrar aruncam o eroare
            throw std::runtime_error("Vehicle not found in deque.");
        }
    }

    void VehiclesCollection::printVehiclesFromArray() const {
        for (Vehicle vehicle : vehicles) {
            vehicle.toString();
        }
    }

    void VehiclesCollection::printVehiclesFromList() const {
        for (Vehicle vehicle : vehiclesList) {
            vehicle.toString();
        }
    }

    void VehiclesCollection::printVehiclesFromDeque() const {
        for (Vehicle vehicle : vehiclesDeque) {
            vehicle.toString();
        }
    }
}
