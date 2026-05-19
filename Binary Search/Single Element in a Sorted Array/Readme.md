# Single Element in a Sorted Array

## Problem Statement

Given a sorted array consisting of only integers where every element appears exactly twice except for one element which appears only once, find the single element.

> Solve the problem in `O(log n)` time and `O(1)` space.

## Example 1

**Input:**  
`nums = [1,1,2,3,3,4,4,8,8]`

**Output:**  
`2`

## Approach

Used **Binary Search** approach.

- Find `mid` element.
- Check whether `nums[mid]` is the unique element.
- Use index parity (`even/odd`) to decide which half to search.
- If pairing pattern breaks, unique element lies on that side.

### Observation

- Before the single element:
  - first occurrence starts at even index
- After the single element:
  - first occurrence starts at odd index

This observation helps reduce search space using binary search.

## Dry Run

**Input:**  
`[1,1,2,3,3,4,4]`

- `mid = 3`
- pairing breaks around `2`
- unique element found

**Output:**  
`2`

## Time Complexity

`O(log n)`

## Space Complexity

`O(1)`

## Key Learning

- Binary Search on answer space
- Using index parity
- Finding pattern break in sorted arrays
