#include<stdio.h>
void main()
{
	int i,low,high;
	printf("enter the ranges");
	scanf("%d%d",&low,&high);
	while(low<high)
	{
	for(i=low;i<high;i++)
	{
		if(i%2==0)
		{
			printf("%d",low);
		}

		low++;
	}
}
}
