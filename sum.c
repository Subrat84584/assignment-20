//8.
#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	int *p;
	p=arr;
	int sum=0;
	for(i=0;i<=9;i++)
	{
		sum=sum+*(p+i);
	}
	printf("sum is: %d",sum);
	return 0;
}
