#include<stdio.h>
int main ()
{
char *p , str[50] ;
    p = str ;
    printf("type text : ");
    scanf("%s",str);
    
    while(*p != '\0')
    {
        if(*p >= 'a' && *p <= 'z')
        {
            printf("%c",'A' + (*p - 'a'));
        }
        else if(*p >= 'A' && *p <= 'Z')
        {
            printf("%c",'a' + (*p - 'A'));
        }

        p++ ; 
    }
    
    return 0 ;       
}