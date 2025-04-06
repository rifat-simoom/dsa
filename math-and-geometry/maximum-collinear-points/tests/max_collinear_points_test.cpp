#include <gtest/gtest.h>
#include "../src/max_collinear_points.h"

TEST(MaxCollinearPointsTest, ThreeOnALine) {
    std::vector<std::vector<int>> points = {{1, 1}, {2, 2}, {3, 3}, {1, 2}};
    Solution solver;
    EXPECT_EQ(solver.maxPoints(points), 3);
}

TEST(MaxCollinearPointsTest, NoMoreThanTwoCollinear) {
    std::vector<std::vector<int>> points = {{1, 1}, {2, 3}, {4, 5}, {0, 0}};
    Solution solver;
    EXPECT_EQ(solver.maxPoints(points), 2);
}

TEST(MaxCollinearPointsTest, SinglePoint) {
    std::vector<std::vector<int>> points = {{1, 1}};
    Solution solver;
    EXPECT_EQ(solver.maxPoints(points), 1);
}

TEST(MaxCollinearPointsTest, NoPoints) {
    std::vector<std::vector<int>> points = {};
    Solution solver;
    EXPECT_EQ(solver.maxPoints(points), 0);
}

TEST(MaxCollinearPointsTest, AllPointsOnSameLine) {
    std::vector<std::vector<int>> points = {{1, 1}, {2, 2}, {3, 3}, {4, 4}};
    Solution solver;
    EXPECT_EQ(solver.maxPoints(points), 4);
}

TEST(MaxCollinearPointsTest, FourPointsOnSameLine) {
    std::vector<std::vector<int>> points = {{1, 1}, {1, 3}, {2, 2}, {3, 1},{3, 3}, {4, 4}};
    Solution solver;
    EXPECT_EQ(solver.maxPoints(points), 4);
}

TEST(MaxCollinearPointsTest, LeetCodeFourPointsOnSameLine) {
    std::vector<std::vector<int>> points ={
        {1, 1},
        {3, 2},
        {5, 3},
        {4, 1},
        {2, 3},
        {1, 4}
    };
    Solution solver;
    EXPECT_EQ(solver.maxPoints(points), 4);
}