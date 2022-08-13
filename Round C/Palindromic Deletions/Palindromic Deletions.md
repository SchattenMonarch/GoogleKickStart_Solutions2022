# [Palindromic Deletions](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb4d1/0000000000b20d16)

## Problem
Games with words and strings are very popular lately. Now Edsger tries to create a similar new game of his own. Here is what he came up with so far.

Edsger's new game is called Palindromic Deletions. As a player of this game, you are given a string of length N. Then you will perform the following process N times:

Pick an index in the current string uniformly at random.
Delete the character at that index. You will then end up with a new string with one fewer character.
If the new string is a palindrome, you eat a piece of candy in celebration.
Now Edsger wonders: given a starting string, what is the expected number of candies you will eat during the game?

## Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines.

The first line of each test case contains an integer N, representing the length of the string.

The second line of each test case contains a string S of length N, consisting of lowercase English characters.

## Output
For each test case, output one line containing Case #x: E, where x is the test case number (starting from 1) and E is the expected number of candies you will eat during the game.

E should be computed modulo the prime 10^9+7 (1000000007) as follows. Represent the answer of a test case as an irreducible fraction p/q. The number E then must satisfy the modular equation E×q≡p(mod(10^9+7)), and be between 0 and 10^9+6, inclusive. It can be shown that under the constraints of this problem, such a number E always exists and can be uniquely determined.

## Limits
```
Time limit: 30 seconds.
Memory limit: 1 GB.
1≤T≤20.
String S consists of only lowercase letters of the English alphabet.
```

## Test Set 1
```
2≤N≤8.
```
## Test Set 2
```
2≤N≤400.
```
## Sample
## Sample Input
```
2
2
ab
3
aba
```
## Sample Output
```
Case #1: 2
Case #2: 333333338
```
In the first test case the game can go in one of two ways (character removed at each step is underlined):

"ab" → "a" → "" (where "" denotes empty string). Both a and "" are palindromes, so you will eat two candies.
"ab" → "b" → "". Both b and "" are palindromes, so you will eat two candies.
Overall, the expected number of candies you will eat is (2+2)/2=2 candies.

In the second test case, the game can go in one of six ways (character removed at each step is underlined):

"aba" → "ba" → "a" → ""
"aba" → "ba" → "b" → ""
"aba" → "aa" → "a" → ""
"aba" → "aa" → "a" → ""
"aba" → "ab" → "b" → ""
"aba" → "ab" → "a" → ""
Overall, the expected number of candies you will eat is (2+2+3+3+2+2)/6=14/6=7/3 candies. 333333338 is a uniquely determined number that satisfies the conditions mentioned in the output section as 333333338×3≡7(mod(10^9+7)), therefore 333333338 is the answer to this test.
