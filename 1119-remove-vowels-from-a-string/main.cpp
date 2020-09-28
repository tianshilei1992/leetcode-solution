//
// Created by Shilei Tian on 9/28/20.
//

/*
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove
 * Vowels from a String. Memory Usage: 6.3 MB, less than 69.81% of C++ online
 * submissions for Remove Vowels from a String.
 */

#include <common.hpp>

using namespace std;

class Solution {
  static bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
  }

public:
  string removeVowels(string S) {
    string ret;
    for (const auto c : S) {
      if (!isVowel(c)) {
        ret.push_back(c);
      }
    }
    return ret;
  }
};

int main() {
  cout << Solution().removeVowels("leetcodeisacommunityforcoders") << '\n';
  return 0;
}
