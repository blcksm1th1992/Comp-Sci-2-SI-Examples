#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size=0;
	int *integer = (int*)malloc(sizeof(int));
	int i, j, n;

	do
	{
		printf("__________________________________________________________________________________________________________\nWelcome to the Stack Program, so do you want to:\n\n 1.) Add a Value to the Stack? \n 2.) Process a node in the stack?\n 3.) Quit the Program? \n\n");

			if (integer[0] == NULL || size == NULL )
			{
				printf("The Stack is Currently empty!\n\n");
			}

			else if (integer[0] != NULL)
			{
				printf("The Current DATA Stack:\n");
				for (i = 0; i < size; ++i)
					{
						printf("%d\t", integer[i]);
					}
				puts("\n");
			}
			else{printf("ERROR\n");}

		printf("$> ");
		scanf("%d", &n);
		puts(" ");

		switch (n)
		{
			case 1: size = size + 1;
					integer = (int*)realloc(integer, (sizeof(int)*size));
					printf("Now add a value to the stack: ");
					scanf("%d", &j);
					if(size == 1){integer[0] = j;}
					else{integer[i++] = j;}
					puts(" ");
					break;

			case 2: if (i >= size && size > 0)
					{
                        integer = (int*)realloc(integer, (sizeof(int)*size));
						i = i-1;
						printf("Now processing %d!!!\n", integer[i]);
						size = size - 1;
					}
					break;

			case 3: printf("Freeing all the memory. Toksha, Have a Good Day!\n");
					break;
			default: printf("ERROR\n");
					 break;
		}
	}while(n != 3);

	free(integer);
	return 0;
}