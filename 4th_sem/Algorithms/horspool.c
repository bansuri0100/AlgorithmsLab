#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 500
int t[MAX];
void shiftable(char p[])
{
	int m,i,j;
	m=strlen(p);
	for(i=0;i<MAX;i++)
		t[i]=m;
	for(j=0;j<m-1;j++)
		t[p[j]]=m-1-j;
}
int horspool(char p[],char src[])
{
	int i,k,j,m,n;
	m=strlen(p);
	n=strlen(src);
	i=m-1;
	while(i<n)
	{
		k=0;
		while((k<m)&&p[m-1-k]==src[i-k])
			k++;
		if(k==m)
			return i-m+1;
		else
			i+=t[src[i]];
	}
	return -1;
}
void main()
{
	char src[100],p[100];
	int pos;
	printf("Enter the sentence and pattern :\n");
	gets(src);
	gets(p);
	shiftable(p);
	pos=horspool(p,src);
	if(pos>=1)
		printf("Pattern matching at position %d\n",pos+1);
	else
		printf("Pattern not found in the sentence\n");
}			
	
	
								
