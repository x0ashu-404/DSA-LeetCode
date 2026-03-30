<h1 align="center">#35 Search Insert Position</h1>

Given:
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

Example:
nums = {1,3,5,6}  and target = 5

Revision Trigger:
answer is always present at st

🔹 Pattern:
Binary Search

🔹 Core Idea:
Shrink range until st > end

🔹 Mistake done:
Tried to return early (i.e. applied extra and unuseful if-else conditions)

🔹 Time complexity:
O(log n)
