//4.write a program in c to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
	printf("see the demonstrate of pointer");
    int a=29;
    printf("The value of a=%d\n",a);
    printf("The address of a:%d\n",&a);
	int *p;
	p=&a;
	printf("The pointer p assign the adress if a is:%d\n",p);
	printf("The adress of p is:%d\n",&p);
	int **q;
	q=&p;	
	printf("The pointer q assign adress of pointer p:%d\n",q);
	printf("The adresss of q pointer is %d",&q);
	return 0;
}
