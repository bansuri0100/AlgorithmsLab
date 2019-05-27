#include<stdio.h>
int min(int a,int b)
{
	if(a<b)
		return a;
	return b;
}		
void floyd(int n,int a[10][10])
{
	int k,i,j;
	for(k=0;k<n;k++)
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				a[i][j]=min(a[i][j],(a[i][k]+a[k][j]));
	printf("Distance closure :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void main()
{
	int n,i,j,a[10][10];
	printf("Enter number of vertices :\n");
	scanf("%d",&n);
	printf("Enter the weighted matrix :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	floyd(n,a);
}				
				
