# [Sample Problem](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4332/0000000000942404)

## Problem
You have gathered N bags of candy and you want to distribute the candy amongst M kids. The i-th bag contains Ci pieces of candy. You want to make sure that every kid get the same amount of candy and that the number of pieces of candy they receive is the greatest possible. You can open each bag and mix all pieces of candy before distributing them to the kids.

How many pieces of candy will remain after you share the candy amongst kids, based on the rules described above?

## Input
The first line of the input gives the number of test cases, T. T test cases follow.

Each test case consists of two lines. The first line of each test case contains two integers: integer N, the number of candy bags, and M, the number of kids.

The next line contains N non-negative integers C1,C2,…,CN representing array C, where the i-th integer represents the number of candies in the i-th bag.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of candies that will remain if you divide candies between kids according to the rules described above.

## Limits
```
Time limit: 40 seconds.
Memory limit: 1 GB.
```
## Test Set 1
```
1≤T≤100.
1≤N≤10^5.
1≤M≤10^4.
0≤Ci≤1000, for all i from 1 to N.
```
## Sample
## Sample Input
```
2
7 3
1 2 3 4 5 6 7
5 10
7 7 7 7 7
```
## Sample Output
```
Case #1: 1
Case #2: 5
```
In Sample Case #1, we have N=7 bags of candy. In total we have 1+2+3+4+5+6+7=28 candies that we want to divide between M=3 kids. Every kid can get 9 pieces of candy, so 28−3×9=1 pieces of candy will remain.

In Sample Case #2, we have N=5 bags of candy. In total we have 7+7+7+7+7=35 candies that we want to divide between M=10 kids. Every kid can get 3 pieces of candy, so 35−10×3=5 pieces of candy will remain.
