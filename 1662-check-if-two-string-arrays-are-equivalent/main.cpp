//
// Created by Shilei Tian on 12/05/20.
//

/*
 * Runtime: 8 ms, faster than 45.99% of C++ online submissions for Check If Two
 * String Arrays are Equivalent. Memory Usage: 11.8 MB, less than 21.92% of C++
 * online submissions for Check If Two String Arrays are Equivalent.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2) {
    int i = 1;
    while (i < word1.size() && i < word2.size()) {
      word1[0].append(word1[i]);
      word2[0].append(word2[i]);
      ++i;
    }
    while (i < word1.size()) {
      word1[0].append(word1[i]);
      ++i;
    }
    while (i < word2.size()) {
      word2[0].append(word2[i]);
      ++i;
    }
    return word1[0] == word2[0];
  }
};

int main() {
  vector<string> word1 = {"ab", "c"}, word2 = {"a", "bc"};
  cout << Solution().arrayStringsAreEqual(word1, word2) << '\n';
  return 0;
}
