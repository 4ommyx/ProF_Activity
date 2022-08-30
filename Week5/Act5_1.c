#include <stdio.h>

int isPrime(int);

int main()
{

    int num;

    scanf("%d", &num);

    if (isPrime(num) == 1)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}

int isPrime(int num)
{
    int count = 0;
    for (int i = 2; i <= num; i += 1)
    {

        if (num % i == 0)
        {

            count++;
        }
    }
    if (count == 1)
    {
        return 1;
    }
    else if (count != 0)
    {

        return 0;
    }
    return 0;
}