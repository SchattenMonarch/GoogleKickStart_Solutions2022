#define _CRT_SECURE_NO_WARNINGS
/*
Author: Dennis Folz
Date  : 17/08/2022
Last Uptade: 18/08/2022
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
	int capacity;
	int count;
} Heap;

Heap* create_heap(void);

void heapify_up(Heap* heap, int index);
void heapify_down(Heap* heap);

void push(Heap* heap, int value);
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
unsigned char has_parent(Heap* h, int index);
unsigned char has_left_child(Heap* h, int index);
unsigned char has_right_child(Heap* h, int index);


int main()
{
	Heap* head = create_heap();

	int t = 0, n = 0, h_index = 0;

	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		scanf("%d", &n);
		int* c = (int*)malloc(n * sizeof(int));
		for (int k = 0; k < n; k++) {
			scanf("%d", &c[k]);
		}
		printf("Case #%d: ", i);
		for (int j = 0; j < n; j++) {
			while (is_empty(head) != TRUE && h_index >= get_top(head)) {
				pop(head);
			}
			if (h_index < c[j]) {
				push(head, c[j]);
			}
			if (get_size(head) == h_index + 1) {
				h_index = get_size(head);
			}
			printf("%d ", h_index);
		}
		putchar('\n');
		while (is_empty(head) != TRUE) {
			pop(head);
		}
		h_index = 0;
		free(c);
	}

	return 0;
}

Heap* create_heap(void)
{
	//allocate memory for the heap and its elements
	Heap* heap = (Heap*)malloc(sizeof(Heap));
	heap->capacity = 1;
	heap->item = (int*)malloc(heap->capacity * sizeof(int));
	heap->count = 0;
	return heap;
}

int get_size(Heap* heap) {
	int ret_val = FALSE;
	if (heap != NULL) {
		ret_val = heap->count;
	}
	return ret_val;
}

unsigned char is_empty(Heap* heap) {
	unsigned char ret_val = FALSE;
	if (heap != NULL) {
		ret_val = heap->count <= 0 ? TRUE : FALSE;
	}
	return ret_val;
}

int get_top(Heap* heap) {
	if (heap == NULL || is_empty(heap)) return FALSE;
	return heap->item[0];
}

unsigned char swap(Heap* heap, int index_one, int index_two) {
	unsigned char ret_val = FALSE;
	int tmp = INT_MIN;
	if (heap != NULL
		&& index_one >= 0 && index_one < get_size(heap)
		&& index_two >= 0 && index_two < get_size(heap))
	{
		tmp = heap->item[index_one];
		heap->item[index_one] = heap->item[index_two];
		heap->item[index_two] = tmp;
		ret_val = TRUE;
	}
	return ret_val;
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
	if (heap != NULL && has_left_child(heap, index)) {
		ret_val = heap->item[get_left_child_index(index)];
	}
	return ret_val;
}

int get_right_child(Heap* heap, int index) {
	int ret_val = INT_MIN;
	if (heap != NULL && has_right_child(heap, index)) {
		ret_val = heap->item[get_right_child_index(index)];
	}
	return ret_val;
}

int get_parent(Heap* heap, int index) {
	int ret_val = INT_MIN;
	if (heap != NULL && has_parent(heap, index)) {
		ret_val = heap->item[get_parent_index(index)];
	}
	return ret_val;
}

unsigned char has_parent(Heap* h, int index) {
	int parent_index = get_parent_index(index);
	return (parent_index >= 0 && parent_index < get_size(h) - 1) ? TRUE : FALSE;
}

unsigned char has_left_child(Heap* h, int index) {
	int left_child_index = get_left_child_index(index);
	return (left_child_index > 0 && left_child_index < get_size(h)) ? TRUE : FALSE;
}

unsigned char has_right_child(Heap* h, int index) {
	int right_child_index = get_right_child_index(index);
	return (right_child_index > 0 && right_child_index < get_size(h)) ? TRUE : FALSE;
}

void heapify_up(Heap* heap, int index) {
	if (heap == NULL) return;
	while (has_parent(heap, index) && get_parent(heap, index) > heap->item[index]) {
		swap(heap, index, get_parent_index(index));
		index = get_parent_index(index);
	}
	return;
}

void heapify_down(Heap* heap) {
	if (heap == NULL) return;
	int smaller_child_index = INT_MIN, index = 0;

	//if there is no left child, the won't be a right child
	while (has_left_child(heap, index)) {
		smaller_child_index = has_right_child(heap, index)
			           && get_right_child(heap, index) < get_left_child(heap, index) ? get_right_child_index(index) : get_left_child_index(index);
		if (heap->item[smaller_child_index] < heap->item[index]) {
			swap(heap, index, smaller_child_index);
			index = smaller_child_index;
		}
		else {
			break;
		}
	}
	return;
}

void push(Heap* heap, int value) {
	if (heap == NULL) {
		return;
	}
	else if (heap->count >= heap->capacity) {
		heap->capacity *= 2;
		if ((heap->item = realloc(heap->item, heap->capacity * sizeof(int))) == NULL) {
			exit(1);
		}
	}
	heap->item[heap->count] = value;
	heap->count++;
	heapify_up(heap, heap->count - 1);
	return;
}

void pop(Heap* heap) {
	if (heap == NULL) {
		return;
	}
	else if (heap->count == 0) {
		return;
	}
	heap->count--;
	heap->item[0] = heap->item[heap->count];
	if (heap->count < heap->capacity / 2) {
		heap->capacity /= 2;
		if ((heap->item = realloc(heap->item, heap->capacity * sizeof(int))) == NULL) {
			exit(1);
		}
	}
	heapify_down(heap);
	return;
}
