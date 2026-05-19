# 4Sum

## Problem Statement

Given an integer array `nums` and an integer `target`, return all unique quadruplets `[nums[a], nums[b], nums[c], nums[d]]` such that:

`nums[a] + nums[b] + nums[c] + nums[d] == target`

> The solution set must not contain duplicate quadruplets.

## Example

**Input:**  
`nums = [1,0,-1,0,-2,2]`  
`target = 0`

**Output:**  
`[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]`

## Approach

Used **Sorting + Two Pointer** approach.

- First sort the array.
- Fix two elements using nested loops.
- Use two pointers (`left` and `right`) to find remaining two elements.
- Skip duplicates to avoid repeated quadruplets.
- apply long long data type to counter the overflow edge case.

## Time Complexity

`O(n³)`

## Space Complexity

`O(1)`  
(excluding output array)

## Key Learning

- Two Pointer technique
- Handling duplicates carefully
- Nested iteration with optimization
- Extending 3Sum pattern to 4Sum
