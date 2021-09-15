#include<stdio.h>

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    printf("Factoring Result : ");
    int a = 3;
    while (n % 2 == 0)
    {
        printf("2 x ");
        n /= 2;
    }
    while (n != 1)
    {
        while(n % a == 0)
        {
            if(n / a == 1)
            {
                printf("%d", a);
                return 0;
            }
            else
            {
                printf("%d x ", a);
                n /= a;
            }   
        }
        a += 2;
    }    
}
   
    