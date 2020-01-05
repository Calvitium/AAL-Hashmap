//
// Created by Mateusz Marciniewicz 293150
// Task: W14 + W22 + W32
//

#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <wchar.h>
#include <fcntl.h>
#include "WordGenerator.h"
#include "../HashMap/HashMap.cpp"

void WordGenerator::collectSample(string pathName) {
    FILE * pFile;
    pFile=fopen (pathName.c_str(),"r");
    wchar_t previous, current;
    bool beginning = true;
    int i = 0;
    while (fscanf(pFile, "%lc", &current) == 1)
    {
        current = static_cast<wchar_t>(towlower(static_cast<wint_t>(current)));
        if(beginning)
        {
            if(current == L' ')
            {
                i++;
                continue;
            }
            firstLetter[current]++;
            beginning = false;
            wordCount++;
        }
        else
        {
            if(isEndOfWord(current))
            {
                beginning = true;
                i++;
                getLetterDistribution(previous)[ L'*' ]++;
                continue;
            }
            getLetterDistribution(previous)[current]++;
        }
        previous = current;
        i++;
    }
}

void WordGenerator::calculateProbabilities() {
    for(auto iter : firstLetter.cumulativeDistribution)
        iter->second /= wordCount;

    for(int i = 0; i < afterLetter.size(); i++){
        double summedOccurence = 0;
        for(auto iter : afterLetter[i].cumulativeDistribution)
            summedOccurence += iter->second;
        for(auto iter : afterLetter[i].cumulativeDistribution)
            iter->second /= summedOccurence;
    }

}


Distribution& WordGenerator::getLetterDistribution(wchar_t letter){
    for(int i = 0; i < 32; i++)
        if(afterLetter[i].getLetter() == letter)
            return afterLetter[i];
}

WordGenerator::WordGenerator() {
    int index = 0;
    auto *letters = const_cast<wchar_t *>(L"aąbcćdeęfghijklłmnńoóprsśtuwyzźż* ");
    wordCount = 0;
    afterLetter.resize(32);
    do {
        afterLetter[index].setLetter(letters[index]);
        index++;
    }while (letters[index + 1] != '\000');
}

void WordGenerator::showLetterDistribution(wchar_t letter) {
    for(auto &iter : afterLetter)
        if(iter.getLetter() == letter)
            iter.show();
}

bool WordGenerator::isEndOfWord(wchar_t letter) {
    return letter == L' ' || letter == L'.' || letter == L';' || letter == L',' || letter == L':' || letter == L'-';
}

void WordGenerator::generateDistributions(){
    std::pair<wchar_t, double> *it2 = new std::pair<wchar_t, double>(L' ', 0);
    std::pair<wchar_t, double> *it3 = it2;
    for (auto iter : firstLetter.cumulativeDistribution){
        iter->second += it2->second;
        it2 = iter;
    }
    for (auto &i : afterLetter) {
        it2 = it3;
        for(auto iter : i.cumulativeDistribution){
            iter->second += it2->second;
            it2 = iter;
        }
    }
    delete it3;
}

wstring WordGenerator::generateRandomWord() {
    wstring result;
    result += firstLetter.getRandom();
    wchar_t letter;
    for(int i = 0; (letter = getLetterDistribution(result[i]).getRandom()) != L'*'; i++)
        result += letter;
    return result;
}


