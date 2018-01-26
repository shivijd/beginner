#include<stdio.h>
void main()
{
	int a[10],i,n,max;
	printf("enter the no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}
	printf("%d",max);
}
