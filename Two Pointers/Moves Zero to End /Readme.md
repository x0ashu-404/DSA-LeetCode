# Move Zeroes

## Problem Statement

Given an integer array `nums`, move all `0's` to the end while maintaining the relative order of the non-zero elements.

> Note: Solve this problem in-place without making a copy of the array.

---

## Example 1

**Input:**  
`nums = [0,1,0,3,12]`

**Output:**  
`[1,3,12,0,0]`

---

## Example 2

**Input:**  
`nums = [0]`

**Output:**  
`[0]`

---

## Approach

Used **Two Pointer** approach.

- `pos` stores the position where the next non-zero element should be placed.
- Traverse the array using a loop.
- If current element is non-zero:
  - swap `nums[pos]` and `nums[i]`
  - increment `pos`

This keeps all non-zero elements in correct order and pushes all zeroes to the end.

---

## Dry Run

**Input:**  
`[0,1,0,3,12]`

**Output:**  
`[1,3,12,0,0]`

---

## Time Complexity

`O(n)`

---

## Space Complexity

`O(1)`

---

## Key Learning

- In-place array manipulation
- Two pointer technique
- Maintaining relative order while swapping
