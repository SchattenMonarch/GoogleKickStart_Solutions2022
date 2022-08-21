# [Students and Mentors](https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb0f5/0000000000ba84ae)

## Problem
A group of N students prepares together for upcoming programming competitions such as Kick Start and Code Jam by Google. To help each other prepare, it was decided that each student will pick a mentor among other students. A mentor will help their mentee to solve problems, learn algorithms, track their progress, and will generally support them throughout preparation.

Each student will have exactly one mentor among all other students, and a person can be a mentor to multiple people. For every student i we know their rating Ri which approximates how good that student is at programming competitions. Because it is believed that a mentor should not be much stronger than their mentee, a student j can be a mentor of student i only if Rj≤2×Ri. Note that a mentor can even have a rating that is lower or equal to their mentee's rating.

Unsurprisingly, each student wants to have the strongest possible mentor. For each student, can you help to figure out what is the highest possible rating of a mentor they can pick?

## Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines.

The first line of each test case contains an integer N, representing the number of students in a group.

The second line of each test case contains N integers R1 R2 R3 … RN where Ri is a rating of the i-th student.

O## utput
For each test case, output one line containing Case #x: M1 M2 M3 … MN where x is the test case number (starting from 1), and Mi is the maximum possible rating of the i-th student's mentor or −1 if there are no suitable mentors for that student.

## Limits
```
Memory limit: 1 GB.
1≤T≤100.
1≤Ri≤10^6, for all i.
```

## Test Set 1
```
Time limit: 20 seconds.
2≤N≤1000.
```
## Test Set 2
```
Time limit: 40 seconds.
2≤N≤10^5.
```
## Sample
## Sample Input
```
3
3
2000 1500 1900
5
1000 600 1000 2300 1800
2
2500 1200
```
## Sample Output
```
Case #1: 1900 2000 2000
Case #2: 1800 1000 1800 1800 2300
Case #3: 1200 -1
```
In the Sample Case #1, there are three students with ratings 2000, 1500, and 1900. All students can pick any other student as their mentor, so they all pick a mentor with the highest possible rating. As a result, they pick mentors with ratings 1900, 2000, and 2000, respectively. Note that in this case a student with the rating 2000 will be a mentor of two other students.

In the Sample Case #2, there are five students with ratings 1000, 600, 1000, 2300, and 1800 (note that some students may have equal ratings). For both students with ratings 1000, the highest rated possible mentor for them has rating 1800. They cannot pick a mentor with rating 2300 as 2300>2×1000. Student with rating 600 cannot pick mentors with ratings 1800 or 2300, so they pick a mentor with rating 1000 (either of two students with rating 1000 works). Student with rating 2300 can pick any other student as their mentor, so they pick a mentor with rating 1800 — the highest possible. Finally, student with rating 1800 can pick any other student as their mentor too, so they pick a mentor with the highest possible rating of 2300. So in the end, the students pick the mentors with the ratings 1800, 1000, 1800, 1800, and 2300, respectively.

In the Sample Case #3, there are two students with ratings 2500 and 1200. For a student with rating 2500, another student with rating 1200 can be a mentor, and there are no other options. For a student with rating 1200, we cannot assign a mentor with rating 2500, as 2500>2×1200, and therefore this student has no suitable mentor. In the end, we output 1200 and −1 as a result for this test case.
