//
// Created by Shilei Tian on 9/21/20.
//

/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of
 * Steps to Reduce a Number to Zero. Memory Usage: 5.9 MB, less than 58.21% of
 * C++ online submissions for Number of Steps to Reduce a Number to Zero.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int numberOfSteps(int num) {
    int count = 0;
    while (num) {
      if (num & 0x1) {
        num -= 1;
      } else {
        num >>= 1;
      }
      ++count;
    }
    return count;
  }
};

int main() {
  cout << Solution().numberOfSteps(8) << '\n';
  return 0;
}
