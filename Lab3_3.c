#include<stdio.h>
int main()
{
    int s,i,r,j;
    scanf("%d",&s);
    i=1;
    j=s-1;
    do
	{
    	for(r=1;r<=i;r++)
    	{
    		printf(" * ");
		}	
    	for(r=1;r<2*(s-i);r++)
    	{
    		printf("   ");
		}
		for(r=1;r<=i;r++)
    	{
    		printf(" * ");
		}
		i++;
		printf("\n");	
    }while(i<s);
    for(r=1;r<=(2*s)-1;r++)
    {
    	printf(" * ");
	}
	printf("\n");
    do
	{
    	for(r=1;r<=j;r++)
    	{
    		printf(" * ");
		}	
    	for(r=1;r<2*(s-j);r++)
    	{
    		printf("   ");
		}
		for(r=1;r<=j;r++)
    	{
    		printf(" * ");
		}
		j--;
		printf("\n");
		
	}while(j>0);
}