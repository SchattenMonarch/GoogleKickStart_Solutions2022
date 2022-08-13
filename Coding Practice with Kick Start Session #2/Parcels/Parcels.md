# [Parcels](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4a94/0000000000b55465)

## Problem
You have been hired recently as the Chief Decision Maker (CDM) at a famous parcel delivery company, congratulations! Customers love speedy deliveries of their parcels and you have decided to decrease the time it takes to deliver parcels around the world to win customers. You have introduced this idea to the authorities and they have allocated you enough budget to build at most one new delivery office.

The world can be divided into an R×C grid of squares. Each square either contains a delivery office or is empty. You may pick a grid square that does not already contain a delivery office and build a new delivery office there.

The delivery time of a parcel to a square is 0 if that square contains a delivery office. Otherwise, it is defined as the minimum Manhattan distance between that square and any other square containing a delivery office. The overall delivery time is the maximum of delivery times of all the squares. What is the minimum overall delivery time you can obtain by building at most one new delivery office?

Note: The Manhattan distance between two squares (r1,c1) and (r2,c2) is defined as |r1−r2|+|c1−c2|, where |x| denotes the absolute value of x.

## Input
The first line of the input gives the number of test cases, T. T test cases follow. The first line of each test case contains the number of rows R and number of columns C of the grid. Each of the next R lines contains a string of C characters, where each character is either 0 or 1. 0 denotes the absence of a delivery office and 1 denotes the presence of a delivery office in that square.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum overall delivery time you can obtain after adding at most one additional delivery office.

## Limits
```
Time limit: 15 seconds.
Memory limit: 1 GB.
1≤T≤100.
There is at least one delivery office in the initial grid.
```
## Test Set 1
```
1≤R≤10.
1≤C≤10.
```
## Test Set 2
```
1≤R≤250.
1≤C≤250.
```
## Sample
## Sample Input
```
3
3 3
101
000
101
1 2
11
5 5
10001
00000
00000
00000
10001
```
## Sample Output
```
Case #1: 1
Case #2: 0
Case #3: 2
```
In Sample Case #1, you get a minimum overall delivery time of 1 by building a new delivery office in any one of the five squares without a delivery office.

In Sample Case #2, all the squares already have a delivery office and so the minimum overall delivery time is 0. Note that, in this case, you do not need to build an additional delivery office.

In Sample Case #3, to get a minimum overall delivery time of 2, you can build a new delivery office in any of these squares: (2,3),(3,2),(3,3),(3,4) or (4,3). Any other possibility results in a higher overall delivery time than 2.
