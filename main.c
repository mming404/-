//判断语句的最长单词并输出
#include<stdio.h>
#include<string.h>
int main()
{
	int alphabetic(char);
	int longest(char []);
	int i;
	char line[100];
	printf("please enter a string:\n");
	gets(line);
	printf("the longest word is:");
	for(i=longest(line);alphabetic(line[i]);i++)
		printf("%c",line[i]);
	printf("\n");
	return 0;

}

int alphabetic(char c)
{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		return(1);
	else
		return(0);
}



int longest(char string[])
{
	int len=0;
	int i;
	int length=0;
	int flag=1,place=0,point;
	for(i=0;i<=strlen(string);i++)
		if(alphabetic(string[i]))
			if(flag)
			{
				point=i;
				flag=0;
			}
			else
			{
				len++;
			}
		else
		{
			flag=1;
			if(len>=length)
			{
				length=len;
				place=point;
				len=0;
			}
		}
	return(place);
}