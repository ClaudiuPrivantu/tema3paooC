#configuram si construim biblioteca statica asociata clasei Vehicle
#adaugam un fisier sursa (Vehicle.cpp) la biblioteca statica denumita "Vehicle"
#biblioteca STATICA - codul obiect este inglobat direct in programul executabil in momentul construirii,
    #utile pentru a imparti codul in diferite parti ale proiectului (nu mai avem nevoie de fisiere necesare la runtime)
#exista si biblioteca SHARED - este compilata separat si incarcata in memorie la runtime
add_library(Vehicle STATIC Vehicle.cpp)

#specificam faptul ca CMake trebuie sa intre in subdirectorul Car pentru construirea bibliotecii asociate clasei Car
add_subdirectory(Car)
#specificam faptul ca CMake trebuie sa intre in subdirectorul Boat pentru construirea bibliotecii asociate clasei Boat
add_subdirectory(Boat)

add_subdirectory(GenericCollection)