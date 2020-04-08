#include <stdio.h>
#include <stdlib.h>

struct prisoner 
{
    char name;
    struct prionser *next; 
};


struct prisoner *newPrisoner( char Name )
{
    //puts("Joker Arrived");
    struct prisoner *inmate;
    inmate = malloc(sizeof(struct prisoner));
    inmate->name = Name;
    inmate->next = NULL;
    return inmate;
}

void release()
{
    printf("Joker escaped\n");
}

void printlist( struct prisoner *front )
{
	struct prisoner *mov;
	mov = front;
	while (mov != NULL) // changing the condition (mov->link != NULL), it will fall off the list before printing 14.
	{
		printf("%d  ", mov->name);
		mov = mov->next;
	}
	printf("\n");
}

int main()
{
    struct prisoner *one, *two; 
    int u;
    char villian[20];
    char *Name; 

    do
    {
        puts("--------Welcome to Arkham Asylum-------\n");
        puts("\tSelect 1 for new prisoner:");
        puts("\tSelect 2 for prisoner release:");
        puts("\tSelect 3 to Exit program: ");
        printf("#> ");
        scanf("%d", &u);        
        puts(" ");


        switch(u)
        {
            case 1: puts("Name of prisoner: ");
                    scanf("%s", &villian);
                    Name = villian;
                    one = newPrisoner(Name);
                    printlist(one);
                    break;

            case 2: release();
                    break;
            case 3: puts("Have a Nice day in Gotham"); 
                    break; 
            default: puts("Error");
                     exit(69);
        }
    }while(u != 3);

    return 0;
}