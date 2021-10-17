#include <stdio.h>
#include <cs50.h>

void meow(int n);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("meow\n");
    }
}

void meow(void);

int main (void)
{
    for (int i = 0; i <= 3; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}