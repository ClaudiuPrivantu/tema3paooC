//
// Created by Gabriel-Claudiu Privantu on 15.11.2023.
//

#ifndef TEMA2_SHAREDCOLLECTION_H
#define TEMA2_SHAREDCOLLECTION_H

#include <vector>

namespace MyVehicles {
    template <typename T>
    class SharedCollection{
    private:
        std::vector<std::shared_ptr<T>> collection;
    public:
        // Adauga un obiect la colectie
        void addObject(std::shared_ptr<T> object) {
            collection.push_back(object);
        }

        // Afiseaza toate obiectele din colectie
        void printObjects() const {
            for (const auto& object : collection) {
                object->toString();
            }
        }
    };

}
#endif //TEMA2_SHAREDCOLLECTION_H
