#include<stdio.h>
int main()
{
    for (int a = 1; a <= 10000; a++)
    {
        int s =0;
        for (int b = 1; b < a;b++)
        {   
            if (a % b == 0)
            {
                s += b;
            } 
        }
        if (a == s)
        {
            printf("%d\n",a);
        }
    }
    return 0;
}