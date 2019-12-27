#include <iostream>
#include <string>
#include "HashMap/HashMap.h"
#include "HashMap/HashMap.cpp"
#include "WordGenerator/WordGenerator.h"

int main() {
    setlocale( LC_ALL, "C.UTF-8" );
    WordGenerator sample;
    sample.collectSample();
    sample.calculateProbabilities();
    sample.generateDistributions();
    sample.firstLetter.show();
    for(int i = 0; i < 100; i++)
        wcout<<sample.generateRandomWord()<<endl;
    return 0;
}