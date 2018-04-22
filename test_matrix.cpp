//
// Created by jacob on 22/04/18.
//

#include <gtest/gtest.h>
#include "matrix.h"

namespace {
    class MatrixTest : public ::testing::Test {
    protected:
        virtual void SetUp() {
            std::vector<std::vector<int>> m = {{1, 2, 3, 4}};
            matrix = Matrix(m);
        }

        Matrix matrix;
    };

    TEST_F(MatrixTest, CorrectNumberOfColumns) {
        EXPECT_EQ(4, matrix.n_cols());
    }

    TEST_F(MatrixTest, CorrectNumberOfRows) {
        EXPECT_EQ(1, matrix.n_rows());
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}