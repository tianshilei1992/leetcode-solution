//
// Created by Shilei Tian on 9/18/20.
//

/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subtract the
 * Product and Sum of Digits of an Integer. Memory Usage: 5.9 MB, less
 * than 58.47% of C++ online submissions for Subtract the Product and Sum of
 * Digits of an Integer.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int subtractProductAndSum(int n) {
    int sum = 0, mul = 1;
    while (n) {
      int d = n % 10;
      n /= 10;
      sum += d;
      mul *= d;
    }
    return mul - sum;
  }
};

int main() {
  cout << Solution().subtractProductAndSum(4421) << '\n';
  return 0;
}
