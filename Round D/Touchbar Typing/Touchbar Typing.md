# [Touchbar Typing](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caea6/0000000000b76f44)

## Problem
Glide Typing task in Crowdsource app uses a new Google keyboard to type a word by sliding a finger across keys without lifting the finger, as shown in the animation below.

![Demostration of Glide Typing on a mobile device.](https://codejam.googleapis.com/dashboard/get_file/AQj_6U2qxyY4QmuvLJDtSXzhHttUAZWXwPHT-uw1ERAT69oNZS5OVO3o5lXCHsSoxns/demo.gif)

To make the Glide Typing task more challenging, instead of a normal keyboard, we have a special linear keyboard K that has all the keys in one row.

Imagine that you want to type a word S that is N characters long. The linear keyboard K has M keys. It is guaranteed that the keys cover all characters in S. However, some of the keys may be duplicates. In other words, for each character in S, there is one or more keys in K mapped to the character. Note that, all characters and keys are represented as integers.

You may start with your finger on any key. It takes 1 second to move your finger from a key to an adjacent key. Due to Glide Typing, there is no pressing a key. If the finger is currently at the key i which has character Ki, and we want to type the character Kj at index j, we will glide the finger from the key i to the key j, which takes |j−i| seconds. If your finger is at key x, you can type character Kx any number of times instantly. You need to type string S character by character. Formally, you need to type Si before Si+1 for each 1≤i≤N−1.

For example, suppose the word S has characters: 1, 2, 2, 3, 4. You can start by keeping your finger on key with character 1 on the keyboard which is at index i. Then you glide your finger to key which has character 2 which is at index j. It would take |j−i| seconds. In order to type character 2 two times in string S, you can do that in no additional time as |j−j|=0 seconds. Then you can continue to glide your finger to type the other characters in the word S sequentially.

Can you calculate the minimal time needed to type the word?

## Input
The first line of the input gives the number of test cases, T. T test cases follow.

The first line of each test case contains one integer N: the length of the word S.
The second line of each test case contains N integers: each Si is the character at the i-th index.
The third line of each test case contains one integer M: the length of the keyboard K.
The fourth line of each test case contains M integers: each Ki is the character at the i-th key.

## Output
For each test case, output one line containing the minimal time needed to type the word. Case #x: y, where x is the test case number (starting from 1) and y is the minimal time needed to type S on the keyboard K.

## Limits
```
Memory limit: 1 GB.
1≤T≤100.
All characters in S appears at least once in K.
1≤Ki≤2500.
1≤Si≤2500.
```

## Test Set 1
```
Time limit: 20 seconds.
1≤N≤100.
1≤M≤100.
It is guaranteed that there are no duplicated keys in keyboard K.
```

## Test Set 2
```
Time limit: 20 seconds.
1≤N≤100.
1≤M≤100.
```
## Test Set 3
```
Time limit: 40 seconds.
1≤N≤2500.
1≤M≤2500.
```
## Sample
Note: there are additional samples that are not run on submissions down below.
## Sample Input
```
2
5
1 2 3 2 1
3
1 2 3
3
1 1 1
2
2 1
```
## Sample Output
```
Case #1: 4
Case #2: 0
```
In Sample Case #1, we can take the following steps to type string S in minimum time.

Start by keeping your finger on key K1 which has character 1. We have now typed the first character of the string S.
In order to type the second character 2 of the string S, glide your finger to key K2. it takes |2−1|=1 additional second to glide the finger from index 1 to index 2.
In order to type the third character 3 of the string S, glide your finger to key K3. it takes |3−2|=1 additional second to glide the finger from index 2 to index 3.
In order to type the fourth character 2 of the string S, glide your finger to key K2. it takes |2−3|=1 additional second to glide the finger from index 3 to index 2.
In order to type the fifth character 1 of the string S, glide your finger to key K1. it takes |1−2|=1 additional second to glide the finger from index 2 to index 1.
We have typed all characters of the string S in a total of 4 seconds.
In Sample Case #2, we can take the following steps to type string S in minimum time.

Start by keeping your finger on key K2 which has character 1. We have now typed the first character of the string S.
As our finger is on key K2, we can type the character 1 any number of times, without any additional time. Hence, we can type the second and third characters of the string S.
We have typed all characters of the string S in a total of 0 seconds.

## Additional Sample - Test Set 2
The following additional sample fits the limits of Test Set 2. It will not be run against your submitted solutions.
## Sample Input
```
2
4
2 1 4 1
8
4 1 5 2 1 3 5 4
3
1 2 3
8
2 3 5 1 4 6 7 2
```
## Sample Output
```
Case #1: 4
Case #2: 4
```
In Additional Sample Case #1, we can take the following steps to type string S in minimum time.

Start by keeping your finger on key K4 which has character 2. We have now typed the first character of the string S.
In order to type the second character 1 of the string S, glide your finger to key K2. it takes |2−4|=2 additional seconds to glide the finger from index 4 to index 2.
In order to type the third character 4 of the string S, glide your finger to key K1. it takes |1−2|=1 additional second to glide the finger from index 2 to index 1.
In order to type the fourth character 1 of the string S, glide your finger to key K2. it takes |2−1|=1 additional second to glide the finger from index 1 to index 2.
We have typed all characters of the string S in a total of 4 seconds.
In Additional Sample Case #2, we can take the following steps to type string S in minimum time.

Start by keeping your finger on key K4 which has character 1. We have now typed the first character of the string S.
In order to type the second character 2 of the string S, glide your finger to key K1. it takes |1−4|=3 additional seconds to glide the finger from index 4 to index 1.
In order to type the third character 3 of the string S, glide your finger to key K2. it takes |2−1|=1 additional second to glide the finger from index 1 to index 2.
We have typed all characters of the string S in a total of 4 seconds.
