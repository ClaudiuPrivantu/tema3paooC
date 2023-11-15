//
// Created by Gabriel-Claudiu Privantu on 07.11.2023.
//

#ifndef TEMA2_IVEHICLE_H
#define TEMA2_IVEHICLE_H

#include <string>


//namespace-urile sunt utile deoarece pot organiza si izola numele entitatilor (functii, clase, variabile etc.)
//astfel evitam conflictele de nume care pot aparea in cadrul unor proiecte (in general mai mari)
using namespace std;
namespace MyVehicles {
    //interfata
    class IVehicle {
    public:
        //metodele virtuale declarate cu "= 0" indica faptul ca aceasta clasa POATE FI o clasa abstracta
        //clasele abstracte:
                //pot avea atat metode implementate, cat si metode pur virtuale
                //pot avea membrii de date, constr etc. pe langa metode
                //pot implementa o parte din logica etc.
       //interfetele (clasele pur abstracte):
                //au doar metode virtuale
                //nu ofera implementari

        //aceasta clasa abstracta (IVehicle) nu poate fi instantiata direct, serveste drept "schelet" pentru clasele derivate
        //IVehicle defineste o interfata pe care clasele derivate trebuie sa o implementeze
        //toate clasele derivate trebuie sa implementeze metodele virtuale pentru a putea deveni clase concrete
        //prin utilizarea "=0", clasele derivate sunt "fortate" sa implementeze metodele respective
        //daca o clasa derivata nu ofera o implementare pentru o metoda virtuala pura atunci clasa respectiva va deveni la randul ei abstracta
        virtual string getBrand() = 0;

        virtual void setBrand(string brand) = 0;

        virtual int getManufacturingYear() = 0;

        virtual void setManufacturingYear(int year) = 0;

        virtual void toString() = 0;

        virtual void changeInfo(char *info) = 0;

        // Functie sablon pentru a afisa informatii despre orice obiect care implementeaza IVehicle
        // Aceasta va accepta un obiect de orice tip care deriveaza din IVehicle, indiferent daca este un obiect de tip Vehicle, Car sau Boat
        template <typename T>
        static void printInfo(T& vehicle) {
            vehicle.toString();
        }

        // std::unique_ptr este folosit pentru a gestiona automat viata unui obiect
        // si pentru a elibera resursele alocate atunci cand acesta nu mai este folosit
        virtual std::unique_ptr<IVehicle> clone() const = 0;
    };
}


#endif //TEMA2_IVEHICLE_H
