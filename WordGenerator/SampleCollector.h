//
// Created by mateusz on 02.11.19.
//

#ifndef HASHMAP_PROBABILITYDISTRIBUTION_H
#define HASHMAP_PROBABILITYDISTRIBUTION_H


#include <string>
#include <fstream>
#include <vector>
#include "../HashMap/HashMap.h"
#include "Distribution.h"


class SampleCollector {
public:
    HashMap<wchar_t , double > firstLetter;
    HashMap<wchar_t , double > afterA;
    HashMap<wchar_t , double > afterAA;
    HashMap<wchar_t , double > afterB;
    HashMap<wchar_t , double > afterC;
    HashMap<wchar_t , double > afterCC;
    HashMap<wchar_t , double > afterD;
    HashMap<wchar_t , double > afterE;
    HashMap<wchar_t , double > afterEE;
    HashMap<wchar_t , double > afterF;
    HashMap<wchar_t , double > afterG;
    HashMap<wchar_t , double > afterH;
    HashMap<wchar_t , double > afterI;
    HashMap<wchar_t , double > afterJ;
    HashMap<wchar_t , double > afterK;
    HashMap<wchar_t , double > afterL;
    HashMap<wchar_t , double > afterLL;
    HashMap<wchar_t , double > afterM;
    HashMap<wchar_t , double > afterN;
    HashMap<wchar_t , double > afterNN;
    HashMap<wchar_t , double > afterO;
    HashMap<wchar_t , double > afterOO;
    HashMap<wchar_t , double > afterP;
    HashMap<wchar_t , double > afterR;
    HashMap<wchar_t , double > afterS;
    HashMap<wchar_t , double > afterSS;
    HashMap<wchar_t , double > afterT;
    HashMap<wchar_t , double > afterU;
    HashMap<wchar_t , double > afterW;
    HashMap<wchar_t , double > afterY;
    HashMap<wchar_t , double > afterZ;
    HashMap<wchar_t , double > afterZZ;
    HashMap<wchar_t , double > afterZZZ;
    Distribution **distribution;
    Distribution *firsttLetter;

    double wordCount;

public:
    SampleCollector();
    void collectSample();
    void calculateProbabilities();

private:
    void chooseMap(wchar_t previous, wchar_t current) ;

};


#endif //HASHMAP_PROBABILITYDISTRIBUTION_H
