//
// Created by Shilei Tian on 9/18/20.
//

/*
 * Runtime: 0 ms, beats 100.00 % of cpp submissions.
 * Memory Usage: 9 MB, beats 67.94 % of cpp submissions.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    vector<bool> ret(candies.size());

    // Find the greatest number in the array
    int m = 0;
    for (const auto c : candies) {
      m = max(c, m);
    }

    // Check whether there is a way to make it greatest
    for (int i = 0; i < candies.size(); ++i) {
      ret[i] = (candies[i] + extraCandies) >= m;
    }

    return ret;
  }
};

int main() {
  vector<int> candies = {2, 3, 5, 1, 3};
  print_list(Solution().kidsWithCandies(candies, 3));
  return 0;
}
