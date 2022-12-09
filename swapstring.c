//swap the string char array of calling 
#include<stdio.h>
int swap(char **,char **);
int main()
{
	char *str="subrat";
	char *str1="acharya";
	printf("before swapping:\n");
	printf("name1:%s\n",str);
	printf("name2:%s\n",str1);
	swap(&str,&str1);
	printf("after swapping\n:");
	printf("name1:%s\n",str);
	printf("name2:%s\n",str1);
	return 0;
}
int swap(char **str,char **str1)
{
	int null;
	char *strt=null;
	   strt=*str;
	   *str=*str1;
	   *str1=strt;
	
}
