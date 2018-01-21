#include<stdio.h>
void main()
{
	int i, n,orgno,rem,rev=0;
	printf("enter the number");
	scanf("%d",&n);
	orgno=n;
	while(orgno!=0)
	{
	    rem= orgno%10;
        rev= rev*10 + rem;
        orgno =orgno/10;
}
if(rev==n)
{
printf("yes");
}
else
{
	printf("no");
}
}
