//9.
#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("enter the 10 number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	int *p;
	p=a;
	for(i=9;i>=0;i--)
	{
		printf("%d",*(p+i));
	}
	return 0;
}
