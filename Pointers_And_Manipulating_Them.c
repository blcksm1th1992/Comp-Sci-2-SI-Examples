#include <stdio.h>
#include <stdlib.h>

void originVars()
{
 	char letter[10];
	int num;
	float boat;

	char* pc = letter;
	int* pi = &num;
	float* pf = &boat;

	printf("FUNCTION 1:\n\n");
	printf("This is the memory address of Char:  %p.\n", &pc);
	printf("This is the memory address of Int:   %p.\n", &pi);
	printf("This is the memory address of Float: %p.\n\n", &pf); //these print the memory addresses

	*pc = 'A';
	*pi = 10;
	*pf = 3.14; // dereferencing here and assigning values

	printf("Value of Char:  %s.\n", letter);
	printf("Value of Int:   %d.\n", num);
	printf("Value of Float: %.2f.\n\n", boat); // these print the values 3.14, 10, and A (uses the original values to print, but uses the pointer to assign the value)

	printf("Enter a new value for Char:  "); scanf("%s", pc);
	printf("Enter a new value for Int:   "); scanf("%d", pi);
	printf("Enter a new value for Float: "); scanf("%f", pf); // this uses pointers to get new values

	printf("\nThe User Value for Char:  %s\n", letter);
	printf("The User Value for Int:   %d\n", num);
	printf("The User Value for Float: %.2f\n", boat); // prints the values back using the original values
}

void voidPointer()
{
	char character[10];
	int number;
	float ship;

	printf("\n\nFUNTION 2:\n\n");

	void *point = &character; //temporarily assigning the void to character
	printf("This is the memory address of Char:  %p.\n", &point);
	*(char *)point = 'B'; // hardcodes/delinates the pointer and gives character a value
	printf("Hard Coded value of Char:   %s\n", character); //prints value
	printf("Enter a new value for Char: "); scanf("%s", point); //gets a new value for character
	printf("The User Value for Char:    %s\n", character); // prints new value

	point = &number;// process restarts for number
	printf("\nThis is the memory address of Int:  %p.\n", &point);
	*(int *)point = 15;
	printf("Hard Coded value of Int:   %d\n", number);
	printf("Enter a new value for Int: "); scanf("%d", point);
	printf("The User Value for Int:    %d\n", number);

	point = &ship;// process restarts for number
	printf("\nThis is the memory address of Float:  %p.\n", &point);
	*(float *)point = 6.66;
	printf("Hard Coded value of Float:   %.2f\n", ship);
	printf("Enter a new value for Float: "); scanf("%f", point);
	printf("The User Value for Float:    %.2f\n", ship);
}

void functionThree()
{
	int math;
	double trouble;

	int* pm = &math;
	double* pt = &trouble;

	printf("\n\nFUNTION 3:\n\n");

	printf("Size of an integer variable: %d\n", sizeof(math));
	printf("Size of a double variable:   %d\n\n", sizeof(trouble));

	printf("Size of an integer pointer:  %d\n", sizeof(pm));
	printf("Size of a double pointer:    %d\n\n", sizeof(pt));

	printf("The C standard keeps that an integer will be 4 bytes, doubles are 8 and\npointers are equal to different lengths based on the OS and compiler \n32 bit computers will have pointers equal to 4 bytes and \n64 bit will be equal to 8 bytes.\n");
}

void ExtraCredit()
{
	int original;
	int* po = &original;
	int** ppo = &po;

	**ppo = 42;
	printf("\n\nFUNTION 4 (The Exta Credit):\n\n");

	//printf("Mem of original %p\n", &po); // used to verify when lookinig for it with the double pointer

	printf("The memory address of the original var:  %p\n", &*ppo);
	printf("The memory address of the First Pointer: %p\n", &ppo);
	printf("The numerical value of the original var: %d\n", original);
}

int main()
{
	originVars();
	voidPointer();
	functionThree();
	ExtraCredit();
	
	return 0;
}