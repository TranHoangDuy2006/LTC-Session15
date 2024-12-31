#include <stdio.h>

#include <string.h>

void countCharacters(char s[]) 
{
    char characters[256] = {0};
    
	int counts[256] = {0};      
    
	int uniqueCount = 0;       

    for (int i = 0; s[i] != '\0'; i++) 
	{
        int found = 0;

        for (int j = 0; j < uniqueCount; j++) 
		{
            if (characters[j] == s[i]) 
			{
                
				counts[j]++;
                
				found = 1;
                
				break;
            }
        }

        if (!found) 
		{
            
			characters[uniqueCount] = s[i];
            
			counts[uniqueCount] = 1;
            
			uniqueCount++;
        }
    }

    printf("\nSo lan xuat hien cua cac ki tu:\n\n");
    
	for (int i = 0; i < uniqueCount; i++) 
	{
        printf("%c: %d\n\n", characters[i], counts[i]);
    }
}

int main() 
{
    char inputString[100];

    printf("\nNhap chuoi ban muon kiem tra: ");
    
	fgets(inputString, sizeof(inputString), stdin);
	
   	inputString[strcspn(inputString, "\n")] = '\0';

    countCharacters(inputString);

    return 0;
}

