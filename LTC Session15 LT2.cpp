#include <stdio.h>

void capitalize_first_letters(char s[]) 
{
    
	int capitalize = 1;
    
	for (int i = 0; s[i] != '\0'; i++) 
	{
        if (s[i] == ' ') 
		{
            capitalize = 1;
        } 
			else if (capitalize && s[i] >= 'a' && s[i] <= 'z') 
				{
            		s[i] = s[i] - 'a' + 'A';
            		
					capitalize = 0;
        		} 
					else 
						{
            				capitalize = 0;
        				}
    }
}

int main() 
{
    char input_str[] = "hello world";
    
	capitalize_first_letters(input_str);
    
	printf("%s\n", input_str);
    
	return 0;
}

