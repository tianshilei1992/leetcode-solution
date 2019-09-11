//
// Created by Shilei Tian on 9/11/19.
//

/*
 * Runtime: 20 ms, faster than 69.52% of C++ online submissions for Median of
 * Two Sorted Arrays. Memory Usage: 9.8 MB, less than 60.82% of C++ online
 * submissions for Median of Two Sorted Arrays.
 */

#include <common.hpp>

using namespace std;

class Solution {
  static int kth_element(const vector<int> &num1, const vector<int> &num2,
                         const size_t k, const size_t s1, const size_t s2) {
    const auto m = num1.size(), n = num2.size();

    if (s1 == m) {
      return num2[s2 + k - 1];
    }

    if (s2 == n) {
      return num1[s1 + k - 1];
    }

    if (k == 1) {
      return min(num1[s1], num2[s2]);
    }

    const auto mid = k / 2 - 1;

    if (s1 + mid < m && s2 + mid < n) {
      if (num1[s1 + mid] < num2[s2 + mid]) {
        return kth_element(num1, num2, k - k / 2, s1 + k / 2, s2);
      }

      return kth_element(num1, num2, k - k / 2, s1, s2 + k / 2);
    } else if (s1 + mid < m) {
      return kth_element(num1, num2, k - k / 2, s1 + k / 2, s2);
    } else {
      return kth_element(num1, num2, k - k / 2, s1, s2 + k / 2);
    }
  }

public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    const auto m = nums1.size(), n = nums2.size(), t = m + n;

    if (t & 0x1) {
      return kth_element(nums1, nums2, t / 2 + 1, 0, 0);
    }

    const auto m1 = kth_element(nums1, nums2, t / 2, 0, 0),
               m2 = kth_element(nums1, nums2, t / 2 + 1, 0, 0);

    return (m1 + m2) / 2.0;
  }
};

int main() {
  vector<int> nums1 = {1, 2}, nums2 = {3, 4};
  cout << Solution().findMedianSortedArrays(nums1, nums2) << endl;
  return 0;
}
