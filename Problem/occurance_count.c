#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,count;
	char s[100];
	printf("enter the string\n");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	count=1;
	if(s[i]=="*")
	continue;
		for(j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
			{
				count=count+1;
				s[j]="*";	
			}
		}
	printf("%c-%d\n",s[i],count);
	}
	printf("%s",s);
}
