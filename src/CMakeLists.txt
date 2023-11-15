#specificam versiunea minima necesara pentru a rula proiectul
#primim o eroare daca versiunea instalata pe sistem nu indeplineste cerinta
cmake_minimum_required(VERSION 3.22)
#stabilim numele proiectului
#acest nume este folosit pentru a identifica proiectul in cadrul sistemului de constructie CMake
project(tema2)

#specificam versiunea standard a limbajului C++ pe care compilatorul trebuie sa o urmeze
#influenteaza modul in care compilatorul trateaza si interpreteaza codul sursa C++
set(CMAKE_CXX_STANDARD 14)
#specificam faptul ca standardul specificat este obligatoriu
#daca compilatorul nu suporta standardul C++14, CMake va emite o eroare
set(CMAKE_CXX_STANDARD_REQUIRED true)

#includem subdirectorul proiectului (subdirectorul lui src)
#practic CMake adauga continutul dir-ului Vehicle si construieste proiectul
#dir-ul Vehicle contine codul sursa si CMakeList-ul necesar pentru construirea bibliotecii
add_subdirectory(Vehicle)
add_subdirectory(VehiclesCollection)
add_subdirectory(SharedCollection)

#specificam sursa fisierului executabil (main.cpp) si creez un executabil cu numele "tema2"
add_executable(tema2 main.cpp)

#legam bibliotecile statice (Vehicle, Car, Boat) de executabilul "tema2"
#practic indicam faptul ca executia programului "tema2" depinde de bibliotecile "Vehicle, Car si Boat"
#si mai simplu - specificam dependentele
#la rulare, sistemul va stii sa incarce si sa utilizeze aceste biblioteci
target_link_libraries(tema2 PUBLIC Vehicle Car Boat VehiclesCollection GenericCollection SharedCollection)

#specificam directoarele de includere necesare pentru proiect
#asiguram faptul ca compilatorul va putea gasi fisierele header necesare pentru  a le include si a compila sursa din "tema2"
target_include_directories(tema2 PUBLIC
        "${PROJECT_BINARY_DIR}"                 #dir-ul cu fisierele generate in timpul compilarii
        "${PROJECT_SOURCE_DIR}/Vehicle"         #dir-ul cu fisierele header ale clasei Vehicle
        "${PROJECT_SOURCE_DIR}/VehiclesCollection" #dir-ul cu fisierele header ale clasei VehiclesCollection
        "${PROJECT_SOURCE_DIR}/Vehicle/Car"         #dir-ul cu fisierele header ale clasei Car
        "${PROJECT_SOURCE_DIR}/Vehicle/Boat"    ##dir-ul cu fisierele header ale clasei Boat
        "${PROJECT_SOURCE_DIR}/Vehicle/GenericCollection"
        "${PROJECT_SOURCE_DIR}/SharedCollection")