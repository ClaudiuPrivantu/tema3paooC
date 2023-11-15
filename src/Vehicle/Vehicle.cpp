//
// Created by Gabriel-Claudiu Privantu on 07.11.2023.
//

#include "Vehicle.h"

namespace MyVehicles {
/** initializarea membrilor din constructor */
//Vehicle(string brand, int manufacturingYear, char *info); //constructor
    Vehicle::Vehicle(string brand, int manufacturingYear, char *info) {
        this->brand = brand;
        this->manufacturingYear = manufacturingYear;
        if (info != nullptr) {
            this->info = new char[strlen(info) + 1];
            strcpy(this->info, info);
        } else {
            this->info = nullptr;
        }
    }

/** Eiberarea heap-ului in cadrul destructorului */
//Destructorul este responsabil pentru eliberarea resurselor alocate dinamic (info) si se asigura ca nu exista scurgeri de memorie
//brand si manufacturingYear sunt alocate si dezalocate automat, nefiind resurse alocate dinamic
//~Vehicle(); //destructor
    Vehicle::~Vehicle() {
        if (this->info != nullptr) { //daca info nu este null --> memoria a fost alocata
            cout << this->brand << " deleted!" << endl;
            delete[] this->info; //memoria trebuie eliberata
        }
    }

/** Suprascrierea copy constructor-ului */
// scopul sau este de a crea o copie a unui obiect deja existent atunci cand se initializeaza un nou obiect
// conditia este ca obiectul de copiat sa existe la crearea obiectului nou la initializare

//Deep-copy - alocam memorie pentru obiectele alocate dinamic si copiem datele
//obiectele au propriile instante ale obiectelor alocate dinamic

//Vehicle(const Vehicle& otherVehicle);//copy constructor
    Vehicle::Vehicle(const Vehicle &otherVehicle) {
//        cout << otherVehicle.brand << " copied!" << endl;
        this->brand = otherVehicle.brand;
        this->manufacturingYear = otherVehicle.manufacturingYear;
        this->info = new char[strlen(otherVehicle.info) + 1];
        strcpy(this->info, otherVehicle.info);
    }

/** Crearea unui move constructor */
//utilizat cand mutam un obiect dintr-o locatie in alta, utilizand std::move() in acest caz
//fura" date de la obiectul sursa, lasandu-l intr-o stare valida, dar nespecificata/incompleta
//este eficient deoarece permite transferul resurselor fara a face copii inutile
//Vehicle(Vehicle &&otherVehicle) noexcept; //move constructor
    Vehicle::Vehicle(Vehicle &&otherVehicle) noexcept {
//        cout << otherVehicle.brand << " moved!" << endl;
        this->brand = std::move(otherVehicle.brand);
        this->manufacturingYear = otherVehicle.manufacturingYear;
        this->info = otherVehicle.info; //shallow copy
        //ne asiguram ca obiectul sursa nu va incerca sa elibereze memoria pentru "info" in destructor,
        //deoarece acum memoria este detinuta de obiectul curent
        otherVehicle.info = nullptr;
        otherVehicle.manufacturingYear=0; //"resetam anul de fabricatie noi, fiind int (warning clang daca punem std::move)"
    }

/** Constructor default */
//Vehicle(); //constructor default - fara parametrii
//il folosesc pentru exemplificarea assignment operator-ului
    Vehicle::Vehicle() : manufacturingYear(0), info(nullptr) {
//        cout << "Default constructor!" << endl;
    }


/** Assignment operator */
// este important sa verificam daca atribuim obiectul cu el insusi (auto-atribuire)
// daca da, nu este necesar sa fac nicio operatie suplimentară si pot returna obiectul curent
// Assignment operator-ul defineste modul in care un obiect este atribuit altui obiect de aceeasi clasa
// scopul sau este de a ne permite sa copiem sau sa atribuim un obiect existent intr-un alt obiect de aceeasi clasa deja creat
// conditia este ca ambele obiecte sa existe deja in momentul atribuirii

//Shallow-copy - copiem adresele/referintele la obiectele alocate dinamic
//ambele obiecte vor face referire la acelasi obiect alocat dinamic

//Vehicle &operator=(const Vehicle &otherVehicle); //assignment operator
    Vehicle &Vehicle::operator=(const Vehicle &otherVehicle) {
//        cout << otherVehicle.brand << " assigned!" << endl;
        if (this != &otherVehicle) { //verificam auto-atribuirea
            delete[] info; //eliberam memoria veche

            //atribuim membrii comuni
            brand = otherVehicle.brand;
            manufacturingYear = otherVehicle.manufacturingYear;
            //shallow-copy
//            this->info = other.info;
            if (otherVehicle.info != nullptr) {
                info = new char[strlen(otherVehicle.info) + 1];
                strcpy(info, otherVehicle.info);
            } else {
                info = nullptr;
            }
        }
        return *this;
    }

/** Incapsulare - ascunderea detaliilor de implementare ale unei clase si oferirea
 * unei interfete publice pentru a interactiona cu obiectul*/
    string Vehicle::getBrand() {
        return brand;
    }

    void Vehicle::setBrand(string name) {
        brand = name;
    }

    int Vehicle::getManufacturingYear() {
        return manufacturingYear;
    }

    void Vehicle::setManufacturingYear(int year) {
        manufacturingYear = year;
    }

    void Vehicle::toString() {
        if (this->info == nullptr) {
            cout << "Informations are null or has already been deleted!\n" << endl;
        } else {
            cout << "Brand: " << this->brand << endl;
            cout << "Manufacturing year: " << this->manufacturingYear << endl;
            cout << "Informations: " << this->info << endl;
            cout << "\n";
        }
    }

    void Vehicle::changeInfo(char *otherInfo) {
        delete[] this->info;
        this->info = new char[strlen(otherInfo) + 1];;
        strcpy(this->info, otherInfo);
    }
}