//
// Created by Shilei Tian on 9/18/20.
//

/*
 * Runtime: 4 ms, beats 91.93 % of cpp submissions.
 * Memory Usage: 8.6 MB, beats 72.74 % of cpp submissions.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    vector<int> ret;

    int sum = 0;
    for (const auto num : nums) {
      sum += num;
      ret.emplace_back(sum);
    }

    return ret;
  }
};

int main() {
  vector<int> nums = {3, 1, 2, 10, 1};
  auto ret = Solution().runningSum(nums);
  for (const auto num : ret) {
    cout << num << '\n';
  }

  return 0;
}
