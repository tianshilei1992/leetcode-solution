//
// Created by Shilei Tian on 12/08/20.
//

/*
 * Runtime: 52 ms, faster than 80.80% of C++ online submissions for Deepest
 * Leaves Sum. Memory Usage: 39.5 MB, less than 37.38% of C++ online submissions
 * for Deepest Leaves Sum.
 */

#include <common.hpp>

using namespace std;

class Solution {
  queue<TreeNode *> q;

public:
  int deepestLeavesSum(TreeNode *root) {
    q.push(root);
    q.push(nullptr);
    TreeNode *node = nullptr;
    while (!q.empty()) {
      int sum = 0;
      while (q.front() != nullptr) {
        node = q.front();
        q.pop();
        sum += node->val;
        if (node->left) {
          q.push(node->left);
        }
        if (node->right) {
          q.push(node->right);
        }
      }
      q.push(nullptr);
      q.pop();
      if (q.front() == nullptr) {
        return sum;
      }
    }
    return 0;
  }
};

int main() { return 0; }
