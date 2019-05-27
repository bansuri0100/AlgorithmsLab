#include<stdio.h>
int n,i,j,f=0,r=-1,a[20][20],q[20],visited[20],vo[20],count=0;
void bfs(int src)
{
	
	int u,v;
	count++;
	visited[src]=count;
	q[++r]=src;
	while(f<=r)
	{
		u=q[f++];
		for(v=1;v<=n;v++)
		{
			if(a[u][v]&&!visited[v])
			{
				q[++r]=v;
				count++;
				visited[v]=count;
			}
		}
	}			
	
}
void main()
{
	int src;
	printf("Enter number of vertices:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
	}
	printf("Enter the adjacency matrix :\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter the source vertex:\n");
	scanf("%d",&src);
	bfs(src);
	for(i=1;i<=n;i++)
	{
		if(visited[i]==0)
			bfs(i);
	}
	for(i=1;i<=n;i++)
		vo[visited[i]]=i;
		
	for(i=1;i<=n;i++)
		printf("%d\n",vo[i]);
		
}
