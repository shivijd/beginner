#include<stdio.h>
void main()
{
	int a[10],i,n,j,temp;
	printf("enter the elements in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	
	}
	printf("sorted elements are:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\n \t",a[i]);	
}
}
