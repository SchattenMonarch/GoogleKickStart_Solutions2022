#define _CRT_SECURE_NO_WARNINGS
/*
Author: Dennis Folz
Date  : 17/08/2022
GitHub: https://github.com/SchattenMonarch

Title: Google Kick Start 2022: Coding Practice with Kick Start Session #1

Problem: H-Index

Description: This program calculates the H-Index from the number of papers and number of citations per paper.
			 For a good time complexity = Nlog(N) a min heap data structure will be implemented.

Sample Input
2
3
5 1 2
6
1 3 3 2 2 15

Sample Output
Case #1: 1 1 2
Case #2: 1 1 2 2 2 3
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TRUE  ((unsigned char) 1u)
#define FALSE ((unsigned char) 0u)

typedef struct min_heap
{
	int* item;
	int size;
	int count;
} Heap;

Heap* create_heap(void);

void heapify_up(Heap* heap, int index);
void heapify_down(Heap* heap, int index);

void push(Heap* heap, int x);
void pop(Heap* heap);
unsigned char swap(Heap* heap, int index_one, int index_two);

int get_size(Heap* heap);
int get_top(Heap* heap);

int get_parent_index(int child_index);
int get_left_child_index(int parent_index);
int get_right_child_index(int parent_index);

int get_left_child(Heap* heap, int index);
int get_right_child(Heap* heap, int index);
int get_parent(Heap* heap, int index);

unsigned char is_empty(Heap* heap);
unsigned char has_parent(Heap * h, int index);
unsigned char has_left_child(Heap * h, int index);
unsigned char has_right_child(Heap * h, int index);


int main()
{
	return 0;
}

Heap* create_heap(void)
{
	//allocate memory for the heap and its elements
	Heap* heap = (Heap*)malloc(sizeof(Heap));
	heap->size = 1;
	heap->item = (int*)malloc(heap->size * sizeof(int));
	heap->count = 0;
	return heap;
}

int get_size(Heap* heap) {
	if (heap == NULL) return FALSE;

	return heap->count;
}

unsigned char is_empty(Heap* heap) {
	if (heap == NULL) return FALSE;
	return heap->count <= 0 ? TRUE : FALSE;
}

int get_top(Heap* heap) {
	if (heap == NULL || is_empty(heap)) return FALSE;
	return heap->item[0];
}

int get_parent_index(int child_index) {
	return child_index > 0 ? (child_index - 1) / 2 : INT_MIN;
}

int get_left_child_index(int parent_index) {
	return parent_index >= 0 ? parent_index * 2 + 1 : INT_MIN;
}

int get_right_child_index(int parent_index) {
	return parent_index >= 0 ? parent_index * 2 + 2 : INT_MIN;
}

int get_left_child(Heap* heap, int index) {
	int ret_val = INT_MIN;
	int left_child_index = get_left_child_index(index);
	if (heap != NULL && left_child_index > 0) {
		ret_val = heap->item[left_child_index];
	}
	return ret_val;
}

int get_right_child(Heap* heap, int index) {
	return FALSE;
}

int get_parent(Heap* heap, int index) {
	return FALSE;
}

unsigned char has_parent(Heap * h, int index) {
	return FALSE;
}

unsigned char has_left_child(Heap* h, int index) {
	int left_child_index = get_left_child_index(index);
	return (left_child_index > 0 && left_child_index < get_size(h)) ? TRUE : FALSE;
}

unsigned char has_right_child(Heap * h, int index) {
	int right_child_index = get_right_child_index(index);
	return (right_child_index > 0 && right_child_index < get_size(h)) ? TRUE : FALSE;
}

void heapify_up(Heap* heap, int index) {
	return;
}

void heapify_down(Heap* heap, int index) {
	return;
}

void push(Heap* heap, int x) {
	return;
}

void pop(Heap* heap) {
	return;
}

unsigned char swap(Heap* heap, int index_one, int index_two) {
	return FALSE;
}

