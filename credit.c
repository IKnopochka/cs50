#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //Prompt for card number
    long n;
    do
    {
        n = get_long("Card number: ");
    }
    while (n < 0);

    //Get digits separately
    int n16 = (n % 10);
    int n15 = (n % 100 / 10);
    int n14 = (n % 1000 / 100);
    int n13 = (n % 10000 / 1000);
    int n12 = (n % 100000 / 10000);
    int n11 = (n % 1000000 / 100000);
    int n10 = (n % 10000000 / 1000000);
    int n9 = (n % 100000000 / 10000000);
    int n8 = (n % 1000000000 / 100000000);
    int n7 = (n % 10000000000 / 1000000000);
    int n6 = (n % 100000000000 / 10000000000);
    int n5 = (n % 1000000000000 / 100000000000);
    int n4 = (n % 10000000000000 / 1000000000000);
    int n3 = (n % 100000000000000 / 10000000000000);
    int n2 = (n % 1000000000000000 / 100000000000000);
    int n1 = (n % 10000000000000000 / 1000000000000000);

    //2nd-to-last digits multiplied by 2
    int d15 = n15 * 2;
    int d13 = n13 * 2;
    int d11 = n11 * 2;
    int d9 = n9 * 2;
    int d7 = n7 * 2;
    int d5 = n5 * 2;
    int d3 = n3 * 2;
    int d1 = n1 * 2;

    //Separate 2-to-last digits individually (second and first)
    int sd15 = (d15 % 10);
    int fd15 = (d15 % 100 / 10);
    int sd13 = (d13 % 10);
    int fd13 = (d13 % 100 / 10);
    int sd11 = (d11 % 10);
    int fd11 = (d11 % 100 / 10);
    int sd9 = (d9 % 10);
    int fd9 = (d9 % 100 / 10);
    int sd7 = (d7 % 10);
    int fd7 = (d7 % 100 / 10);
    int sd5 = (d5 % 10);
    int fd5 = (d5 % 100 / 10);
    int sd3 = (d3 % 10);
    int fd3 = (d3 % 100 / 10);
    int sd1 = (d1 % 10);
    int fd1 = (d1 % 100 / 10);

    //Sum of 2-to-last individual digits
    int sumd = (sd15 + fd15 + sd13 + fd13 + sd11 + fd11 + sd9 + fd9 + sd7 + fd7 + sd5 + fd5 + sd3 + fd3 + sd1 + fd1);

    //Calculate checksum
    int checksum = (sumd + n16 + n14 + n12 + n10 + n8 + n6 + n4 + n2);

    //Get second digit of checksum
    int csd = (checksum % 10);

    //Check second digit of checksum
    if (csd == 0)
    {
        //Check card lenght and starting digits
        
        //for American Express
        if (n2 == 3 && n1 == 0)
        {
            if (n3 == 4 || n3 == 7)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        //for Mastercard
        else if (n1 == 5)
        {
            if (n2 == 1 || n2 == 2 || n2 == 3 || n2 == 4 || n2 == 5)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        //for Visa
        else if (n1 == 4)
        {
            printf("VISA\n");
        }
        //for Visa
        else if (n4 == 4 && n3 == 0 && n2 == 0 && n1 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

}