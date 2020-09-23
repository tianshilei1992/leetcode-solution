//
// Created by Shilei Tian on 9/18/20.
//

/*
 * Runtime: Runtime: 0 ms, faster than 100.00% of C++ online submissions for
 * Defanging an IP Address. Memory Usage: 6.1 MB, less than 27.24% of C++ onlin
 * submissions for Defanging an IP Address.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  string defangIPaddr(string address) {
    string ret;
    for (const auto c : address) {
      if (isdigit(c)) {
        ret.push_back(c);
      } else {
        ret.push_back('[');
        ret.push_back('.');
        ret.push_back(']');
      }
    }
    return ret;
  }
};

int main() {
  cout << Solution().defangIPaddr("255.100.50.0") << '\n';
  return 0;
}
