//
// Created by jacob on 22/04/18.
//

#include <iostream>
#include "matrix.h"

unsigned long Matrix::n_rows() {
    return raw.size();
}

unsigned long Matrix::n_cols() {
    return raw[0].size();
}

int Matrix::at(unsigned long i, unsigned long j) {
    return raw.at(i).at(j);
}

void Matrix::set(unsigned long i, unsigned long j, int val) {
    raw[i][j] = val;
}

void Matrix::print() {
    std::vector<std::vector<int>>::iterator row;
    for(row = raw.begin(); row != raw.end(); row++) {
        std::vector<int>::iterator col;
        for(col = row->begin(); col != row->end(); col++) {
            std::cout << *col << " ";
        }
        std::cout << "\n";
    }
}
