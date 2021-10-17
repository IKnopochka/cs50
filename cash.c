#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //get the number of coins from the user
    int c; //number of coins
    do
    {
        float x = get_float("Change owed: ");
        c = round(x * 100);
    }
    while (c < 0);

    //count coins
    int a; //coin number
    for (a = 0; c > 24; a++)
    {
        c = c - 25;
    }

    int b; //coin number
    for (b = a; c > 9; b++)
    {
        c = c - 10;
    }

    for (a = b; c > 4; a++)
    {
        c = c - 5;
    }

    for (b = a; c > 0; b++)
    {
        c = c - 1;
    }
    
    //Final ammount of coins
    printf("%i\n", b);
}