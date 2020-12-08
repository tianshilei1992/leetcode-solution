//
// Created by Shilei Tian on 12/08/20.
//

/*
 * Runtime: 0 ms, faster than 100% of C++ online submissions for Goal Parser
 * Interpretation. Memory Usage: 6.3 MB, less than 75.44% of C++ online
 * submissions for Goal Parser Interpretation.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  string interpret(string command) {
    string ret;
    int i = 0, w = command.size();
    while (i < command.size()) {
      if (command[i++] == 'G') {
        ret.push_back('G');
        continue;
      }
      if (i < w && command[i++] == ')') {
        ret.push_back('o');
        continue;
      }
      if (i < w) {
        ret.append("al");
        i += 2;
      }
    }
    return ret;
  }
};

int main() {
  cout << Solution().interpret("G()(al)") << '\n';
  return 0;
}
