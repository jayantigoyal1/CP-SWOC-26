# 4. Maximum XOR With an Element From Array 

### Description
You are given an array `nums` and a query array `queries` where `queries[i] = [xi, mi]`. The answer to the $i^{th}$ query is the maximum bitwise XOR value of `xi` and any element of `nums` that does not exceed `mi`. If all elements in `nums` are larger than `mi`, the answer is -1.

**Bitwise Hint:** Sort the array and the queries to process them offline using a **Trie**.

---

### Input
- An array of integers **nums**
- A 2D array of integers **queries**

**Constraints:**
- $1 \le nums.length, queries.length \le 10^5$
- $0 \le nums[i], x_i, m_i \le 10^9$

---

### Output
Print an array of results for each query.

---

### Sample
**Input:**
nums = [0, 1, 2, 3, 4], queries = [[3, 1]]

**Note:** For query [3, 1], only 0 and 1 from `nums` are $\le 1$. $3 \oplus 0 = 3$, $3 \oplus 1 = 2$. Max is 3.

**Output:**
[3]

---