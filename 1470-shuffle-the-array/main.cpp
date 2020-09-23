//
// Created by Shilei Tian on 9/18/20.
//

/*
 * Runtime: 8 ms, beats 92.67 % of cpp submissions.
 * Memory Usage: 9.7 MB, beats 96.62 % of cpp submissions.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  vector<int> shuffle(vector<int> &nums, int n) {
    vector<int> ret(nums.size());
    // Put x_n into right place
    int i = 0;
    unsigned j = 0;
    for (; i < n; ++i, ++j) {
      ret[j << 1U] = nums[i];
    }
    // Put x_{n+1} into right place
    j = 0;
    for (; i < 2 * n; ++i, ++j) {
      ret[(j << 1U) + 1] = nums[i];
    }
    return ret;
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};
  int n = nums.size() / 2;
  auto ret = Solution().shuffle(nums, n);
  for (const auto num : ret) {
    cout << num << '\n';
  }

  return 0;
}
