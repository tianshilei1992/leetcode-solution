//
// Created by Shilei Tian on 9/18/20.
//

/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of
 * Good Pairs. Memory Usage: 7.3 MB, less than 70.71% of C++ online submissions
 * for Number of Good Pairs.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int numIdenticalPairs(vector<int> &nums) {
    sort(nums.begin(), nums.end());

    int c = 0, n = 0;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i - 1] == nums[i]) {
        ++c;
      } else {
        n = n + c * (c + 1) / 2;
        c = 0;
      }
    }

    return n + c * (c + 1) / 2;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 1, 1, 3};
  cout << Solution().numIdenticalPairs(nums) << '\n';
  return 0;
}
