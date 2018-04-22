//
// Created by jacob on 22/04/18.
//

#ifndef CMAT_MATRIX_H
#define CMAT_MATRIX_H


#include <vector>

class Matrix {
    std::vector< std::vector<int> > raw;

public:
    Matrix() {};
    explicit Matrix(std::vector< std::vector<int> > &matrix) : raw(matrix) {};
    Matrix(unsigned long rows, unsigned long cols) : raw(std::vector< std::vector<int> >(rows, std::vector<int>(cols))) {};
    unsigned long n_rows();
    unsigned long n_cols();
    int at(int i, int j);
    void set(int i, int j, int val);
    void print();
};

#endif
