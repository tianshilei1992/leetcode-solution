//
// Created by Shilei Tian on 9/18/20.
//

/*
 * Runtime: 12 ms, faster than 91.66% of C++ online submissions for Shuffle
 * String. Memory Usage: 15.2 MB, less than 93.44% of C++ online submissions for
 * Shuffle String.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  string restoreString(string s, vector<int> &indices) {
    for (int i = 0; i < indices.size(); i++) {
      while (indices[i] != i) {
        swap(s[i], s[indices[i]]);
        swap(indices[i], indices[indices[i]]);
      }
    }

    return s;
  }
};

int main() {
  vector<int> indices = {0, 1, 2};
  cout << Solution().restoreString("abc", indices) << '\n';
  return 0;
}
