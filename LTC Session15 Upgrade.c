#include <stdio.h>

#include <string.h>

int main ()
{
    char str[100];

    printf("\nNhap chuoi ki tu ban can kiem tra: ");

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int fre[256] = {0};

    for(int i = 0; i < strlen(str); i++)
        {
            fre[(int)str[i]]++;
        }

    for(int i = 0; i < 256; i++)
        {
            if(fre[i] > 0)
                {
                    printf("\n'%c' xuat hien %d lan", i, fre[i]);
                }
        }

    return 0;
}