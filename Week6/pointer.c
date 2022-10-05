#include <stdio.h>

int main()
{
    //pt1();
    //pt2();
    pt3();
    return 0;
}
void pt1()
{
    int i, j, k;
    printf("%X %X %X\n", &i, &j, &k);
}

void pt2()
{
    int x = 10, y = 20, z = 30, *p1, *p2;
    p1 = &x;
    p2 = &y;
    printf("%d %d %d %d %d \n" ,x, y, z, *p1, *p2);
    x=80;
    printf("%d %d %d %d %d \n" ,x, y, z, *p1, *p2);
    p1=&z;
    p2=p1;
    printf("%d %d %d %d %d \n" ,x, y, z, *p1, *p2);
    *p1=100;
     printf("%d %d %d %d %d \n" ,x, y, z, *p1, *p2);


}
void pt3()
{
    char *p , str[50]; 
    p = str ;
    scanf("%s",str);
    //printf("%s\n",str);
    //printf("%s\n",p);
    // move p to the end 
    // while(*p != '\0')
    // {
    //     p++;
    // }
    // p--;
    // printf("%c\n",*p);
    //move p to str
    while(p >= str)
    {
        printf("%c",*p);
        p--;

    }
    



       
}