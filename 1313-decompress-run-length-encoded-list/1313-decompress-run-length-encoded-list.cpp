//
// Created by Shilei Tian on 9/22/20.
//

/*
 * Runtime: 4 ms, faster than 97.19% of C++ online submissions for Decompress
 * Run-Length Encoded List. Memory Usage: 10.2 MB, less than 56.25% of C++
 * online submissions for Decompress Run-Length Encoded List.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  vector<int> decompressRLElist(vector<int> &nums) {
    vector<int> ret;
    for (int i = 0; i < nums.size(); i += 2) {
      int freq = nums[i], val = nums[i + 1];
      ret.resize(ret.size() + freq, val);
    }
    return ret;
  }
};

int main() {
  vector<int> nums = {1, 1, 2, 3};
  const auto ret = Solution().decompressRLElist(nums);
  print_list(ret);
  return 0;
}
