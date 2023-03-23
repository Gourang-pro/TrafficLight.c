#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int count = 0;
    while (count < 10) { // simulate 10 cycles of the traffic light
        printf("Green light\n");
        sleep(5); // green light for 5 seconds
        printf("Yellow light\n");
        sleep(2); // yellow light for 2 seconds
        printf("Red light\n");
        sleep(5); // red light for 5 seconds
        count++;
    }
    return 0;
}
