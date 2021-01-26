#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char villianMenu( char villName[25])
{
    int villianPick;
    puts("Choose a Villian To Put in Arkham:\n\t1.) Joker\n\t2.) Riddler\n\t3.) Cat Woman");
    scanf("%d", &villianPick);
    switch ( villianPick )
    {
        case 1: villName = "Joker";
                break;
        case 2: villName = "Riddler";
                break;
        case 3: villName = "Cat Woman";
                break;
    }

    printf("You have choosen %s for condemnation.\n", villName);
    return villName;
}

void crimeSeverity( int CSroll, char villName[25])
{
    villianMenu(villName);
    CSroll = rand() % 100;

    if(CSroll >= 90 && CSroll < 100)
    {
        printf("%s Killed Robin with a Crowbar\n", villName);
    }
    else if(CSroll >= 40 && CSroll < 90 )
    {
        printf("%s robbed a precious jewel from a museum\n", villName);
    }
    else if(CSroll < 40)
    {
        printf("%s Left useless Riddler Trophies thereby defacing public property\n", villName);
    }
    else
    {
        puts("ERRROR");
    }
} 

int penaltyRoll( int Proll)
{

}

int main()
{
    int CSroll;
    int Proll;
    //int villianPick;
    char villName[25];
    srand(time(0));
    
   /* int x = rand() % 100;
    printf("%d\n", x); */ 

    //villianMenu(villName);
    printf("%s", villianMenu(villName));

   //crimeSeverity(CSroll, villName); 

    return 0;
}