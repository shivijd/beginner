#include<stdio.h>
void main()
{
	int sum,a,d,n,i;
	printf("enter the first element");
	scanf("%d",&a);
	printf("enter the number of terms");
	scanf("%d",&n);
	printf("enter the common differene");
	scanf("%d",&d);
	if(n>=1&&d<=100000)
	sum=a+(n-1)*d;
		printf("%d",sum);
		
}
