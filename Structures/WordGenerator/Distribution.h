//
// Created by mateusz on 27.12.19.
//

#ifndef HASHMAP_DISTRIBUTION_H
#define HASHMAP_DISTRIBUTION_H


#include <utility>
#include <iostream>
#include <list>
#include <random>

class Distribution {
    friend class WordGenerator;

private:
    wchar_t letter{};
    std::list<std::pair<wchar_t , double >*> cumulativeDistribution;

public:
    Distribution() = default;

    explicit Distribution(wchar_t letter);

    double &operator[](wchar_t letter);

    void setLetter(wchar_t letter);

    wchar_t getLetter();

    void show();

    wchar_t getRandom();
};


#endif //HASHMAP_DISTRIBUTION_H
