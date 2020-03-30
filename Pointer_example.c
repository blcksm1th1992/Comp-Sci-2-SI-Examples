#include <stdio.h>
#include <stdlib.h>

void brotherOne()
{
    char broOne[10] = "Miles";
    void* one = broOne; // one now points to the value of broOne
    int houses = 23;

    printf(" %s set the house on fire.\n", broOne );
    printf("%s set the house on fire. \n", one);

    one = houses;
    // The pointer one now points to houses. this means it doesnt point to the value held by broOne. 
    // What would happen should someone try to print Miles useing one ?

    printf("%s burnt down %d houses\n", broOne, houses);
    printf("%s burnt down %d houses\n", broOne, one);
    printf("%s burnt down %d houses\n", one, one ); 
}


int main()
{
    brotherOne();
    return 0;
}