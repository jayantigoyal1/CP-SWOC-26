# 3. Subsets

### Description
Given an integer array `nums` of unique elements, return all possible **subsets** (the power set). The solution set must not contain duplicate subsets. 

**Bitwise Hint:** If an array has $n$ elements, there are $2^n$ subsets. You can use a bitmask from $0$ to $2^n - 1$ where the $i$-th bit indicates whether the $i$-th element is included in the subset.

---

### Input
- An array of integers **nums**

**Constraints:**
- 1 ≤ nums.length ≤ 10
- -10 ≤ nums[i] ≤ 10
- All numbers in `nums` are unique.

---

### Output
Print the list of all subsets.

---

### Sample
**Input:**
[1, 2, 3]

**Output:**
[[], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3]]

---