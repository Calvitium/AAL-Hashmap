//
// Created by Mateusz Marciniewicz 293150
// Task: W14 + W22 + W32
//

#ifndef HASHMAP_APPLICATION_H
#define HASHMAP_APPLICATION_H


#include "../Structures/HashMap/HashMap.h"
#include "../Structures/WordGenerator/WordGenerator.h"

class Application {
    static WordGenerator  generator;
    static string filePath;

private:
    static void showMenu();
    static void startMeasurement();

public:
    static void start();

    static void createMap(string basic_string);
};




#endif //HASHMAP_APPLICATION_H
