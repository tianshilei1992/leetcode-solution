//
// Created by Shilei Tian on 12/08/20.
//

/*
 * Runtime: 36 ms, faster than 99.88% of C++ online submissions for Sum of Nodes
 * with Even-Valued Grandparent. Memory Usage: 38.8 MB, less than 61.55% of C++
 * online submissions for Sum of Nodes with Even-Valued Grandparent.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  int sumEvenGrandparent(TreeNode *root) {
    int sum = 0;

    if (root == nullptr) {
      return sum;
    }

    if ((root->val & 1) == 0) {
      if (root->left) {
        if (root->left->left) {
          sum += root->left->left->val;
        }
        if (root->left->right) {
          sum += root->left->right->val;
        }
      }
      if (root->right) {
        if (root->right->right) {
          sum += root->right->right->val;
        }
        if (root->right->left) {
          sum += root->right->left->val;
        }
      }
    }

    sum += sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);

    return sum;
  }
};

int main() { return 0; }
