//
// Created by mateusz on 02.11.19.
//

#ifndef HASHMAP_PROBABILITYDISTRIBUTION_H
#define HASHMAP_PROBABILITYDISTRIBUTION_H


#include <string>
#include <fstream>
#include <vector>
#include <wchar.h>
#include <stdio.h>
#include "../HashMap/HashMap.h"
#include "Distribution.h"


class WordGenerator {
public:
    std::vector<Distribution> afterLetter;
    Distribution firstLetter;

private:
    double wordCount;

public:
    WordGenerator();
    void collectSample(string pathName);          //collects a sample from the text - sums up number of letter occurrence
    void calculateProbabilities();               //transforms number of occurrences into the occurrence probability
    void generateDistributions();                //generates cumulative distribution of each letter, basing on the probability
    void showLetterDistribution(wchar_t letter);
    wstring generateRandomWord();

private:
    Distribution& getLetterDistribution(wchar_t letter);
    bool isEndOfWord(wchar_t letter);
};


#endif //HASHMAP_PROBABILITYDISTRIBUTION_H
