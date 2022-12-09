//write a function to swap the value using fucntion.
#include<stdio.h>
int swap(int *,int *);
int main()
{
	int n,m;
	printf("enter the value of n and m");
	scanf("%d %d",&n,&m);
	printf("before swapping:%d %d",n,m);
	swap(&n,&m);
	printf("\nafter swaping :%d %d",n,m);
	return 0;
}
int swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
