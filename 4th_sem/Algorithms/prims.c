#include<stdio.h>
int ne=1,min_cost=0;
void main()
{
	int i,j,min,n,cost[20][20],visited[20],a,b,source;
	printf("Enter number of vertices:\n");
	scanf("%d",&n);
	printf("Enter the cost matrix:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&cost[i][j]);
	for(i=0;i<n;i++)
		visited[i]=0;
	visited[source]=1;
	while(ne<n)
	{
		min=999;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(cost[i][j]<min)
				{
					if(visited[i]==0)
						continue;
					else
					{
						min=cost[i][j];
						a=i;
						b=j;
					}
				}
			}
		}
		if(visited[a]==0||visited[b]==0)
		{
			printf("edge %d (%d--->%d) = %d\n",ne++,a+1,b+1,min);
			min_cost+=min;
			visited[b]=1;
		}
	cost[a][b]=cost[b][a]=999;
	}
	printf("Minimum cost = %d\n",min_cost);											
}	
