//
// Created by Shilei Tian on 9/28/20.
//

/*
 * Runtime: 428 ms, faster than 94.62% of C++ online submissions for Dot Product
 * of Two Sparse Vectors. Memory Usage: 165 MB, less than 98.69% of C++ online
 * submissions for Dot Product of Two Sparse Vectors.
 */

#include <common.hpp>

using namespace std;

class SparseVector {
  vector<int> &buf;

public:
  SparseVector(vector<int> &nums) : buf(nums) {}

  // Return the dotProduct of two sparse vectors
  int dotProduct(SparseVector &vec) {
    int sum = 0;
    for (int i = 0; i < buf.size(); ++i) {
      sum += buf[i] * vec.buf[i];
    }
    return sum;
  }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);

int main() {
  vector<int> nums1 = {1, 0, 0, 2, 3}, nums2 = {0, 3, 0, 4, 0};
  SparseVector v1(nums1), v2(nums2);
  cout << v1.dotProduct(v2) << '\n';
  return 0;
}
