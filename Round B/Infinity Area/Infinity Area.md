# [Infinity Area](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caa74/0000000000acf079)

## Problem
Let us assume for the simplicity of this problem that the Infinity symbol is made of circles which touch externally at point S as shown below, and let us call it the center of the infinity.

You are given three integers R, A, B. You are currently at the center of the infinity. You will first start drawing the right circle with radius R and reach again the center of infinity. After that, you start drawing the left circle with the radius equal to the radius of last circle multiplied by A. After reaching the center of the infinity you again start drawing the right circle with radius equal to the radius of last circle divided by B (integer divison). After reaching the center of infinity you again draw the left circle with the radius equal to the radius of last circle multiplied by A.

![](https://codejam.googleapis.com/dashboard/get_file/AQj_6U3OvHptzgBaukWgLraPcrhzwPcWXUUlLPtdiXEVHTYeQsc6DXlrP0TaVDBX3OP9VyZVOmVZVP30t65K/InfinityAreaImage.png)

You continue to draw the left and right circles as described above until the radius of the circle to be drawn becomes zero. Calculate the sum of areas of all the circles drawn. It is guaranteed that the process will terminate after finite number of steps.

## Input
The first line of the input gives the number of test cases, T. T lines follow.

Each line represents a test case and contains three integers R, A, B, where R denotes the radius of the first circle, and A and B are the parameters used to calculate the radii of the subsequent circles.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the sum of areas of all the circles drawn until radius of the circle to be drawn becomes zero.

y will be considered correct if it is within an absolute or relative error of 10−6 of the correct answer. See the FAQ for an explanation of what that means, and what formats of real numbers we accept.

## Limits
```
Time limit: 20 seconds.
Memory limit: 1 GB.
```
## Test Set 1
```
1≤T≤100
1≤R≤10^5
1≤A≤500
2×A≤B≤1000
```
## Sample
### Sample Input
```
2
1 3 6
5 2 5
```
### Sample Output
```
Case #1: 31.415927
Case #2: 455.530935
```
In Sample Case #1, you start with drawing the right circle with radius 1 unit. After reaching the center of infinity you draw the left circle with radius 1×3=3 units. Again after reaching the center of infinity you stop drawing the right circle since the radius becomes ⌊3/6⌋=0 units. Therefore the sum of areas of the circles drawn is π×1×1+π×3×3≈31.415927.

In Sample Case #2, you start with drawing the right circle with radius 5 units. After reaching the center of infinity you draw the left circle with radius 5×2=10 units. After reaching the center of infinity you draw the right circle with radius ⌊10/5⌋=2 units. After reaching the center of infinity you draw the left circle with radius 2×2=4 units. After reaching the center of infinity, you stop drawing since the radius of next circle becomes ⌊4/5⌋=0 units. Therefore the sum of areas of the circles drawn is π×5×5+π×10×10+π×2×2+π×4×4≈455.530935.## 
