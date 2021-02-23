#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Food
{
	char name[20];
	int calories;

}; 




int main()
{
    struct Food apple; 

    scanf("%s", apple.name);

    scanf("%d", &apple.calories);
    //printf("%s", apple.name); 

    int dailyCal = dailyCal - apple.calories; 

    printf("Calories left in day: %d\n", dailyCal);
    return 0; 
}