#include "gtest/gtest.h"
#include <iostream>
#include <vector>

std::vector<int> task(std::vector<int> v, int n) {
    for (int i = 0; i < v.size(); i++) {
        v[i] += n;
    }
    return v;
}

TEST(TestGroupName, Subtest_1) {
    std::vector<int> v = { 0, 2, 4 };
    int n = 1;
    std::vector<int> v2 = task(v, n);
    v = std::vector<int>{ 1, 3, 5 };
    ASSERT_EQ(v2, v);
}

TEST(TestGroupName, Subtest_2) {
    std::vector<int> v = {-1, 0, 3, 5, 9};
    std::vector<int> v2 = task(v, 10);
    v2 = task(v2, -10);
    ASSERT_EQ(v2, v);
}

int main(int argc, char** argv){
    setlocale(LC_ALL, "Russian");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
