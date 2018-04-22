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

    TEST_F(MatrixTest, AtWorksCorrectly) {
        EXPECT_EQ(3, matrix.at(0, 2));
    }

    TEST_F(MatrixTest, SetWorksCorrectly) {
        matrix.set(0, 2, 100);
        EXPECT_EQ(100, matrix.at(0, 2));
    }

    TEST_F(MatrixTest, CorrectNumberOfColumns) {
        EXPECT_EQ(4, matrix.n_cols());
    }

    TEST_F(MatrixTest, CorrectNumberOfRows) {
        EXPECT_EQ(1, matrix.n_rows());
    }

    TEST_F(MatrixTest, CorrectlyPrints) {
        matrix.print();
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}