cmake_minimum_required(VERSION 3.1)

project(leetcode-solution VERSION 1.0.0 DESCRIPTION "Shilei's Leetcode Solution")

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_subdirectory(src)

add_subdirectory(001-two-sum)
add_subdirectory(002-add-two-numbers)
add_subdirectory(003-longest-substring-without-repeating-characters)
add_subdirectory(004-median-of-two-sorted-arrays)
add_subdirectory(1480-running-sum-of-1d-array)
