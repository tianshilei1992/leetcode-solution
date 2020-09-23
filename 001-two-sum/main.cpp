//
// Created by Shilei Tian on 8/31/19.
//

/*
 * Runtime: 4 ms, faster than 99.70% of C++ online submissions for Two Sum.
 * Memory Usage: 10.1 MB, less than 55.86% of C++ online submissions for Two
 * Sum.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> map;

    for (auto i = 0; i < nums.size(); ++i) {
      const auto key = target - nums[i];

      if (map.find(key) != map.end()) {
        return vector<int>({i, map[key]});
      }

      map[nums[i]] = i;
    }

    return vector<int>();
  }
};

int main() {
  vector<int> nums = {2, 7, 11, 15};

  auto res = Solution().twoSum(nums, 9);

  for (auto e : res) {
    cout << e << ' ';
  }

  cout << endl;

  return 0;
}
