# [Building Palindromes](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4a94/0000000000b54d3b)

## Problem
Anna has a row of N blocks, each with exactly one letter from A to Z written on it. The blocks are numbered 1,2,⋯,N from left to right.

Today, she is learning about palindromes. A palindrome is a string that is the same written forwards and backwards. For example, ANNA, RACECAR, AAA and X are all palindromes, while AB, FROG and YOYO are not.

Bob wants to test how well Anna understands palindromes, and will ask her Q questions. The i-th question is: can Anna form a palindrome using all of the blocks numbered from Li to Ri, inclusive? She may rearrange the blocks if necessary. After each question, Anna puts the blocks back in their original positions.

Please help Anna by finding out how many of Bob's questions she can answer "yes" to.

## Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing the two integers N and Q, the number of blocks and the number of questions, respectively. Then, another line follows, containing a string of N uppercase characters (A to Z). Then, Q lines follow. The i-th line contains the two integers Li and Ri, describing the i-th question.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of questions Anna can answer "yes" to.

## Limits
```
Time limit: 30 seconds.
Memory limit: 1 GB.
1≤T≤100.
1≤Li≤Ri≤N.
```
## Test Set 1
```
1≤N≤20.
1≤Q≤20.
```
## Test Set 2
```
1≤N≤100000.
1≤Q≤100000.
```
## Sample
## Sample Input
```
2
7 5
ABAACCA
3 6
4 4
2 5
6 7
3 7
3 5
XYZ
1 3
1 3
1 3
1 3
1 3
```
## Sample Output
```
Case #1: 3
Case #2: 0
```

In Sample Case #1, N = 7 and Q = 5.

For the first question, Anna must use the blocks AACC. She can rearrange these blocks into the palindrome ACCA (or CAAC).
For the second question, Anna must use the blocks A. This is already a palindrome, so she does not need to rearrange them.
For the third question, Anna must use the blocks BAAC. These blocks cannot be rearranged into a palindrome.
For the fourth question, Anna must use the blocks CA. These blocks cannot be rearranged into a palindrome.
For the fifth question, Anna must use the blocks AACCA. She can rearrange these blocks to form the palindrome ACACA (or CAAAC).
In total, she is able to answer "yes" to 3 of Bob's questions, so the answer is 3.
In Sample Case #2, N = 3 and Q = 5. For the first question, Anna must use the blocks XYZ to create a palindrome. This is impossible, and since the rest of Bob's questions are the same as the first one, the answer is 0.
