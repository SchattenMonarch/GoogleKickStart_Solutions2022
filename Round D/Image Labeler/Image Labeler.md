# [Image Labeler](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caea6/0000000000b76e11)

## Problem
Crowdsource is organizing a campaign for Image Labeler task with participants across N regions. The number of participants from each of these regions are represented by A1,A2,…,AN.

In the Image Labeler task, there are M categories. Crowdsource assigns participants to these categories in such a way that all participants from a region are assigned to the same category, and each category has at least one region assigned to it. The success metric of the campaign is measured by the sum of medians of the number of participants in each category. (Let us remind you here that the median of a list of integers is the "middle" number when those numbers are sorted from smallest to largest. When the number of integers in a list is even, we have two "middle" numbers, therefore the median is defined as the arithmetic mean (average) of the two middle values.)

For example, imagine that we have N=3 regions with A1=5, A2=8, and A3=9 participants respectively and we want to assign them to M=2 categories. If we assign regions 2 and 3 to category 1 and region 1 to category 2, then the success metric would be median of {A2=8,A3=9} + median of {A1=5}=(8+9)/2+5=8.5+5=13.5. We can also assign regions 1 and 2 to category 1 and region 3 to category 2. Then the success metric would be equal to the sum of the median of {A1=5,A2=8} and the median of {A3=9}, which is (5+8)/2+9=6.5+9=15.5.

Your task is to find the maximum possible value of the success metric that can be obtained by assigning participants in regions to the categories.

## Input
The first line of the input gives the number of test cases, T. T test cases follow.
The first line of each test case contains two integers N and M: the number of regions, and the number of categories respectively.
The next line contains N integers A1,A2,…,AN.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum possible value of the success metric.

y will be considered correct if it is within an absolute or relative error of 10−6 of the correct answer. See the FAQ for an explanation of what that means, and what formats of real numbers we accept.

## Limits
```
Memory limit: 1 GB.
1≤T≤100.
1≤N≤10^4.
1≤M≤10^4.
1≤M≤N.
1≤Ai≤10^5, for all i.
```
## Test Set 1
```
Time limit: 20 seconds.
0≤N−M≤1.
```

## Test Set 2
```
Time limit: 40 seconds.
No additional constraints.
```

## Sample
Note: there are additional samples that are not run on submissions down below.
## Sample Input
```
1
3 2
11 24 10
```
## Sample Output
```
Case #1: 34.5
```
In this test, we can assign participants in regions to categories in 6 possible ways:
Assign {11,24} to category 1 and {10} to category 2, in which case the success metric is (11+24)/2+10=17.5+10=27.5.
Assign {24,10} to category 1 and {11} to category 2, in which case the success metric is (24+10)/2+11=17+11=28.
Assign {11,10} to category 1 and {24} to category 2, in which case the success metric is (11+10)/2+24=10.5+24=34.5.
3 other ways, where assignments to category 1 and 2 are swapped, which does not alter the value of success metric.

So, the maximum possible value of the success metric is 34.5.

## Additional Sample - Test Set 2
The following additional sample fits the limits of Test Set 2. It will not be run against your submitted solutions.
## Sample Input
```
1
5 1
6 2 5 1 9
```
## Sample Output
```
Case #1: 5.0
```
In this test, there is only one category, so participants in all regions will be assigned to it. The only possible value of the success metric is the median of {6,2,5,1,9} which is 5.
