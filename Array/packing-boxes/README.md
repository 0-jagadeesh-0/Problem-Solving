Given a list of integers nums, pack consecutive elements of the same value into sublists.

**Note:** If there's only one occurrence in the list it should still be in its own sublist.

**Constraints**

- 0 ≤ n ≤ 100,000 where n is the length of nums

**Example 1**
**Input**
```
nums = [4, 4, 1, 6, 6, 6, 1, 1, 1, 1]
```
**Output**
```
[
    [4, 4],
    [1],
    [6, 6, 6],
    [1, 1, 1, 1]
]
```