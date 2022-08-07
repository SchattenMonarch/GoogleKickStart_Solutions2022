# [Hex](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4332/0000000000942527)

## Problem
This problem was inspired by a board game called Hex, designed independently by Piet Hein and John Nash. It has a similar idea, but does not assume you have played Hex.

This game is played on an N×N board, where each cell is a hexagon. There are two players: Red side (using red stones) and Blue side (using blue stones). The board starts empty, and the two players take turns placing a stone of their color on a single cell within the overall playing board. Each player can place their stone on any cell not occupied by another stone of any color. There is no requirement that a stone must be placed beside another stone of the same color. The player to start first is determined randomly (with equal probability among the two players).

The upper side and lower sides of the board are marked as red, and the other two sides are marked as blue. For each player, the goal of the game is to connect the two sides marked with their color by forming a connected path using stones of their color. The first player to achieve this wins. Note that the four corners are considered connected to both colors.

The game ends immediately when one player wins.

Given a game state, help someone new to the game determine the status of a game board. Say one of the following:

Impossible: If it was impossible for two players to follow the rules and to have arrived at that game state.
Red wins: If the player playing the red stones has won.
Blue wins: If the player playing the blue stones has won.
Nobody wins: If nobody has yet won the game. Note that a game of Hex cannot end without a winner!
Note that in any impossible state, the only correct answer is Impossible, even if red or blue has formed a connected path of stones linking the opposing sides of the board marked by their colors.

Here is a an example game on a 6×6 gameboard where blue won. Blue was the first player to move, and placed a blue stone at cell marked as 1. Then Red placed at cell 2, then blue at cell 3, etc. After the 11-th stone is placed, blue wins.


## Input
The first line of input gives the number of test cases, T. T test cases follow. Each test case start with the size of the side of the board, N. This is followed by a board of N rows and N columns consisting of only B, R, and . characters. B indicates a cell occupied by blue stone, R indicates a cell occupied by red stone, and . indicates an empty cell.

## Output
For each test case, output one line containing Case #x: y, where x is the case number (starting from 1) and y is the status of the game board. It can be "Impossible", "Blue wins", "Red wins", or "Nobody wins" (excluding the quotes). Note that the judge is case-sensitive, so answers of "impossible", "blue wins", "red wins", and "nobody wins" will be judged incorrect.

## Limits
```
Time limit: 30 seconds.
Memory limit: 1 GB.
1≤T≤100.
```
## Test Set 1
`1≤N≤10.`
## Test Set 2
`1≤N≤100.`
## Sample
### Sample Input
```
7
1
.
1
B
1
R
2
BR
BB
4
BBBB
BBB.
RRR.
RRRR
4
BBBB
BBBB
RRR.
RRRR
6
......
..R...
BBBBBB
..R.R.
..RR..
......
```
### Sample Output
```
Case #1: Nobody wins
Case #2: Blue wins
Case #3: Red wins
Case #4: Impossible
Case #5: Blue wins
Case #6: Impossible
Case #7: Blue wins
```
