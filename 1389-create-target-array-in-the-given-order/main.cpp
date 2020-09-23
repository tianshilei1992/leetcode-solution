//
// Created by Shilei Tian on 9/22/20.
//

/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Create
 * Target Array in the Given Order. Memory Usage: 8.4 MB, less than 64.80% of
 * C++ online submissions for Create Target Array in the Given Order.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  vector<int> createTargetArray(vector<int> &nums, vector<int> &index) {
    vector<int> ret;
    for (int i = 0; i < nums.size(); ++i) {
      ret.insert(ret.begin() + index[i], nums[i]);
    }
    return ret;
  }
};

int main() {
  vector<int> nums = {0, 1, 2, 3, 4}, index = {0, 1, 2, 2, 1};
  const auto ret = Solution().createTargetArray(nums, index);
  print_list(ret);
  return 0;
}
