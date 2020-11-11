//
// Created by Shilei Tian on 11/11/20.
//

/*
 * Runtime: 56 ms, faster than 91.82% of C++ online submissions for Subrectangle
 * Queries. Memory Usage: 18.4 MB, less than 5.90% of C++ online submissions for
 * Subrectangle Queries.
 */

#include <common.hpp>

using namespace std;

class SubrectangleQueries {
  vector<vector<int>> &buffer;

public:
  SubrectangleQueries(vector<vector<int>> &rectangle) : buffer(rectangle) {}

  void updateSubrectangle(int row1, int col1, int row2, int col2,
                          int newValue) {
    for (int i = row1; i <= row2; ++i) {
      auto itr = buffer[i].begin();
      fill(itr + col1, itr + col2 + 1, newValue);
    }
  }

  int getValue(int row, int col) { return buffer[row][col]; }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */

int main() { return 0; }
