//
// Created by Mateusz Marciniewicz 293150
// Task: W14 + W22 + W32
//
#include <chrono>
#include "Distribution.h"

using namespace std;
Distribution::Distribution(wchar_t letter) {
    this->letter = letter;
}

double &Distribution::operator[](wchar_t letter) {
    for(auto item : cumulativeDistribution)
        if(item->first == letter)
            return item->second;
    cumulativeDistribution.emplace_back(new pair<wchar_t, double>(letter, 0));
    return cumulativeDistribution.back()->second;
}

void Distribution::setLetter(wchar_t letter) {
    this->letter = letter;
}

wchar_t Distribution::getLetter() {
    return letter;
}

void Distribution::show() {
    int i = 0;
    wcout<<"-------------------------------"<<endl;
    for(auto item : cumulativeDistribution)
        wcout<<++i<<". "<<item->first<<" = "<<item->second<<endl;
    wcout<<endl<<"-------------------------------"<<endl<<endl;
}

wchar_t Distribution::getRandom() {
    std::mt19937_64 rng;
    uint64_t timeSeed = static_cast<uint64_t>(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    std::seed_seq ss{uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed>>32)};
    rng.seed(ss);
    std::uniform_real_distribution<double> unif(0, 1);

    double random = unif(rng);
    std::pair<wchar_t, double> *iter2 = new std::pair<wchar_t, double>(L' ', 0);

    for(auto iter : cumulativeDistribution){
        if(iter2->second < random && random <= iter->second)
            return iter->first;
        iter2 = iter;
    }

}


