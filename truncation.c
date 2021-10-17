#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //Get numbers fron the user
    int x = get_int ("x: ");
    int y = get_int ("y: ");

    // Final calculation
    float z = (float) x / (float) y;
    printf ("answer is %f\n",z);
}