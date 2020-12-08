//
// Created by Shilei Tian on 12/08/20.
//

/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for SSplit a
 * String in Balanced Strings. Memory Usage: 6.5 MB, less than 73.47% of C++
 * online submissions for Split a String in Balanced Strings.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int balancedStringSplit(string s) {
    int ret = 0, count = 0;
    for (const auto c : s) {
      if (c == 'L') {
        ++count;
      } else {
        --count;
      }
      if (count == 0) {
        ++ret;
      }
    }
    return ret;
  }
};

int main() {
  cout << Solution().balancedStringSplit("RLRRLLRLRL") << '\n';
  return 0;
}
