#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Check if arg satisfies requirements and get the key
    int k; //Key
    //If argc consists from more than 2 words
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //If argc is 2 words
    else
    {
        int x = 0;
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isdigit(argv[1][i]))
            {
                x += 0;
            }
            else
            {
                x++;
            }
        }
        if (x > 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            k = atoi(argv[1]);
        }
    }

    //Get plain text from the user
    string text = get_string("plaintext: ");

    //Encipher
    int index(int array, int difference, int key);
    printf("ciphertext: ");

    //Encipher letter by letter
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]) && isupper(text[i]))
        {
            int y = 65;
            printf("%c", index(text[i], y, k));
        }
        else if (isalpha(text[i]) && islower(text[i]))
        {
            int y = 97;
            printf("%c", index(text[i], y, k));
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}

//Prototype to encypher the letter
int index(int array, int difference, int key)
{
    int result = 0;
    array -= difference;
    result = (array + key) % 26;
    return result += difference;
}
