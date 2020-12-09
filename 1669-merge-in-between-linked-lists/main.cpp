//
// Created by Shilei Tian on 12/08/20.
//

/*
 * Runtime: 424 ms, faster than 92.13% of C++ online submissions for Merge In
 * Between Linked Lists. Memory Usage: 94.9 MB, less than 19.14% of C++ online
 * submissions for Merge In Between Linked Lists.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2) {
    auto p = list1, pn = p->next;
    // Find the node with value a
    while (pn && pn->val != a) {
      p = pn;
      pn = pn->next;
    }
    // We cannot find a
    if (pn == nullptr) {
      return list1;
    }
    // Attach list2 to list1
    p->next = list2;
    // Find the tail node of list2
    while (p->next) {
      p = p->next;
    }
    // Now pn->val == a, we need to find where b is
    while (pn && pn->val != b) {
      pn = pn->next;
    }
    // Cannot find b
    if (pn == nullptr) {
      return list1;
    }
    // Attach the remaining part of list1 to the tail node of list2
    p->next = pn->next;
    return list1;
  }
};

int main() { return 0; }
