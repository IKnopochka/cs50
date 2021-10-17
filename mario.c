#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt the user for height
    int x;

    do
    {
        x = get_int("Height: ");
    }
    while (x < 1 || x > 8);

    //Build the pyramid according to the number said
    int h; //for height
    int y; //for hashes
    int d; //for dots/spaces

    for (h = 0; h < x; h++)
    {
        for (d = x - h; d > 1; d--)
        {
            printf(" ");
        }

        for (y = 0; y <= h; y++)
        {
            printf("#");
        }
        printf("\n");
    }

}