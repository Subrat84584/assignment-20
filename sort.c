//3.
#include<stdio.h>
void sort(int *,int);
int main()
{
	int i,str[5];
	
	sort(str,5);
	for(i=0;i<5;i++)
	printf("%d",str[i]);
	return 0;
}
void sort(int *ptr,int size)
{
	int i,j;
	printf("enter the 5 number");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		   if(*(ptr+i)>*(ptr+j))
		   {
		   	int a=*(ptr+i);
		   	*(ptr+i)=*(ptr+j);
		   	*(ptr+j)=a;
		   }
	    }
		
	}
}


