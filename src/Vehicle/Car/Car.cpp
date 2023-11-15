//
// Created by Gabriel-Claudiu Privantu on 07.11.2023.
//

#include "Car.h"

namespace MyVehicles {
/** initializarea membrilor din constructor */
//Car(string brand, int manufacturingYear, char *info, int no_wheels); //constructor
    Car::Car(string brand, int manufacturingYear, char *info, int no_wheels)
            : Vehicle(brand, manufacturingYear, info), no_wheels(no_wheels) {}

/** Eiberarea heap-ului in cadrul destructorului */
//~Car(); //destructor
    Car::~Car() {
// Nu este necesar sa ne ocupam explicit de membrii duplicati,
// deoarece acestia sunt mosteniti de la clasa de baza (Vehicle)
// ar fi fost necesar doar in cazul in care am fi avut alte resurse alocate dinamic in plus pentru Car
    }

/** Suprascrierea copy constructor-ului */
//Car(const Car &otherCar); //copy constructor
    Car::Car(const Car &otherCar) : Vehicle(otherCar), no_wheels(otherCar.no_wheels) {}

/** Crearea unui move constructor */
//Car(Car &&otherCar) noexcept; //move constructor
    Car::Car(Car &&otherCar) noexcept
            : Vehicle(std::move(otherCar)),
              no_wheels(std::move(otherCar.no_wheels)) {
    }

/** Assignment operator */
//Car &operator=(const Car &otherCar); //assignment operator
    Car &Car::operator=(const Car &otherCar) {
        if (this != &otherCar) { // Verificare auto-atribuire
            // Atribuirea membrilor din clasa de baza (Vehicle)
            // Apelam assignment operator-ul din clasa de baza care se va ocupa si de eliberarea memoriei pentru info
            Vehicle::operator=(otherCar);

            // Atribuirea membrilor specifici clasei Car
            no_wheels = otherCar.no_wheels;
        }
        return *this;
    }

/** Incapsulare - ascunderea detaliilor de implementare ale unei clase si oferirea
 * unei interfete publice pentru a interactiona cu obiectul*/
    void Car::toString() {
        cout << "No_wheels: " << this->no_wheels << endl;
        Vehicle::toString();
    }

//metodele get și set sunt definite pentru membrii specifici ai claselor derivate
// (no_wheels pentru Car),
// iar metodele mostenite din clasa de baza (Vehicle) raman disponibile pentru membrii comuni
// (brand, manufacturingYear, info)
    int Car::getNoWheels() {
        return no_wheels;
    }

    void Car::setNoWheels(int no) {
        no_wheels = no;
    }
}