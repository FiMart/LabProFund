#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter first number : ");
    scanf("%d", &m);
    printf("Enter sceond number : ");
    scanf("%d", &n);
    int max = m, min = n;
    if (m < n)
    {
        max = n;
        min = m;
    }
    while (1)
    {
        int bac = max % min;
        max = min;
        min = bac;
        if(min == 0)
        {
            printf("Greatest common divisor = ");
            printf("%d", max);
            return 0;
        }
    }
}
