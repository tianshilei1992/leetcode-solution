//
// Created by Shilei Tian on 12/08/20.
//

/*
 * Runtime: Runtime: 168 ms, faster than 86.67% of C++ online submissions for
 * Range Sum of BST. Memory Usage: 65.2 MB, less than 84.11% of C++ online
 * submissions for Range Sum of BST.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int rangeSumBST(TreeNode *root, int low, int high) {
    if (root == nullptr) {
      return 0;
    }
    int sum = 0;
    if (root->val > low && root->left) {
      sum += rangeSumBST(root->left, low, high);
    }
    if (root->val < high && root->right) {
      sum += rangeSumBST(root->right, low, high);
    }
    if (root->val >= low && root->val <= high) {
      sum += root->val;
    }
    return sum;
  }
};

int main() { return 0; }
