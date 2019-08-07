#include<stdio.h>
int main(void)
{
int n;
scanf("%d",&n);
if(n%2==0)
{
printf("\nthe number is even");
}
else if(n%2==1)
{
printf("\nthe number is odd");
}
else
{
printf("invalid input");
}
return 0;
}

