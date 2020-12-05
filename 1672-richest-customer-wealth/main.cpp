//
// Created by Shilei Tian on 12/05/20.
//

/*
 * Runtime: 8 ms, faster than 93.17% of C++ online submissions for Richest
 * Customer Wealth. Memory Usage: 8.1 MB, less than 93.20% of C++ online
 * submissions for Richest Customer Wealth.
 */

#include <common.hpp>

using namespace std;

int fast_max(int x, int y) { return x ^ ((x ^ y) & -(x < y)); }

class Solution {
public:
  int maximumWealth(vector<vector<int>> &accounts) {
    int ret = -1;
    for (const auto &account : accounts) {
      int sum = 0;
      for (const auto money : account) {
        sum += money;
      }
      ret = ::fast_max(ret, sum);
    }
    return ret;
  }
};

int main() {
  vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
  cout << Solution().maximumWealth(accounts) << '\n';
  return 0;
}
