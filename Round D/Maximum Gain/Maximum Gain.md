# [Maximum Gain](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caea6/0000000000b76fae)

## Problem
Charles is participating in an event of Crowdsource tasks and he is most enthusiastic to gain the maximum points from there! There are two Crowdsource tasks: Audio Validation Task and Image Labeler Task. Each task consists of a list of questions. Charles is given two arrays (A and B) representing the two tasks. Each element of an array indicates the number of points that Charles will gain by answering the corresponding question.

Charles is allowed to answer K questions in total, from both tasks, one at a time. At each step, he is allowed to choose a task (that is, choose one of the two arrays) that has remaining unanswered questions. He is then allowed to answer either the first or the last question, from the list of remaining questions of this task. Once he answers the question, he gets the corresponding points and the answered question is removed from the task.

Can you help Charles choose the questions that will give him the maximum possible points?

## Input
The first line of the input gives the number of test cases, T. T test cases follow.
The first line of each test case contains an integer N, which denotes the number of elements in the first array.
The second line of each test case contains N integers A1,A2,…,AN. Ai denotes the points gained for answering the i-th question of Audio Validation Task.
The third line of each test case contains an integer M, which denotes the number of elements in the second array.
The fourth line of each test case contains M integers B1,B2,…,BM. Bi denotes the points gained for answering the i-th question of Image Labeler Task.
The fifth line of each test case contains an integer K, which denotes the number of elements to be selected in total, from both arrays, using the process described above.
## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum number of points that Charles can gain in this test case.

## Limits
```
Time limit: 30 seconds.
Memory limit: 1 GB.
1≤T≤100.
1≤N≤6000.
1≤M≤6000.
1≤Ai,Bi≤10^9, for all i.
1≤K≤N+M.
```
## Test Set 1
```
1≤K≤30.
```
## Test Set 2
```
1≤K≤3000.
```
## Sample
## Sample Input
```
2
3
3 1 2
4
2 8 1 9
5
4
1 100 4 3
6
15 10 12 5 1 10
6
```
## Sample Output
```
Case #1: 24
Case #2: 148
```
In Sample Case #1, Charles can answer 5 questions. If he chooses the first and last questions from the first array, he gets (3+2) points. If he chooses the first two questions and the last question from the second array, he gets (2+8+9) points. Thus, by answering these 5 questions, Charles gets ((3+2)+(2+8+9))=24 points. This happens to be the maximum possible number of points that Charles can obtain in this test case. A non-optimal selection could be to choose the last two elements from the first array, the first element from the second array, and last two elements from the second array. This would have yielded ((1+2)+(2+1+9))=15 points.

In Sample Case #2, Charles can answer 6 questions. If he chooses the first two from the first array, he gets (1+100) points. If he chooses the first three questions and the last question from the second array, he gets (15+10+12+10) points. Thus, selecting these 6 questions, Charles gets ((1+100)+(15+10+12+10))=148 points, which happens to be the maximum value for this case.
