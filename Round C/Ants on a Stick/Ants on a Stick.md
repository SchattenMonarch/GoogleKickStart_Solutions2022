# [Ants on a Stick](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb4d1/0000000000b209bc)

## Problem
Ada has N ants labelled from 1 to N. She decides to test John's concentration skills. She takes a stick L cm long, and drops the ants on it.

The positions on the stick at which the ants are dropped are represented by an integer array P, where ant i is dropped at the position Pi (that is, Pi cm away from the left end) on the stick. Each ant travels either to the left or right with a constant speed of 1 cm per second. The initial directions of the ants is represented by an array D, where the direction of ant i is Di: 0 if left, and 1 if right. When two ants meet, they bounce off each other and reverse their directions. The ants fall off the stick when they reach either end of it.

Ada challenges John to find the exact order in which the ants fall off the stick. John needs your help!

## Input
The first line of the input gives the number of test cases, T. T test cases follow.
The first line of each test case contains two integers, N and L: the number of ants, and the length of the stick, respectively.
The next N lines describe the positions and directions of the ants. The i-th line contains two integers, Pi and Di: the position and direction of ant i, respectively.

## Output
For each test case, output one line containing Case #x: A1A2…AN, where x is the test case number (starting from 1), and Ai is the label of the i-th ant that falls off the stick. In other words, the first ant to fall off the stick is the ant labelled A1, the second is the ant labelled A2, and so on. If multiple ants fall off at the same time, output their labels in the increasing order.

## Limits
```
Memory limit: 1 GB.
1≤T≤100.
N<L.
Di∈{0,1}, for all i.
0<Pi<L, for all i.
All Pi are distinct.
```

## Test Set 1
```
Time limit: 20 seconds.
1≤N≤10.
1≤L≤100.
```
## Test Set 2
```
Time limit: 40 seconds.
1≤N≤10^3.
1≤L≤10^9.
```
## Test Set 3
```
Time limit: 40 seconds.
1≤L≤10^9.
For at most 15 cases:
1≤N≤10^5.
For the remaining cases:
1≤N≤10^3.
```
## Sample
## Sample Input
```
3
1 5
1 1
2 7
4 1
5 0
4 10
8 0
2 1
6 1
4 0
```
## Sample Output
```
Case #1: 1
Case #2: 2 1
Case #3: 1 2 3 4
```
In Sample Case #1, as there is only a single ant (labelled 1), it is the only one to fall off. The time at which it falls off is 4 seconds.

In Sample Case #2, the two ants move towards each other, meet at 0.5 seconds and reverse their directions. Ant 2 then reaches the right end of the stick at 3 seconds, whereas ant 1 reaches the left end at 5 seconds. Thus, ant 2 falls off the stick, followed by ant 1.

In Sample Case #3, ants 2 and 4 move towards each other and meet at 1 second. Similarly, ants 1 and 3 also move towards each other and meet at 1 second. All 4 ants then change directions.

Ants 1 and 2 move towards either ends of the stick and fall off at 4 seconds.
Ants 3 and 4 move towards each other and meet at 3 seconds. They change directions and move towards either ends of the stick, and fall off at 8 seconds.
