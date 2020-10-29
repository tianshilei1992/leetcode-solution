//
// Created by Shilei Tian on 10/29/20.
//

/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum
 * Nesting Depth of the Parentheses. Memory Usage: 6.7 MB, less than 40.30% of
 * C++ online submissions for Maximum Nesting Depth of the Parentheses.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int maxDepth(string s) {
    int d = 0, m = d;
    for (const auto ch : s) {
      if (ch == '(') {
        ++d;
        m = max(d, m);
      } else if (ch == ')') {
        --d;
      }
    }
    return m;
  }
};

int main() {
  cout << Solution().maxDepth("1+(2*3)/(2-1)") << '\n';
  return 0;
}
