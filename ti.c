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
	printf("negative");
}
else if(n>0 && n<100000)
{
	printf("positive");
}
else
{
	printf("out of range");
}
}
