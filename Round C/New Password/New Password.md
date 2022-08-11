# [New Password](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb4d1/0000000000b20f15)

## Problem

A company named Gooli has issued a new policy that their employees account passwords must contain:

At least 7 characters.
At least one uppercase English alphabet letter.
At least one lowercase English alphabet letter.
At least one digit.
At least one special character. There are four special characters: #, @, *, and &.
The company has asked all the employees to change their passwords if the above requirements are not satisfied. Charles, an employee at Gooli, really likes his old password. In case his old password does not satisfy the above requirements, Charles will fix it by appending letters, digits, and special characters. Can you help Charles to find the shortest possible new password that satisfies his company's requirements?

## Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines. The first line of each test case contains an integer N, denoting the length of the old password. The second line of each test case contains the old password of length N. Old password contains only digits, letters, and special characters.

## Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is a valid new password, obtained by possibly fixing the old password in the way that Charles wants and satisfying the company's requirements.

It is guaranteed that at least one solution exists. If there are multiple solutions, you may output any one of them.

## Limits
```
Time limit: 20 seconds.
Memory limit: 1 GB.
1≤T≤100.
```
## Test Set 1
```
7≤N≤10^4.
The old password contains only digits.
```

## Test Set 2
```
1≤N≤10^4.
The old password contains only digits, letters, and special characters.
```

## Sample
Note: there are additional samples that are not run on submissions down below.
## Sample Input
```
2
7
1234567
10
1111234567
```
## Sample Output
```
Case #1: 1234567aA&
Case #2: 1111234567@Rc
```
In Sample Case #1, the old password does not satisfy requirements 2, 3, and 5. One possible shortest new password is 1234567aA&.

In Sample Case #2, the old password does not satisfy requirements 2, 3, and 5. One possible shortest new password is 1111234567@Rc.


## Additional Sample - Test Set 2
The following additional sample fits the limits of Test Set 2. It will not be run against your submitted solutions.
## Sample Input
```
3
1
A
2
1*
7
1234aB&
```
## Sample Output
```
Case #1: Aa1*111
Case #2: 1*abAA*
Case #3: 1234aB&
```
In Sample Case #1, the old password does not satisfy requirements 1, 3, 4, and 5. One possible shortest new password is Aa1*111.

In Sample Case #2, the old password does not satisfy requirements 1, 2, and 3. One possible shortest new password is 1*abAA*.

In Sample Case #3, the old password already meets all the requirements so Charles does not have to change his password.
