#define _CRT_SECURE_NO_WARNINGS
/*
author: Dennis Folz
github profile : https://github.com/SchattenMonarch
date:   21.08.22

program: google kick start Round E: Students and Mentors 
link: https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb0f5/0000000000ba84ae

Sample

Sample Input

3
3
2000 1500 1900
5
1000 600 1000 2300 1800
2
2500 1200

Sample Output

Case #1: 1900 2000 2000
Case #2: 1800 1000 1800 1800 2300
Case #3: 1200 -1
*/
#include <stdio.h>
#include <stdlib.h>

#define ll long long

#define TRUE  ((ll) 1u)
#define FALSE ((ll) 0u)
#define BSEARCH_FAILED ((ll) -1)
#define NOT_USED

void merge_sort(ll a[], ll length);
void merge_sort_recursion(ll a[], ll left, ll right);
void merge_sorted_arrays(ll a[], ll left, ll middle, ll right);

#ifndef NOT_USED
ll binary_search(ll a[], ll length, ll val);
ll bs_upper_bound(ll arr[], ll length, ll val);
#endif

ll bs_lower_bound(ll a[], ll length, ll val);

int main(){
	return 0;
}

void merge_sort(ll a[], ll length) {
	merge_sort_recursion(a, 0, length - 1);
}