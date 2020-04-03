#include <stdio.h>
#include <stdlib.h>

struct lnode
{
	int data;
	struct lnode *link;
};

struct lnode *makenode( int val ) //returns the memory address pointed to by box
{
	struct lnode *box;  //box is a pointer to a structure
	box = malloc( sizeof( struct lnode ) );
	box->data = val;
	box->link = NULL;
	return box;
}

void printlist( struct lnode *front )
{
	struct lnode *mov;
	mov = front;
	while (mov != NULL) // changing the condition (mov->link != NULL), it will fall off the list before printing 14.
	{
		printf("%d  ", mov->data);
		mov = mov->link;
	}
	printf("\n");
}


int main()
{
	struct lnode *p, *q, *w, f;

	p = makenode(7);
	//p = makenode(5); //this would cause a memory look at notes for more information.
	puts("This is the initial node p:");
	printlist(p);

	q = makenode(14);
	p->link = q;

	puts("Due to node q being added on top of the node p; Line 2 of output is a stack:");
	printlist(p);

	q = makenode(21);
	q->link = p;
	p = q;
	puts("Due to 21 being inserted behind 7 and 14 this line of output represents a queue:");
	printlist(p);

	return 0;
}


