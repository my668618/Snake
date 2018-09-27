#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Promt user for length of snake
    printf("Enter Length Of The Snake: ");

    //Get input from user
    int snakelength;
    scanf("%d", &snakelength);

    //Start building snake starting with tale
    printf("***");

    //Build the snake body
    for(int i = 0; i < snakelength; i++)
        {
            printf("=");
        }

    //Build the head of the snake
    printf("<:>~");


    //printf("Hello world!\n");
    return 0;
}
