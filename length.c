//6.
#include<stdio.h>
#include<string.h>
int length(char *);
int main()
{
	char str[40];
	printf("enter string :");
	gets(str);
    int tem=length(str);
    printf("length of string:%d",tem);
	return 0;
}
int length(char *ptr) //p=&str[0];
{
	int c=0;
	while(*ptr != '\0')
	{
		c++;
		ptr++;
	}
	return c;
}
