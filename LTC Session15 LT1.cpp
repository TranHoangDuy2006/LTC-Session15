#include <stdio.h>
#include <string.h>

int main() 
{
    
    char str[100]; 
    
    printf("\nNhap chuoi: "); 
    
    fgets(str, sizeof(str), stdin);
    
    int count_letters = 0, count_digits = 0, count_special = 0;
    
    for (int i = 0; i < strlen(str); i++) 
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
           
           count_letters++;
        
        else if (str[i] >= '0' && str[i] <= '9') 
             
             count_digits++;
                     
             else 
                  
                  count_special++;
    }
    
    printf("\nSo ky tu la chu cai: %d\n", count_letters);
    
    printf("\nSo ky tu la chu so: %d\n", count_digits);
    
    printf("\nSo ky tu dac biet: %d\n", count_special);
    
    return 0;
}
