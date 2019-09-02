//
// Created by Shilei Tian on 9/2/19.
//

/*
 * Runtime: 16 ms, faster than 97.54% of C++ online submissions for Add Two
 * Numbers. Memory Usage: 9.9 MB, less than 94.86% of C++ online submissions for
 * Add Two Numbers.
 */

#include <common.hpp>

using namespace std;

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    // Create two nodes representing the head node of two linked lists. We need
    // to do this because we need two pointers to the "previous" node.
    auto h1 = new ListNode(0), h2 = new ListNode(0);
    h1->next = l1;
    h2->next = l2;

    auto p1 = l1, p2 = l2, q1 = h1, q2 = h2;

    auto carry = 0, tmp = 0;

    while (p1 && p2) {
      tmp = p1->val + p2->val + carry;
      // Reuse memory of the first linked list
      p1->val = tmp % 10;
      carry = tmp / 10;
      p1 = p1->next;
      q1 = q1->next;
      p2 = p2->next;
      q2 = q2->next;
    }

    while (p1) {
      tmp = p1->val + carry;
      p1->val = tmp % 10;
      carry = tmp / 10;
      p1 = p1->next;
      q1 = q1->next;
    }

    // When reaching here, p1 and q1->next must be nullptr. Then in each
    // iteration, we need to create new node.
    while (p2) {
      tmp = p2->val + carry;
      q1->next = new ListNode(tmp % 10);
      carry = tmp / 10;
      p2 = p2->next;
      q1 = q1->next;
    }

    if (carry) {
      q1->next = new ListNode(1);
    }

    delete h1;
    delete h2;

    return l1;
  }
};

int main() {
  vector<int> v1 = {0}, v2 = {7, 3};
  auto l1 = construct_linked_list_from_list(v1),
       l2 = construct_linked_list_from_list(v2);

  auto res = Solution().addTwoNumbers(l1, l2);
  print_linked_list(res);

  return 0;
}
