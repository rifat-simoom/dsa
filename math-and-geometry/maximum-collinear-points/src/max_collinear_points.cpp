#include "max_collinear_points.h"
#include <unordered_map>
#include <limits>
unsigned int Solution::maxPoints(const std::vector<std::vector<int>>& points) const {
    if (points.size() <= 2) {
        return static_cast<unsigned int>(points.size());
    }

    unsigned int maxCount = 0;

    for (size_t i = 0; i < points.size(); ++i) {
        std::unordered_map<double, unsigned int> slopeCounts;
        for (size_t j = i+1; j < points.size(); ++j) {
                double slope = calculateSlope(points[i], points[j]);

            if (slopeCounts.find(slope) == slopeCounts.end()) {
                slopeCounts[slope] = 2;
            }else {
                slopeCounts[slope]++;
            }

            if (slopeCounts[slope] > maxCount) {
                maxCount = slopeCounts[slope];
            }

        }

    }

    return maxCount;
}

double Solution::calculateSlope(const std::vector<int>& a, const std::vector<int>& b) const {
    if (a[0] == b[0]) {
        return std::numeric_limits<double>::infinity();
    }
    return static_cast<double>(b[1] - a[1]) / static_cast<double>(b[0] - a[0]);
}
