# 5. Total Hamming Distance

### Description
The Hamming distance between two integers is the number of positions at which the corresponding bits are different. Now, given an integer array `nums`, find the **sum of Hamming distances** between all pairs of the integers in the array.

**Optimization Hint:** For each bit position (0 to 31), count how many numbers have that bit set ($k$) and how many don't ($n-k$). The distance contribution for that bit is $k \times (n-k)$.

---

### Input
- An array of integers **nums**

**Constraints:**
- 1 ≤ nums.length ≤ 10⁴
- 0 ≤ nums[i] ≤ 10⁹

---

### Output
Print a single integer — the total sum of Hamming distances for all possible pairs.

---

### Sample
**Input:**
[4, 14, 2]

**Note:** Hamming(4, 14) = 2
Hamming(4, 2) = 2
Hamming(14, 2) = 2
Total = 6.

**Output:**
6