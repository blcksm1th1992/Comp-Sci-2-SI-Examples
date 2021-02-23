#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(0)); //srand by practice should be declared by varaibles

    int dnd20 = rand() % 20; // the modulus 20 creates a range of 0 to 20;
    
    printf("You rolled a %d \n", dnd20); 

    return 0;
}