#include<stdio.h>
int v[100],wt[100];
int k[100][100];
int max(int a ,int b)
{
	if(a>b)
		return a;
	else 
		
	return b;
}
int knapsack(int i,int j)
{
	int val=0;
	if(k[i][j]<0)
	{
		if(j<wt[i])
			val= knapsack(i-1,j);
		else
			val=max(knapsack(i-1,j),knapsack(i-1,j-wt[i])+v[i]);
		k[i][j]=val;
	
	}
	
	
	return (k[i][j]); 
	
}
void main()
{
	int w,n1,w1,i,p,n,j;
	printf("Enter number of items:\n");
	scanf("%d",&n);
	printf("Enter value and weight:\n");
	for(i=1;i<=n;i++)
		scanf("%d%d",&v[i],&wt[i]);
	printf("Enter capacity :\n");
	scanf("%d",&w);
	for(i=0;i<=n;i++)
		for(j=0;j<=w;j++)
		{
			if(i==0||j==0)
				k[i][j]=0;
			else
				k[i][j]=-1;
		}
	printf("Max value is %d\n",knapsack(n,w));
	printf("The item sets are :\n");
	n1=n;
	w1=w;
	while(n>0)
	{
		if(k[n][w]!=k[n-1][w])
		{
			printf("%d\n",n);
			w=w-wt[n];
			n--;
		}
		else
			n--;
	}
	printf("Knapsack grid is as follows:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<w1;j++)
			printf("%d\t",k[i][j]);
		printf("\n");
	}
}	
						
						
										
					
