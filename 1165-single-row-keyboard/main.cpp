//
// Created by Shilei Tian on 10/29/20.
//

/*
 * Runtime: 4 ms, faster than 99.29% of C++ online submissions for Single-Row
 * Keyboard. Memory Usage: 7.5 MB, less than 100.00% of C++ online submissions
 * for Single-Row Keyboard.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int calculateTime(string keyboard, string word) {
    int map[26][26] = {0};
    for (int i = 0; i < keyboard.size(); ++i) {
      for (int j = i + 1; j < keyboard.size(); ++j) {
        map[keyboard[i] - 'a'][keyboard[j] - 'a'] = j - i;
        map[keyboard[j] - 'a'][keyboard[i] - 'a'] = j - i;
      }
    }
    int ret = 0;
    for (int i = 1; i < word.size(); ++i) {
      ret += map[word[i] - 'a'][word[i - 1] - 'a'];
    }
    ret += map[word[0] - 'a'][keyboard[0] - 'a'];
    return ret;
  }
};

int main() {
  cout << Solution().calculateTime("pqrstuvwxyzabcdefghijklmno", "leetcode")
       << '\n';
  return 0;
}
