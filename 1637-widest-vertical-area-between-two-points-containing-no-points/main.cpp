//
// Created by Shilei Tian on 11/11/20.
//

/*
 * Runtime: 444 ms, faster than 90.66% of C++ online submissions for Widest
 * Vertical Area Between Two Points Containing No Points. Memory Usage: 68.9 MB,
 * less than 7.65% of C++ online submissions for Widest Vertical Area Between
 * Two Points Containing No Points.
 */

#include <common.hpp>

using namespace std;

int fast_max(int x, int y) { return x ^ ((x ^ y) & -(x < y)); }

class Solution {
public:
  int maxWidthOfVerticalArea(vector<vector<int>> &points) {
    vector<int> buffer;
    transform(points.cbegin(), points.cend(), std::back_inserter(buffer),
              [](const vector<int> &e) { return e[0]; });
    sort(buffer.begin(), buffer.end());
    int max_gap = 0;
    for (int i = 1; i < points.size(); ++i) {
      max_gap = fast_max(buffer[i] - buffer[i - 1], max_gap);
    }
    return max_gap;
  }
};

int main() { return 0; }
