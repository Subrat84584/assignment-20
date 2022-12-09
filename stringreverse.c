//10.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter your string");
	fgets(str,20,stdin);
	char *p;
	p=str;
	int l=strlen(p);
	int i;
	for(i=l-1;i>=0;i--)
	{
		printf("%c",*(p+i));
	}
	return 0;
}
