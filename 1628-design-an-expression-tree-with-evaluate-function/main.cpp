//
// Created by Shilei Tian on 10/30/20.
//

/*
 * Runtime: 0 ms, faster than 100% of C++ online submissions for Design an
 * Expression Tree With Evaluate Function. Memory Usage: 8.5 MB, less than 5.33%
 * of C++ online submissions for Design an Expression Tree With Evaluate
 * Function.
 */

#include <common.hpp>

#include <stack>

using namespace std;

/**
 * This is the interface for the expression tree Node.
 * You should not remove it, and you can define some classes to implement it.
 */

class Node {
  const int val;

public:
  explicit Node(int v) : val(v) {}

  int evaluate() const { return val; };
};

/**
 * This is the TreeBuilder class.
 * You can treat it as the driver code that takes the postinfix input
 * and returns the expression tree represnting it as a Node.
 */

class TreeBuilder {
  stack<Node> stk;

  Node get_one_operand() {
    Node op = stk.top();
    stk.pop();
    return op;
  }

public:
  Node *buildTree(vector<string> &postfix) {
    for (const auto &s : postfix) {
      if (s[0] != '+' && s[0] != '-' && s[0] != '*' && s[0] != '/') {
        stk.emplace(stoi(s));
        continue;
      }
      Node rhs(get_one_operand()), lhs(get_one_operand());
      int val;
      if (s[0] == '+') {
        val = lhs.evaluate() + rhs.evaluate();
      } else if (s[0] == '-') {
        val = lhs.evaluate() - rhs.evaluate();
      } else if (s[0] == '*') {
        val = lhs.evaluate() * rhs.evaluate();
      } else {
        val = lhs.evaluate() / rhs.evaluate();
      }
      stk.emplace(val);
    }
    return &stk.top();
  }
};

/**
 * Your TreeBuilder object will be instantiated and called as such:
 * TreeBuilder* obj = new TreeBuilder();
 * Node* expTree = obj->buildTree(postfix);
 * int ans = expTree->evaluate();
 */

int main() { return 0; }
