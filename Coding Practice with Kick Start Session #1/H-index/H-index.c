#define _CRT_SECURE_NO_WARNINGS
/*
Author: Dennis Folz
Date  : 17/08/2022
GitHub: https://github.com/SchattenMonarch

Title: Google Kick Start 2022: Coding Practice with Kick Start Session #1

Problem: H-Index

Description: This program calculates the H-Index from the number of papers and number of citations per paper.

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

#define TRUE 1
#define FALSE 0

typedef struct min_heap
{
    int* p;
    int size;
    int count;
} Heap;

Heap* create_heap(void); /*Creates a min_heap structure and returns a
                                  pointer to the struct*/
void down_heapify(Heap* heap, int index); /*Pushes an element downwards in the
                                             heap to find its correct position*/
void up_heapify(Heap* heap, int index); /*Pushes an element upwards in the heap
                                           to find its correct position*/
void push(Heap* heap, int x);           /*Inserts an element in the heap*/
void pop(Heap* heap); /*Removes the top element from the heap and adjusts the shape of the min heap*/
int top(Heap* heap); /*Returns the top element of the heap or returns INT_MIN if
                        heap is empty*/
int empty(Heap* heap); /*Checks if heap is empty*/
int size(Heap* heap);  /*Returns number of elements in the heap*/

int main()
{
	return 0;
}

Heap* create_heap(void)
{
	//allocate memory for the heap and its elements
    Heap* heap = (Heap*)malloc(sizeof(Heap));
    heap->size = 1;
    heap->p = (int*)malloc(heap->size * sizeof(int));
    heap->count = 0;
    return heap;
}
