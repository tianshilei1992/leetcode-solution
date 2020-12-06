//
// Created by Shilei Tian on 12/05/20.
//

/*
 * Runtime: 704 ms, faster than 83.76% of C++ online submissions for Find a
 * Corresponding Node of a Binary Tree in a Clone of That Tree. Memory Usage:
 * 166.1 MB, less than 64.97% of C++ online submissions for Find a Corresponding
 * Node of a Binary Tree in a Clone of That Tree.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned,
                          TreeNode *target) {
    if (original == target) {
      return cloned;
    }

    if (original->left) {
      if (const auto p = getTargetCopy(original->left, cloned->left, target)) {
        return p;
      }
    }

    if (original->right) {
      if (const auto p =
              getTargetCopy(original->right, cloned->right, target)) {
        return p;
      }
    }

    return nullptr;
  }
};

int main() { return 0; }
