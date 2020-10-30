//
// Created by Shilei Tian on 10/29/20.
//

/*
 * Runtime: 20 ms, faster than 82.90% of C++ online submissions for Group the
 * People Given the Group Size They Belong To. Memory Usage: 13.4 MB, less
 * than 12.65% of C++ online submissions for Group the People Given the Group
 * Size They Belong To.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  vector<vector<int>> groupThePeople(vector<int> &groupSizes) {
    vector<vector<int>> ret;
    vector<int> map(501, -1);
    for (int i = 0; i < groupSizes.size(); ++i) {
      const auto size = groupSizes[i];
      if (map[size] == -1) {
        map[size] = ret.size();
        ret.emplace_back();
      }
      vector<int> &v = ret[map[size]];
      v.push_back(i);
      if (v.size() == size) {
        map[size] = -1;
      }
    }
    return ret;
  }
};

int main() {
  vector<int> group_sizes = {2, 1, 3, 3, 3, 2};
  const auto ret = Solution().groupThePeople(group_sizes);
  for (const auto &g : ret) {
    print_list(g);
  }
  return 0;
}
