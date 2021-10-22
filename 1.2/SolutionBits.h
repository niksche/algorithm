//
// Created by nikita on 22.10.2021.
// https://contest.yandex.ru/contest/29978/problems/1.2/
//


#ifndef ALGORITHM_SOLUTIONBITS_H
#define ALGORITHM_SOLUTIONBITS_H

#include <iostream>

class SolutionBits {
public:
    SolutionBits() {
    };
    static int Solve() {
        int n = 0;
        int k = 0;
        std::cin >> n >> k;
        int byte = (n >> k) & 1;
        std::cout << byte;
        return 0;
    };
private:
};


#endif //ALGORITHM_SOLUTIONBITS_H
