//
// Created by jacob on 22/04/18.
//

#include <gtest/gtest.h>
#include "../matrix.h"

class MatrixTest : public ::testing::Test {
protected:
    virtual void setUp() {
        int a[2][2] = {{0,1}, {2,3}};
        m.init(a, 2, 2)
    }

    Matrix m;
};