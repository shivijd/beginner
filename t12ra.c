#include<stdio.h>
#include<math.h>
void main()
{
	int count=0,n,orgno,m,re=0;
	printf("enter a number");
	scanf("%d",&n);
	orgno=n;
	while((orgno!=0)&&(orgno<=100000))
	{
	 orgno=orgno/10;
	 count++;
    }
    orgno=n;
    
	while((orgno!=0)&&(orgno<=100000))
	{
		m=orgno%10;
		re=re+pow(m,count);
		orgno=orgno/10;	
	}
	if(re == n)
	{
		printf("number is armstrong %d",n);
	}
	else if(orgno>100000)
	{
		printf("not in range");
	}
	else
	{
		printf("not armstrong");
	}
}
