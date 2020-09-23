//
// Created by Shilei Tian on 9/22/20.
//

/*
 * Runtime: 4 ms, faster than 99.74% of C++ online submissions for How Many
 * Numbers Are Smaller Than the Current Number. Memory Usage: 10.5 MB, less
 * than 29.84% of C++ online submissions for How Many Numbers Are Smaller Than
 * the Current Number.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
    vector<int> count(101, 0);
    for (const auto num : nums) {
      count[num]++;
    }
    for (int i = 1; i < count.size(); ++i) {
      count[i] += count[i - 1];
    }
    for (auto &num : nums) {
      if (num) {
        num = count[num - 1];
      }
    }
    return nums;
  }
};

int main() {
  vector<int> nums = {8, 1, 2, 2, 3};
  const auto ret = Solution().smallerNumbersThanCurrent(nums);
  print_list(ret);
  return 0;
}
