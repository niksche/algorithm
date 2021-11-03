//
// Created by nikita on 22.10.2021.
//

#ifndef ALGORITHM_SOLUTIONSORT_H
#define ALGORITHM_SOLUTIONSORT_H
#include <iostream>


class SolutionSort {
public:
    SolutionSort() {
    };

    int exponentialSearch(int number, int A[]) {
        int i = 0;
        if (A[0] < number) {
            while (A[2 << i] < number) {
                i++;
            }
            return (i);
        }
        return 0;
    }

    int binarySearch(int number, int A[], int size) {
        int first = 0;
        int last = size;
        while (first < last) {
            int mid = (last + first)/2;
            if (A[mid] < number) {
                first = mid + 1;
            }
            else {
                last = mid;
            }
        }
        return (first == size || A[first] != number)? -1 : first;
    }


    void Solve() {
        for (int i = 0; i < m; i++) {
            int number = B[i];
            std::cout << exponentialSearch(number, A);
        }
    }

    static const int print() {
        for (int i = 0; i < n; i++) {
            std::cout << A[i] << " ";
        }

        for (int j = 0; j < m; j++) {
            std::cout << B[j] << " ";
        }
    }

private:
    static int n;
    static int m;
    static int *A;
    static int *B;
};


#endif //ALGORITHM_SOLUTIONSORT_H
