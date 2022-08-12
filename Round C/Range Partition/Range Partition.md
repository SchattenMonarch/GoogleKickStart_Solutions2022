# [Range Partition](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb4d1/0000000000b20deb)

## Problem
Alan and Barbara suddenly felt like playing with numbers. Alan chooses a non-empty subset from the set of first N positive integers (1,2,…,N). Barbara takes the rest of the numbers (if any) from the set. And then they both calculate the sum of the elements in their respective sets.

Alan believes in a magic ratio, which is X:Y. Hence, Alan wants to choose the subset in such a way that the ratio between the sum of Alan's subset and the sum of Barbara's subset is exactly X:Y.

Can you help Alan to choose a subset that can achieve the desired ratio?

## Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case has a single line containing three integers, N, X and Y, as described above.

## Output
For each test case, output the first line containing Case #x: y, where x is the test case number (starting from 1) and y is POSSIBLE, if Alan can choose such a non-empty subset, and IMPOSSIBLE otherwise.
If you print POSSIBLE, then output two more lines for that test case.
In the second line, print a single integer, which denotes the size of Alan's subset.
In the third line, print the integers present in Alan's subset.
If there are multiple solutions, you can print any of them.

## Limits
```
Time limit: 5 seconds.
Memory limit: 1 GB.
1≤T≤100.
1≤X≤10^8.
1≤Y≤10^8.
gcd(X,Y)=1, where gcd is Greatest common divisor.
```

## Test Set 1
```
1≤N≤15.
```
## Test Set 2
```
1≤N≤5000.
```
## Sample
## Sample Input
```
3
3 1 2
3 1 1
3 1 3
```
## Sample Output
```
Case #1: POSSIBLE
1
2
Case #2: POSSIBLE
2
1 2
Case #3: IMPOSSIBLE
```
In the first test case, Alan chooses {2}. Then Barbara gets {1,3}, which sums up to 1+3=4. So the ratio is 2:4, which is equivalent to 1:2.

In the second test case, Alan chooses {1,2}, which sums up to 1+2=3. And Barbara gets {3}. So the ratio is 3:3, which is equivalent to 1:1.

In the third test case, it is not possible for Alan to choose a subset that satisfies the condition.
