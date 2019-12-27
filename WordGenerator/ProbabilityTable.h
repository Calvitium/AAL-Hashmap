//
// Created by mateusz on 17.11.19.
//

#ifndef HASHMAP_PROBABILITY_H
#define HASHMAP_PROBABILITY_H


#include "SampleCollector.h"
#include "Distribution.h"

using namespace std;
class ProbabilityTable {
    Distribution **distribution;
public:
    ProbabilityTable(){
        distribution = new Distribution*[32];
        auto *letter = const_cast<wchar_t *>(L"aąbcćdeęfghijklłmnńoóprsśtuwyzźż");
        for(int i = 0; i<32; i++)
            distribution[i] = new Distribution(letter[i]);
    }
    void generate(SampleCollector &sample);

    void showDist() {
        for(int i = 0; i<32; i++)
            wcout<<distribution[i]->letter<<endl;
    }

private:
    Distribution findDistribution(wchar_t letter) {
        for(int i = 0; i<32; i++)
            if(letter == distribution[i]->letter)
                return *distribution[i];
    }
};


#endif //HASHMAP_PROBABILITY_H
