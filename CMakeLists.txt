cmake_minimum_required(VERSION 3.1)

project(leetcode-solution VERSION 1.0.0 DESCRIPTION "Shilei's Leetcode Solution")

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_subdirectory(src)

add_subdirectory(001-two-sum)
add_subdirectory(002-add-two-numbers)
add_subdirectory(003-longest-substring-without-repeating-characters)
add_subdirectory(004-median-of-two-sorted-arrays)
add_subdirectory(771-jewels-and-stones)
add_subdirectory(1108-defanging-an-ip-address)
add_subdirectory(1119-remove-vowels-from-a-string)
add_subdirectory(1165-single-row-keyboard)
add_subdirectory(1281-subtract-the-product-and-sum-of-digits-of-an-integer)
add_subdirectory(1313-decompress-run-length-encoded-list)
add_subdirectory(1342-number-of-steps-to-reduce-a-number-to-zero)
add_subdirectory(1365-how-many-numbers-are-smaller-than-the-current-number)
add_subdirectory(1389-create-target-array-in-the-given-order)
add_subdirectory(1431-kids-with-the-greatest-number-of-candies)
add_subdirectory(1470-shuffle-the-array)
add_subdirectory(1480-running-sum-of-1d-array)
add_subdirectory(1512-number-of-good-pairs)
add_subdirectory(1528-shuffle-string)
add_subdirectory(1570-dot-product-of-two-sparse-vectors)
