//
// Created by mateusz on 17.11.19.
//

#ifndef HASHMAP_DISTRIBUTION_H
#define HASHMAP_DISTRIBUTION_H


#include <utility>
#include <iostream>
#include <vector>

class Distribution {
    friend class ProbabilityTable;
    wchar_t letter;
    std::vector<std::pair<double, wchar_t>> cumulativeDistribution;

public:
    explicit Distribution(wchar_t letter) {
        this->letter = letter;
        cumulativeDistribution.resize(33);
    }
    Distribution(){cumulativeDistribution.resize(32);}

};


#endif //HASHMAP_DISTRIBUTION_H
