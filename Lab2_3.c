#include<stdio.h>
int main()
{
    int b;
    printf("Enter number : ");
    scanf("%d", &b);
    int t,f;
    for (t = 0; t < b; t++)
    {
        if(t == 0 || t == b-1)
            for(f = 0; f < b; f++)
            printf("*");
        else
            for (f = 0; f < b; f++)
            {
                if(f == 0 || f == b-1)
                {
                    printf("*");
                }  
                else
                {
                printf(" ");
                }   
            }
        printf("\n");
    }
}
