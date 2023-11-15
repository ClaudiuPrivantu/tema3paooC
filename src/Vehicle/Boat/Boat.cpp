//
// Created by Gabriel-Claudiu Privantu on 07.11.2023.
//

#include "Boat.h"

namespace MyVehicles {
/** initializarea membrilor din constructor */
//Boat(string brand, int manufacturingYear, char *info, int no_anchors); //constructor
    Boat::Boat(string brand, int manufacturingYear, char *info, int no_anchors)
            : Vehicle(brand, manufacturingYear, info), no_anchors(no_anchors) {}

/** Eiberarea heap-ului in cadrul destructorului */
//~Boat(); //destructor
    Boat::~Boat() {
// Nu este necesar sa ne ocupam explicit de membrii duplicati,
// deoarece acestia sunt mosteniti de la clasa de baza (Vehicle)
// ar fi fost necesar doar in cazul in care am fi avut alte resurse alocate dinamic in plus pentru Boat
    }

/** Suprascrierea copy constructor-ului */
//Boat(const Boat &otherBoat); //copy constructor
    Boat::Boat(const Boat &otherBoat) : Vehicle(otherBoat), no_anchors(otherBoat.no_anchors) {}

/** Crearea unui move constructor */
//Boat(Boat &&otherBoat) noexcept; //move constructor
    Boat::Boat(Boat &&otherBoat) noexcept
            : Vehicle(std::move(otherBoat)),
              no_anchors(std::move(otherBoat.no_anchors)) {
    }

/** Assignment operator */
//Boat &operator=(const Boat &otherBoat); //assignment operator
    Boat &Boat::operator=(const Boat &otherBoat) {
        if (this != &otherBoat) { // Verificare auto-atribuire
            // Atribuirea membrilor din clasa de baza (Vehicle)
            // Apelam assignment operator-ul din clasa de baza care se va ocupa si de eliberarea memoriei pentru info
            Vehicle::operator=(otherBoat);

            // Atribuirea membrilor specifici clasei Boat
            no_anchors = otherBoat.no_anchors;
        }
        return *this;
    }

/** Incapsulare - ascunderea detaliilor de implementare ale unei clase si oferirea
 * unei interfete publice pentru a interactiona cu obiectul*/
    void Boat::toString() {
        cout << "No_anchors: " << this->no_anchors << endl;
        Vehicle::toString();
    }

//metodele get și set sunt definite pentru membrii specifici ai claselor derivate
// (no_anchors pentru Boat),
// metodele mostenite din clasa de baza (Vehicle) raman disponibile pentru membrii comuni
// (brand, manufacturingYear, info)
    int Boat::getNoAnchors() {
        return no_anchors;
    }

    void Boat::setNoAnchors(int no) {
        no_anchors = no;
    }
}