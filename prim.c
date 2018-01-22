#include<stdio.h>
void main()
{
	int i,n,flag=0,ans;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<n/2;++i)
	{
		ans=n%i;
		if(ans==0)
		{
			flag=1;
			break;
			
		}
	}
	 if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
}
