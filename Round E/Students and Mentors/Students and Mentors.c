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

void merge_sort_recursion(ll a[], ll left, ll right) {
	ll middle;
	if (left < right) {
		middle = left + (right - left) / 2;

		merge_sort_recursion(a, left, middle); // NOT merge_sort_recursion(a, 0, middle);
		merge_sort_recursion(a, middle + 1, right);

		merge_sorted_arrays(a, left, middle, right);
	}
	return;
}

void merge_sorted_arrays(ll a[], ll left, ll middle, ll right) {
	ll left_length = middle + 1 - left, right_length = right - middle, i = 0u, j = 0u, k = 0u;

	ll* left_arr = (ll*)malloc(left_length * sizeof(ll));
	ll* right_arr = (ll*)malloc(right_length * sizeof(ll));

	for (i = 0; i < left_length; i++) {
		left_arr[i] = a[left + i];
	}
	for (i = 0; i < right_length; i++) {
		right_arr[i] = a[middle + 1 + i];
	}

	for (i = 0, j = 0, k = left; k <= right; k++) {
		// i not at the end of the left array AND (j finished the right array OR i at left array i smaller than j at right array)
		if (i < left_length
			&& (j >= right_length || left_arr[i] <= right_arr[j])) {
			a[k] = left_arr[i++];
		}
		else {
			a[k] = right_arr[j++];
		}
	}
	free(left_arr);
	free(right_arr);
	return;
}