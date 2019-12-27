#include <iostream>
#include <string>
#include "HashMap/HashMap.h"
#include "HashMap/HashMap.cpp"
#include "WordGenerator/SampleCollector.h"
#include "WordGenerator/ProbabilityTable.h"

int main() {
    setlocale( LC_ALL, "C.UTF-8" );
    SampleCollector sample;
    sample.collectSample();
    sample.firstLetter.show();
    sample.calculateProbabilities();
    sample.afterOO.show();
    ProbabilityTable prob;
    wcout<<"¿ó³æ";
    return 0;
}