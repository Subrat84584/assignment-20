//count the vowel and consonant
#include<stdio.h>
int main()
{
	char str[100];
	char *p;
	int Vcount=0,Ccount=0;
	printf("enter the string");
	fgets(str,100,stdin);
	p=str;
	while(*p!='\0')
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
		Vcount++;
		else
		Ccount++;
		p++;
	}
	printf("vowel is :%d",Vcount);
	printf("consonant is:%d",Ccount);
	return 0;
}
