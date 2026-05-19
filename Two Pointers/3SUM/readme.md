# 3Sum

## Problem Statement

Given an integer array `nums`, return all the unique triplets `[nums[i], nums[j], nums[k]]` such that:

`nums[i] + nums[j] + nums[k] == 0`

> The solution set must not contain duplicate triplets.

## Example

**Input:**  
`nums = [-1,0,1,2,-1,-4]`

**Output:**  
`[[-1,-1,2],[-1,0,1]]`

## Approach

Used **Sorting + Two Pointer** approach.

- First sort the array.
- Fix one element using loop.
- Use two pointers (`left` and `right`) to find remaining two elements.
- Skip duplicates to avoid repeated triplets. check when fixing the first element and for those two pointers seperately

## Time Complexity

`O(n²)`

## Space Complexity

`O(1)`  
(excluding output array)

## Key Learning

- Two Pointer technique
- Avoiding duplicates
- Using sorting for optimization
- Pair sum inside array problems
