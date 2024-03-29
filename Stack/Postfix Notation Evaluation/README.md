Postfix notation is a way to represent an expression where the operator comes after the operands.

For example, ["2", "2", "+", "6", "*"] would be equal to 24, since we have (2 + 2) * 6 = 24.

Given a list of strings exp, representing a postfix notation consisting of integers and operators ("+", "-", "*", "/"), evaluate the expression. "/" is integer division.

**Example 1**

**Input**
```
exp = ["9", "3", "+", "2", "/"]
```
**Output**
```
6
```
**Explanation**
```
(9 + 3) / 2 = 6
```