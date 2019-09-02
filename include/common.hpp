//
// Created by Shilei Tian on 8/31/19.
//

#ifndef LEETCODE_SOLUTION_COMMON_HPP
#define LEETCODE_SOLUTION_COMMON_HPP

#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <unordered_map>
#include <vector>

struct ListNode {
  int val;
  ListNode *next;
  explicit ListNode(int x) : val(x), next(nullptr) {}
};

inline ListNode *construct_linked_list_from_list(const std::vector<int> &vec) {
  auto h = new ListNode(0);
  auto p = h;

  for (auto e : vec) {
    p->next = new ListNode(e);
    p = p->next;
  }

  auto l = h->next;
  delete (h);

  return l;
}

inline void print_linked_list(ListNode *l) {
  while (l) {
    std::cout << l->val;

    l = l->next;
    if (l) {
      std::cout << "->";
    }
  }
}

#endif // LEETCODE_SOLUTION_COMMON_HPP
