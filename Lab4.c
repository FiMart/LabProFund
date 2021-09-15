#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z,s,area;
    printf("Enter x,y,z : ");
    scanf("%f %f %f",&x,&y,&z);
    if ((x + y > z) && (y + z > x) && (x + z > y))
    {
        s = (x+y+z)/2;
        area = sqrt(s * (s-x)*(s-y)*(s-z));
        printf("Area of Triangle is %.2f",area);
    }
    else
    {
        printf("0");
    }
    return 0;
}
   