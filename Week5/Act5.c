#include <stdio.h>
#include <string.h>

int main()
{

    char c[100];
    scanf("%s", &c);
    for (int i = 0; i <= strlen(c); i += 1)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
        {

            printf("%c", c[i]);
        }
    }
}