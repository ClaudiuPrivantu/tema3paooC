//
// Created by Gabriel-Claudiu Privantu on 15.11.2023.
//

#ifndef TEMA2_GENERICCOLLECTION_H
#define TEMA2_GENERICCOLLECTION_H

#include <vector>
#include "../Vehicle.h"

namespace MyVehicles {
    template <typename T>
    class GenericCollection{
    private:
        std::vector<T> collection;
    public:
        // Adauga un obiect la colectie
        void addObject(const T& object) {
            collection.push_back(object);
        }

        // Afiseaza toate obiectele din colectie
        void printObjects() const {
            for (T object : collection) {
                object.toString();
            }
        }
    };

}

#endif //TEMA2_GENERICCOLLECTION_H
