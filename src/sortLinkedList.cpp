/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *temp1;
	struct node *temp2;
	struct node *temp ;
	temp = head;
	if (head == NULL)
		return NULL;
	if (temp != NULL && temp->next != NULL)
		for (temp1 = temp; temp1 != NULL; temp1 = temp1->next)
			for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
				if (temp1->num > temp2->num)
				{
					int x = temp1->num;
					temp1->num= temp2->num;
					temp2->num = x;
				}
	return head;

}