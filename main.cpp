#include <iostream>
#include <string>
#include <climits>
#include <zconf.h>
#include "ClientApp/Application.h"
#include "Structures/HashMap/HashMap.cpp"


int main() {
    setlocale( LC_ALL, "C.UTF-8" );
    Application::start();
    return 0;
}