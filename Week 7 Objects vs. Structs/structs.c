#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
    1.) User Input     DONE
    2.) Int Functions  DONE
    3.) Switch Cases   DONE
    4.) Loops
            a.) For 
            b.) While (Will only run with right conditions; much like how Sheldon needs perfect sipping temperature)
      DONE  c.) Do while ( Will Run Once Guaranteed) 
    5.) Arrays
        a.) Single Dimension
        b.) 2 D
        c.) Strings
    6.) Header Files

*/ 
struct Powerlifter
{
	int squat;
    int deadlift;
    int bench_press;

}; 

void kiloToPounds(struct Powerlifter Eddie, int s, int d, int b)
{

    Eddie.squat = Eddie.squat * 2.20462;
    Eddie.deadlift = Eddie.deadlift * 2.20462;
    Eddie.bench_press = Eddie.bench_press * 2.20462;

    printf("Eddie has a %d pound Squat, %d pound Deadlift, %d pound Bench_Press\n\n", Eddie.squat, Eddie.deadlift, Eddie.bench_press);
}

void WSM(struct Powerlifter Eddie, int d)
{
    if (Eddie.deadlift > 516)
    {
        puts(" You have the world RECORD!!!" );
    }
    else if (Eddie.deadlift < 516 )
    {
        puts( "Better Luck Next time");
    }
    else 
        puts("Error");
} 

float BigThree(int d, int s, int b)
{
    float BigNum = d + s + b; 
    return BigNum;
}

int main()
{
    int i = 0;
    do
    {
        srand(time(0));
        struct Powerlifter Eddie; 
        Eddie.squat = rand() % 600 + 1;
        Eddie.deadlift = rand() % 600 + 1;
        Eddie.bench_press = rand() % 600 + 1;

        int n; 
        float BigNum; // for our switch case

        //printf("Eddie has a %d kilo Squat, %d kilo Deadlift, %d kilo Bench_Press\n\n", Eddie.squat, Eddie.deadlift, Eddie.bench_press);
        puts("Choose Here:\n\t1.) Does Eddie have the Deadlift record\n\t2.) Convert Kilo to Pounds\n\t3.) Total of Eddie's big Three Lifts\n\t4.) Leave the Program");

        scanf("%d", &n);

        switch ( n )
        {
            case 1: WSM(Eddie, Eddie.deadlift);
                    break;

            case 2: kiloToPounds(Eddie, Eddie.squat, Eddie.deadlift, Eddie.bench_press);
                    break;

            case 3: BigNum = BigThree(Eddie.deadlift, Eddie.squat, Eddie.bench_press);
                    printf ("\nYour Big Three Total is: %.2f\n", BigNum);

            case 4: exit(7);
                    break;
                    
            default: puts ("Error 404 Not Found; Try again; Go home your drunk ");
                    exit(9);
                    break;
        }
    } while ( i == 0);

    return 0; 
}