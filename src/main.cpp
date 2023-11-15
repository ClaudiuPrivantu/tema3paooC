#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"
#include "VehiclesCollection.h"
#include "GenericCollection.h"
#include "SharedCollection.h"

using namespace MyVehicles;

int main() {
    MyVehicles::Vehicle motor1("bmw", 2023, "este motor");
    MyVehicles::Car car1("mercedes", 2001, "este masina", 4);
    MyVehicles::Boat boat1("lambo", 1998, "este barca", 3);

    // Folosirea functiei sablon pentru a afisa informatii despre orice obiect care implementeaza IVehicle
    cout << "-------------------------------------------\n";
    cout << "Test template-function:\n";
    MyVehicles::IVehicle::printInfo(motor1);
    MyVehicles::IVehicle::printInfo(car1);
    MyVehicles::IVehicle::printInfo(boat1);

    cout << "-------------------------------------------\n";
    cout << "Test template-class:\n";
    GenericCollection<Vehicle> vehicleCollection;
    // Adaugam vehicule la colectie - cars & boats (clasa Vehicle fiind clasa de baza suporta ambele tipuri de obiecte)
    vehicleCollection.addObject(car1);
    vehicleCollection.addObject(boat1);
    // Afisam vehiculele din colecție
    cout<<"-----------Vehicle collection-----------:\n";
    vehicleCollection.printObjects();

    // Creem un alt tip de colectie - doar de masini de data aceasta
    MyVehicles::Car car2("dacia", 2023, "logan - masina", 4);
    GenericCollection<Car> carCollection;
    carCollection.addObject(car1);
    carCollection.addObject(car2);
    //se poate observa ca nu putem adauga o barca fiind un alt tip de obiect
//    carCollection.addObject(boat1);
    cout<<"-----------Car collection-----------:\n";
    carCollection.printObjects();

    // Creem un alt tip de colectie - doar de barci de data aceasta
    MyVehicles::Boat boat2("yamaha", 1999, "fast - barca", 1);
    GenericCollection<Boat> boatCollection;
    boatCollection.addObject(boat1);
    boatCollection.addObject(boat2);
    cout<<"-----------Boat collection-----------:\n";
    boatCollection.printObjects();
    cout << "-------------------------------------------\n";

    // Creare colectie de vehicule
    cout<<"Test colectii sql:\n";
    cout << "-------------------------------------------\n";
    MyVehicles::VehiclesCollection collection;
    collection.addVehicle(motor1);
    collection.addVehicle(car1);
    collection.addVehicle(boat1);

     // Afisare vehicule din array
    cout<<"Vehicles from array:\n";
    collection.printVehiclesFromArray();
    cout << "-------------------------------------------\n";

    // Afisare vehicule din lista
    cout<<"Vehicles from list:\n";
    collection.printVehiclesFromList();
    cout << "-------------------------------------------\n";

    // Afisare vehicule din deque
    cout<<"Vehicles from deque:\n";
    collection.printVehiclesFromDeque();
    cout << "-------------------------------------------\n";

    // Cautare vehicul in array
    cout<<"Search result in array:\n";
    try {
        collection.findVehicleInArray("bmw").toString();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Cautare vehicul in lista
    cout<<"Search result in list:\n";
    try {
        collection.findVehicleInList("mercedes").toString();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Cautare vehicul in deque
    cout<<"Search result in deque:\n";
    try {
        collection.findVehicleInDeque("lambo").toString();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    cout << "-------------------------------------------\n";
    cout << "Test unique-pointer:\n";
    MyVehicles::Vehicle car("Ford", 2022, "Car description");
    // Folosim std::unique_ptr pentru a gestiona memoria
    // detine un unic obiect la un moment dat
    // este mai eficient decat shared_pointer din punct de vedere al memoriei,
    // deoarce nu contine un contor de referinta
    std::unique_ptr<MyVehicles::IVehicle> carPtr = car.clone();
    // Putem folosi carPtr in loc de car pentru a accesa functionalitatile IVehicle
    cout<<carPtr->getBrand()<<"\n";

    cout << "-------------------------------------------\n";
    cout << "Test shared-pointer:\n";
    cout << "-------------------------------------------\n";
    // poate fi detinut si partajat intre mai multi - dupa cum ii spune si numele
    // mentine un contor de referinta intern - obiectul este eliberat atunci cand contorul este 0
    // utilizat atunci cand mai multe entitati doresc sa impartaseasca ownership-ul unui obiect
    MyVehicles::Vehicle motor3("bmw", 2023, "este motor");
    MyVehicles::Car car3("mercedes", 2001, "este masina", 4);
    MyVehicles::Boat boat3("lambo", 1998, "este barca", 3);

    MyVehicles::SharedCollection<MyVehicles::Vehicle> genericCollection;

    // Utilizam std::make_shared pentru a crea shared_ptr
    //utilizarea auto in C++ este un mod de a declara variabile fara a specifica explicit tipul lor
    //compilatorul deduce tipul variabilei in functie de valoarea cu care este initializata
    auto sharedMotor1 = std::make_shared<MyVehicles::Vehicle>(motor1);
    auto sharedCar1 = std::make_shared<MyVehicles::Car>(car1);
    auto sharedBoat1 = std::make_shared<MyVehicles::Boat>(boat1);

    genericCollection.addObject(sharedMotor1);
    genericCollection.addObject(sharedCar1);
    genericCollection.addObject(sharedBoat1);

    genericCollection.printObjects();

    cout<<"counter initial: "<<sharedBoat1.use_count()<<"\n";
    auto sharedBoat2 = sharedBoat1;
    cout<<"counter 2: "<<sharedBoat1.use_count()<<"\n";
    sharedBoat1.reset();
    cout<<"counter dupa reset: "<<sharedBoat1.use_count()<<"\n";
    cout << "-------------------------------------------\n";
    cout << "Shared-pointer VS Unique-pointer:\n";
    cout << "-------------------------------------------\n";
    // Utilizare std::unique_ptr
    std::cout << "Using std::unique_ptr:" << std::endl;
    {
        MyVehicles::Vehicle motocicleta("nissan", 1850, "este motocicleta");
        std::unique_ptr<Vehicle> uniquePtr = std::make_unique<Vehicle>(motocicleta);
        uniquePtr->toString();
        //se poate observa ca nu poate fi detinut si partajat de mai multi pointeri, ci doar de unul singur
//        std::unique_ptr<Vehicle> uniquePtr2 = uniquePtr;
    } // La iesirea din acest bloc, obiectul este automat eliberat

    cout << "-------------------------------------------\n";

    // Utilizare std::unique_ptr
    std::cout << "Using std::shared_ptr:" << std::endl;
    {
        MyVehicles::Boat barca("barcaleta", 2023, "este barca", 3);
        std::shared_ptr<Boat> sharedPtr1 = std::make_shared<Boat>(barca);
        std::shared_ptr<Boat> sharedPtr2 = sharedPtr1; // Un alt smart pointer partajeaza posesia
        sharedPtr1->toString();
        sharedPtr2->toString();
    } // La iesirea din acest bloc, obiectul este eliberat numai atunci cand toti smart pointerii isi inceteaza referintele
    cout << "-------------------------------------------\n";





// ------------------------------------------------- TEMA 2 -------------------------------------------------

//    cout << "Vehicles details:\n";
//    motor1.toString();
//    car1.toString();
//    boat1.toString();
//    cout << "\n";
//
//    cout << "Test copy-constructor: ";
//    MyVehicles::Car car2 = car1;
//    cout << "Car1:\n";
//    car1.toString();
//    cout << "Car2:\n";
//    car2.toString();
//    cout << "\n";
//    cout << "Test independenta copy-constructor:\n";
//    car1.changeInfo("masina de lux");
//    car2.setBrand("audi");
//    cout << "Car1:\n";
//    car1.toString();
//    cout << "Car2:\n";
//    car2.toString();
//    cout << "\n";
//
//    cout << "Test move-constructor: ";
//    MyVehicles::Boat boat2(std::move(boat1));
//    cout << "Boat1 - obiectul sursa:\n";
//    cout<<"Brand: "<<boat1.getBrand() << "\n";
//    boat1.toString();
//    cout << "Boat2 - obiectul destinatie:\n";
//    boat2.toString();
//    cout << "\n";
//    cout << "Test independenta move-constructor:\n";
//    boat1.setBrand("lambo"); //ii dam inapoi numele initial pentru lizibilitate
//    boat1.changeInfo("barca de lux");
//    boat2.setBrand("yachtyng");
//    cout << "Boat1:\n";
//    boat1.toString();
//    cout << "Boat2:\n";
//    boat2.toString();
//    cout << "\n";
//
//    cout << "Test assignment operator: ";
//    MyVehicles::Vehicle motor2;
//    cout << "Vehicle2:\n";
//    motor2.toString();
//    motor2 = motor1;
//    cout << "\n";
//    cout << "Vehicle1:\n";
//    motor1.toString();
//    cout << "Vehicle2:\n";
//    motor2.toString();
//    cout << "\n";

    return 0;
}
