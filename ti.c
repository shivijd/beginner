#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n==0)
{
  printf("zero");
}
if(n<0)
{
	printf("number is negative");
}
else if(n>0 && n<100000)
{
	printf("number is positive");
}
}
