/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes
will be followed by ones and then twos.
INPUTS:  SLL head pointer
OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2
ERROR CASES:
NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	int numZeroes = 0, numOnes = 0, numTwos = 0;
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		if (temp->data == 0)
			numZeroes++;
		else if (temp->data == 1)
			numOnes++;
		else
			numTwos++;
		temp = temp->next;
	}
	temp = head;
	while (temp != NULL)
	{
		if (numZeroes > 0)
		{
			temp->data = 0;
			numZeroes--;
		}
		else if (numOnes > 0)
		{
			temp->data = 1;
			numOnes--;
		}
		else
		{
			temp->data = 2;
			numTwos--;
		}
		temp = temp->next;
	}
}