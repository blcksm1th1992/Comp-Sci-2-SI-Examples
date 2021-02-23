#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void encrypt (char password[25])
{
    int i;
    int encryptedPass; // = (int) (password);
    sscanf ( password, "%f", encryptedPass);

    /*for(i=0; i <=25; i++)
    {
         //change the values of the string      
        if (password[i] == 'a' || password[i] == 'b')        
        {
            password[i] = 'k';
        }
        else if(password[i] == '\0')
        {
            break;
        }
        else 
        {
            password[i] = 'h';
        }
    }*/

    //printf("%s \n", password);
    printf("%d \n", encryptedPass );
}

void encrypt (FILE* file)



int main()
{
    srand(time(0)); 
    char password[25];

    puts("Password to encrypt: ");
    scanf("%s", password);

    encrypt(password);

    return 0; 
}