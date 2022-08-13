# [Suspects and Witnesses](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caea6/0000000000b76db9)

## Problem
Ada baked some cookies for her birthday party where she invited N guests, labeled 1 to N. When all the guests have arrived and the party is about to start, something terrible has happened — someone stole the cookies!

Ada puts on her detective hat and starts questioning her guests. She gathered M witness statements of the form: Guest x: "Guest y did not steal the cookies."

Ada knows that, if a guest is innocent (did not steal a cookie), then all their witness statements must be true. Note that Ada does not know whether any statement made by a cookie stealer is correct.

Lastly, Ada has an informant who told her there can be at most K cookie stealers. With this information, can you help Ada find out the number of guests who can be proved to be innocent?

Note that it is possible that no guest actually stole the cookies, and Ada simply forgot how many cookies she baked.

## Input
The first line of the input gives the number of test cases, T. T test cases follow.
The first line of each test case contains three integers N, M, and K: the number of guests, the number of witness statements, and the maximum number of cookie stealers, respectively.
The next M lines describe the witness statements. The i-th line contains two integers Ai and Bi, which means the witness statement Guest Ai: "Guest Bi did not steal the cookies."

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of guests that can be proved to be innocent.

## Limits
```
Time limit: 40 seconds.
Memory limit: 1 GB.
1≤T≤100.
2≤N≤10^5.
1≤M≤10^5.
1≤Ai≤N, for all i.
1≤Bi≤N, for all i.
Ai≠Bi, for all i.
(Ai,Bi)≠(Aj,Bj), for all i≠j.
```
## Test Set 1
```
K=1.
```
## Test Set 2
```
1≤K≤20.
```
## Sample
Note: there are additional samples that are not run on submissions down below.
## Sample Input
```
2
3 2 1
1 2
2 3
3 3 1
1 2
2 3
3 1
```
## Sample Output
```
Case #1: 2
Case #2: 3
```
In Sample Case #1, there are N=3 guests, M=2 witness statements and at most K=1 cookie stealer.
The witness statements are:

Guest 1: Guest 2 did not steal the cookies.
Guest 2: Guest 3 did not steal the cookies.
Now we consider all possible arrangements on whether each guest is a cookie stealer.

Guest 1	Guest 2	Guest 3	Possible?
Scenario #1	Innocent	Innocent	Innocent	YES
Scenario #2	CS	Innocent	Innocent	YES
Scenario #3	Innocent	CS	Innocent	NO
Scenario #4	Innocent	Innocent	CS	NO
These are all the scenarios where there is at most K=1 cookie stealer (CS). Scenario #3 is impossible because Guest 1 is innocent and states that Guest 2 is innocent, but Guest 2 turns out to be the cookie stealer. Same reasoning for scenario #4.

For the remaining scenarios, we see that Guest 2 and 3 are always innocent, so the answer is 2.


## Additional Sample - Test Set 2
The following additional sample fits the limits of Test Set 2. It will not be run against your submitted solutions.
## Sample Input
```
2
3 2 2
1 2
2 3
3 3 2
1 2
2 3
3 2
```
## Sample Output
```
Case #1: 1
Case #2: 2
```
