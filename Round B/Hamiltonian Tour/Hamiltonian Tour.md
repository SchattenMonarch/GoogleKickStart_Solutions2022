# [Hamiltonian Tour](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caa74/0000000000acf318)

## Problem
Hamilton is a Canadian city near Toronto, and a nice place to take a walking tour.

In this problem, Hamilton is represented by a grid of unit cells with 2R rows and 2C columns, where each cell is either empty (represented by *) or contains a building (represented by #). The cell on the i-th row and j-th column is represented by Ai,j where 1≤i≤2R and 1≤j≤2C. It is not possible to enter cells containing buildings and you can only move to an adjacent cell that shares a side with the current cell (not just a corner). The grid is such that if it is divided evenly into 2×2 blocks of unit cells, then in each of those blocks, either all four cells are empty, or all four cells are occupied by a building. Let us represent the block formed by A2i−1,2j−1,A2i−1,2j,A2i,2j−1, and A2i,2j cells as Bi,j where 1≤i≤R and 1≤j≤C.

Grace is a tourist in Hamilton and wants to visit all the empty cells in Hamilton. Grace is currently in cell A1,1. Visiting the same cell twice could be boring for her. Hence, Grace wants to visit each of the empty cells exactly once and finally end in cell A1,1. Can you help Grace by providing a string (consisting of directional moves {N, E, S, W} representing the unit moves to the north, east, south, or west respectively) which Grace can follow to visit every empty cell once and end again in A1,1.

## Input
The first line of the input gives the number of test cases, T. T test cases follow.
The first line of each test case contains two integers R and C.
The next R lines of each test case contains C characters each.

The j-th character on the i-th of these lines represents the block Bi,j formed by the following four cells: A2i−1,2j−1,A2i−1,2j,A2i,2j−1, and A2i,2j.
If Bi,j= #, all four of the cells in Bi,j are occupied by a building.
Otherwise, if Bi,j= *, all four of the cells in Bi,j are empty.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the answer to the problem as follows.

If there is no solution to the problem, y should be IMPOSSIBLE. Otherwise, y should be a sequence of characters from the set {N, E, S, W}, representing the unit moves (to the north, east, south, or west respectively) in a valid route, starting from A1,1, as described in the statement above.

Note that your last move should take you to A1,1; this move does not count as visiting the same cell twice.

If there are multiple valid solutions, you may output any one of them.

## Limits
```
Time limit: 25 seconds.
Memory limit: 1 GB.
1≤T≤100.
1≤R≤200.
1≤C≤200.
All characters in the grid are from the set {#,*}.
The first character of the first line of the input grid for each test case is a * character, i.e. B1,1=*.
```
## Test Set 1
```
A block contains buildings if and only if the row number and column number of it are divisible by 2. i.e. Bi,j= # ⟺((imod2=0) and (jmod2=0)).
```
## Test Set 2
```
No extra constraints.
```

## Sample
Note: there are additional samples that are not run on submissions down below.
## Sample Input
```
3
1 1
*
2 2
**
*#
3 4
****
*#*#
****
```
## Sample Output
```
Case #1: SENW
Case #2: SSSENNEENWWW
Case #3: ESSSSEEENNNWWNEEEEESWWSSSEESWWWWWWWNNNNN
```
The sample output displays one set of answers to the sample cases. Other answers may be possible.

In Sample Case #1, Grace will follow the route A1,1, A2,1, A2,2, A1,2, and finally A1,1. Note that ESWN is the only other possible valid answer.
The image below shows one of the possible routes for Sample Case #1.

<img src="https://codejam.googleapis.com/dashboard/get_file/AQj_6U3IXHaQET3-oneia9aZGOXO9ty_v6Ghl6fgY49fsBdq3Nu_jF9ToIzjsfizakd9Gl4eJGszORo/case1.png" alt="drawing" width="200"/>


The image below shows one of the possible routes for Sample Case #2.

<img src="https://codejam.googleapis.com/dashboard/get_file/AQj_6U32_0J5YBAoNnQ3fGCopyxBqak78IdIxW1-INgCDqKp65LFlrrPgjKzBFwegZ6aVOcOwnqLdOM/case2.png" alt="drawing" width="200"/>


## Additional Sample - Test Set 2
The following additional sample fits the limits of Test Set 2. It will not be run against your submitted solutions.
## Sample Input
```
3
3 1
*
*
#
1 3
*#*
3 4
**#*
**#*
****
```
## Sample Output
```
Case #1: SSSENNNW
Case #2: IMPOSSIBLE
Case #3: ESSSSENNNNESSSSEEENNNNESSSSSWWWWWWWNNNNN
```
The image below shows one of the possible routes for Sample Case #1.

<img src="https://codejam.googleapis.com/dashboard/get_file/AQj_6U2EE_-568ypijggnK2b7beBIAryQYDJ7nlXKVUovd9lrrNsgId-Fl0ir8_-QIa7WD54RI-X1SE/case1.png" alt="drawing" width="200"/>

In Sample Case #2, it is impossible for Grace to travel to any cell in B1,3 from A1,1.
