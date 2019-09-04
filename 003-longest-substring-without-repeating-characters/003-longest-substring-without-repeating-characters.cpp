//
// Created by Shilei Tian on 9/4/19.
//

/*
 * Runtime: 8 ms, faster than 94.41% of C++ online submissions for Longest
 * Substring Without Repeating Characters. Memory Usage: 10.5 MB, less
 * than 71.14% of C++ online submissions for Longest Substring Without Repeating
 * Characters.
 */

#include <common.hpp>

using namespace std;

class Solution {
private:
  int quick_max(int x, int y) { return x ^ ((x ^ y) & -(x < y)); }

public:
  int lengthOfLongestSubstring(string s) {
    vector<int> map(256, -1);
    auto max_len = 0, start = -1;

    for (int i = 0; i < s.size(); ++i) {
      if (map[s[i]] > start) {
        start = map[s[i]];
      }

      map[s[i]] = i;
      max_len = quick_max(max_len, i - start);
    }

    return max_len;
  }
};

int main() {
  cout << Solution().lengthOfLongestSubstring("pwwkew") << endl;
  return 0;
}
