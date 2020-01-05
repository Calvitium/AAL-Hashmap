//
// Created by mateusz on 02.01.20.
//

#include <sstream>
#include <chrono>
#include <iomanip>
#include "Application.h"
#include "../Structures/HashMap/HashMap.cpp"
using namespace std;

WordGenerator Application :: generator;
string Application :: filePath = "/home/mateusz/Pulpit/PW Informatyka/Sem5/AAL/Hashmap/sample.txt";

void Application::start() {
    bool quit = false;
    while(!quit) {
        showMenu();
        bool correct = false;
        while (!correct)
            switch (getchar()) {
                case '1':
                    wcout << "enter the FULL file path: ";
                    cin >> filePath;
                case '2':
                    correct = true;
                    generator.collectSample(filePath);
                    generator.calculateProbabilities();
                    generator.generateDistributions();
                    startMeasurement();
                    break;
                case '3':
                    wcout << "enter the FULL file path: ";
                    cin >> filePath;
                    createMap(filePath);
                    correct = true;
                    break;
                case 'q':
                    quit = true;
                    break;
                default:
                    wcout << "an input is incorrect - choose 1, 2, 3 or q: ";
            }
        getchar();
    }
    wcout<<endl<<endl<<"BYE!!!!"<<endl;

}

void Application::showMenu() {
    wcout<<endl<<endl;
    wcout<<"Created by: Mateusz Marciniewicz 293150"<<endl;
    wcout<<"      Task: Hashmap + W14 + W22 + W32"<<endl<<endl;
    wcout<<"========================================="<<endl;
    wcout<<"|       MENU - choose an option         |"<<endl;
    wcout<<"========================================="<<endl;
    wcout<<"1) enter the text sample to create a prob. table and then generate data"<<endl;
    wcout<<"2) generate data (use built-in probability table) "<<endl;
    wcout<<"3) test the correctness of the Hashmap by entering a sequence of key-value pairs"<<endl;
    wcout<<"q) quit"<<endl;

}

void Application::startMeasurement() {
    int problemSizes[50] = {0};
    wcout<<"Enter sizes of problems to measure. Put 0 to break the sequence (ex. 10 100 20000 400000 0): ";
    int temp;
    for (int &problemSize : problemSizes) {
        cin>>temp;
        if(temp == 0) break;
        problemSize = temp;
    }

    wcout<<"================================"<<endl;
    wcout<<"|    n    |  t(n) [ms]  | q(n) |"<<endl;
    wcout<<"================================"<<endl;


    for(int i = 0; problemSizes[i] != 0; i++) {
        auto map = new HashMap<int, wstring>(problemSizes[i]);
        auto start = std::chrono::high_resolution_clock::now();
        for(int j = 0; j < problemSizes[i]; j++)
            map->operator[](j) = generator.generateRandomWord();
        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        wcout<<"|  "<<std::setw(6)<<problemSizes[i]<<" | "<<std::setw(11)<<duration.count()<<" |"<<" 1.0"<<"  |"<<endl;
        delete map;
    }

    wcout<<"================================"<<endl;
}

void Application::createMap(string filePath) {
    HashMap<int, wstring> map;
    FILE * pFile;
    wchar_t str[20];
    int key;
    pFile = fopen (filePath.c_str() , "r");
    while(fscanf(pFile, "%d%ls", &key, str) == 2 ) {
        wstring value(str);
        map[key] = value;
    }
    fclose(pFile);
    map.show();
}
