# [Palindromic Factors](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caa74/0000000000acee89)

## Problem
You are given a positive integer A. Find the number of factors of A which are palindromes. A number is called a palindrome if it remains the same when the digits in decimal representation are reversed. For instance, 121 is a palindrome, while 123 is not.

## Input
The first line of the input gives the number of test cases, T. T lines follow.

Each line represents a test case and contains a single integer A.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of factors of A which are palindromes.

## Limits
```
Time limit: 2 seconds.
Memory limit: 1 GB.
1≤T≤100.
```
## Test Set 1
```
1≤A≤10^3.
```
## Test Set 2
```
1≤A≤10^10.
```
## Sample
## Sample Input
```
4
6
10
144
242
```
## Sample Output
```
Case #1: 4
Case #2: 3
Case #3: 7
Case #4: 6
```
In the first test case, A has 4 factors which are palindromes: 1,2,3, and 6.
In the second test case, A has 3 factors which are palindromes: 1,2, and 5.
In the third test case, A has 7 factors which are palindromes: 1,2,3,4,6,8, and 9.
In the fourth test case, A has 6 factors which are palindromes: 1,2,11,22,121, and 242.
