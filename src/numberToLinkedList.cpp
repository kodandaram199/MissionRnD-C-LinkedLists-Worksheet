/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.
INPUTS:  A number.
OUTPUT: Create linked list from given number, each digit as a node.
ERROR CASES:
NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *temp = NULL, *last = NULL;
	if (N == 0)
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->num = N;
		temp->next = NULL;
	}
	if (N < 0)
		N = N * -1;
	while (N != 0)
	{
		int data = N % 10;
		temp = (struct node *)malloc(sizeof(struct node));
		temp->num = data;
		if (last == NULL)
		{
			temp->next = NULL;
			last = temp;
		}
		else
		{
			temp->next = last;
			last = temp;
		}
		N /= 10;
	}
	return temp;
}