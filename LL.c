#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h> // for rand and srand

/*
This file is used for testing purposes.
You do not need to modify this file at all.
Your searches may look different, but your
output should look like the following:
************* Start program *************
Beginning to insert values into the queue.
74
97  74
93  97  74
59  93  97  74
24  59  93  97  74
52  24  59  93  97  74
37  52  24  59  93  97  74
69  37  52  24  59  93  97  74
53  69  37  52  24  59  93  97  74
52  53  69  37  52  24  59  93  97  74
What value would you like to search for: 52
52 was found at memory location 007C1920.
What value would you like to search for: 22
22 was not found in the list.
Now removing values from the queue:
52  53  69  37  52  24  59  93  97
52  53  69  37  52  24  59  93
52  53  69  37  52  24  59
52  53  69  37  52  24
52  53  69  37  52
52  53  69  37
52  53  69
52  53
52
*/

// How many values do I want to insert / delete.
#define SIZE 10

int main()
{
	srand(42);
	int i, key;
	
	printf("Beginning to insert values into the queue.\n");
	node* queueHead = NULL;
	node* searchNode = NULL;
	
	for(i = 0; i < SIZE; i++)
	{
		// Enqueue a random value between 0-100
		queueHead = enqueue(queueHead, rand()%101);
		
		// Show the queue after each insertion.
		printList(queueHead);
	}
	
	// Do two searches, one that's there and one that isn't.
	printf("\nWhat value would you like to search for: ");
	scanf("%d", &key);
	
	searchNode = search(queueHead, key);
	if(searchNode == NULL)
		printf("%d was not found in the list.\n\n", key);
	else
	{
		printf("%d was found at memory location %p.\n\n",
			   searchNode->data, searchNode);
	}
	
	// Second Search.
	printf("\nWhat value would you like to search for: ");
	scanf("%d", &key);
	
	searchNode = search(queueHead, key);
	if(searchNode == NULL)
		printf("%d was not found in the list.\n\n", key);
	else
	{
		printf("%d was found at memory location %p.\n\n",
			   searchNode->data, searchNode);
	}
	
	// Now remove each item in the queue.
	printf("Now removing values from the queue:\n");
	while(queueHead != NULL)
	{
		// Remove a value from the queue.
		queueHead = dequeue(queueHead);
		
		// Show the queue after each deletion
		printList(queueHead);
	}

	return 0;
}