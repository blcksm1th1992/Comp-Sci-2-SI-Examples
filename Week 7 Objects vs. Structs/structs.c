#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

int main()
{
    srand(time(0));
    struct Powerlifter Eddie; 
    Eddie.squat = rand() % 600 + 1;
    Eddie.deadlift = rand() % 600 + 1;
    Eddie.bench_press = rand() % 600 + 1;

    printf("Eddie has a %d kilo Squat, %d kilo Deadlift, %d kilo Bench_Press\n\n", Eddie.squat, Eddie.deadlift, Eddie.bench_press);


    WSM(Eddie, Eddie.deadlift);
    kiloToPounds(Eddie, Eddie.squat, Eddie.deadlift, Eddie.bench_press);

    return 0; 
}