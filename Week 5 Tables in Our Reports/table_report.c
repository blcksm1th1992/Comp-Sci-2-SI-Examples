#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void addInventory( FILE* fp, int inventory[], int row)
{
    // column 1: x 2: y
    int i;

    for ( i = 0; i<= row; i++)
    {
        int x = (rand() % 20) + 2;
        inventory[i] = x; 
    }

    //printInventory(inventory, row);
    reportInventory(fp, inventory, row);
}

void delInventory(FILE* fp, int inventory[], int row)
{
    int i;
    puts ("Which index do you want deleted?"); // indexes start at zero.
    scanf("%d", &i);

    inventory[i] = NULL;
    fprintf( fp, "%d ", inventory[i]);
}

int shrinkInventory()
{

}

int growInventory()
{

}

int printInventory(int inventory[], int row)
{
    int i;
    for ( i = 0; i<= row; i++)
    {
        printf("%d\n", inventory[i]); 
    }   
}
int reportInventory(FILE * fp, int inventory[], int row)
{
    int i;
    for ( i = 0; i<= row; i++)
    {
        fprintf(fp, "%d ", inventory[i]); 
    }   
}

int main()
{   
    srand(time(0));
    int row = 5;
    int inventory[row];
    int choice;
    FILE * fp;

    puts("Choose From the functions below: \n\t 1.) Add to Inventory \n\t 2.) Delete from Inventory");
    scanf("%d", &choice); 

    switch (choice)
    {
        case 1: fp = fopen("inventory.txt", "w");
                addInventory( fp, inventory, row);
                break;
        case 2: fp = fopen("inventory.txt", "a");
                delInventory(fp, inventory, row);
        default: exit(9);
                break;

    }
    return 0;
}
