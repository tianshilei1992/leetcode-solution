//
// Created by Shilei Tian on 9/18/20.
//

/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Jewels and
 * Stones. Memory Usage: 6.1 MB, less than 87.54% of C++ online submissions for
 * Jewels and Stones.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int numJewelsInStones(string J, string S) {
    vector<bool> dict(58, false);
    for (const auto c : J) {
      dict[c - 65] = true;
    }
    int n = 0;
    for (const auto c : S) {
      if (dict[c - 65]) {
        ++n;
      }
    }
    return n;
  }
};

int main() {
  cout << Solution().numJewelsInStones("aA", "aAAbbbb") << '\n';
  return 0;
}
