#include<stdio.h>
int main()
{
    int n,r,m;
    int s = 0;
    scanf("%d", &n);
    printf("\n%d ->",n);
    while(n % 10 != 0)
    {
        r = n % 10;
        s += r;
        n = n / 10;
    }
    printf(" %d",s);

    int c,rd = 0 ;
    while(s % 10 != 0)
    {
        c = s % 10;
        rd += c;
        s = s / 10;
    }
    printf("-> %d",rd);
    return 0;
}