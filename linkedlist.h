// this is a custom header file

#ifndef LINKED_LIST
#define LINKED_LIST
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node_t node;

struct node_t
{
	int data;
	node *next;
};

void printList(node *head)
{
	node* walker = head;
	while(walker != NULL)
	{
		printf("%d ", walker->data);
		walker = walker->next;
	}
	puts(" ");
}

node* enqueue(node* head, int d)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = d;

	newNode->next = NULL;
		if(head == NULL)
		{
			head = newNode;
			return head;
		}
		else 
		{
			newNode->next = head;
			head = newNode;
			return head;
		}
	free(newNode);
}


node* dequeue(node* head) // deletes at the end of the queue
{
	node* dltptr = head;
	node* walker = head;
	if (head == NULL)
	{
		return head;
	}
	else if (head->next == NULL)
	{
		head = NULL;
	}
	else
	{
		while(walker->next->next != 0)
		{
			walker = walker->next;
		}
		dltptr = walker->next;
		walker->next = dltptr->next;
		free(dltptr);
		return head;
	}
}

node* search(node* head, int key) // finds a node in the queue
{
	node* walker = head;

	while(walker->next - 1 != NULL)
	{
		if(walker->data == key)
			return walker;
		else
			if(walker->next == NULL)
				return NULL;
			walker=walker->next;
	}
	free(walker);
}
#endif