//
// Created by Shilei Tian on 12/08/20.
//

/*
 * Runtime: 0 ms, beats 100% of cpp submissions.
 * Memory Usage: 6.2 MB, beats 56.04 % of cpp submissions.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int xorOperation(int n, int start) {
    int num = start, ret = num;
    for (int i = 1; i < n; ++i) {
      ret ^= (num += 2);
    }
    return ret;
  }
};

int main() {
  cout << Solution().xorOperation(4, 3) << '\n';
  return 0;
}
