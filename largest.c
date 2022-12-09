//5.
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	max(&a,&b);
}
int max(int *p,int *q)
{
	if(*p>*q)
	printf("largest number is :%d",*p);
	else
	printf("largest number is:%d",*q);
	return 0;
}
