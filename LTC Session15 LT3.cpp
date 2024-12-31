#include <stdio.h>

#include <string.h>

#include <ctype.h>

void deleteChar(char s[], char value) 
{
    int i, j;
    
	for (i = 0; s[i] != '\0'; i++) 
	{
        if (s[i] == value) 
		{
            for (j = i; s[j] != '\0'; j++) 
			{
                s[j] = s[j + 1];
            }
            
			i--; 
        }
    }
}

int main () 
{
    char inputString[] = "Hello World";
    
	char value;

    printf("\nChuoi ban dau: %s\n", inputString);
    
	printf("\nNhap ki tu can xoa: ");
    
	scanf("%c", &value);

    deleteChar(inputString, value);

    printf("\nChuoi sau khi xoa: %s\n", inputString);

    return 0;
}

