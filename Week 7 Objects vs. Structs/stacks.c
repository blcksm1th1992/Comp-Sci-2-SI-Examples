#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main ()
{
    int stack[10], i;
    srand(time(0));

    for(i = 0; i <= 10; i++)
    {    
        stack [i] = rand() % 10;
    }

    for(i = 0; i <= 10; i++)
    {
        printf("%d ", stack[i]);
    }

    puts(" ");
    while ( i >= 10)
    {
        i --;
        printf("%d ", stack[i]);

    }
    puts(" ");
    return 0; 
}