#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string k; //The key from argv[1] in UPPERLETTERS
    int n = 0; //Numbers in the key
    int l = 0; //letters in the key
    int x = 0; //sum of 26 letters from A-Z
    
    //make sure command-line consists of 2 argv
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else //if argv == 2;
    {
        for (int i = 0, y = strlen(argv[1]); i < y; i++)
        {
            if (isalpha(argv[1][i]))
            {
                argv[1][i] = toupper(argv[1][i]);
                x += (int)argv[1][i] - 65;
                l++;
            }
            else
            {
                l++;
                n++;
            }
        }
    }
    if (l != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }
    else
    {
        if (n > 0)
        {
            printf("Key must contain alphabetical characters\n");
            return 1;
        }
        else if (n == 0 && x != 325)
        {
            printf("Key must contain each letter once\n");
            return 1;
        }
        else
        {
            k = argv[1];
        }
        
    }
    
    //Prompt text from the user
    string text = get_string("plaintext: ");
    
    //Print the word ciphertext
    printf("ciphertext: ");
    
    //Encipher depending of letter
    for (int i = 0, z = strlen(text); i < z; i++)
    {
        if (islower(text[i]))
        {
            int y = (int)text[i] - 97;
            int c = tolower(k[y]);
            printf("%c", c);
        }
        else if (isupper(text[i]))
        {
            int y = (int)text[i] - 65;
            printf("%c", k[y]);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}