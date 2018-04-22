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

int Matrix::at(int i, int j) {
    return raw[i][j];
}

void Matrix::set(int i, int j, int val) {
    raw[i][j] = val;
}

void Matrix::print() {
    std::vector<std::vector<int>>::iterator row;
    for(row = raw.begin(); row != raw.end(); row++) {
        std::vector<int>::iterator col;
        for(col = row->begin(); col != row->end(); row++) {
            std::cout << *col << " ";
        }
        std::cout << "\n";
    }
}
