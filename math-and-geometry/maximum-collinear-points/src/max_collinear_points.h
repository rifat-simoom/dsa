#ifndef MAX_COLLINEAR_POINTS_H
#define MAX_COLLINEAR_POINTS_H

#include <vector>


class Solution {
public:
    [[nodiscard]] unsigned int maxPoints(const std::vector<std::vector<int>>& points) const;

private:
    [[nodiscard]] double calculateSlope(const std::vector<int>& a, const std::vector<int>& b) const;
};

#endif
