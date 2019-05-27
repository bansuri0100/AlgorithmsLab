#include<stdio.h>
int n,i,j,f=0,r=-1,a[20][20],q[20],visited[20];
void bfs(int v)
{
	for(i=0;i<n;i++)
		if(a[v][i] && !visited[i])
			q[++r]=i;
	if(f<=r)
	{
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}
void main()
{
	int v;
	printf("Enter number of vertices:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	printf("Enter the adjacency matrix :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter the source vertex:\n");
	scanf("%d",&v);
	bfs(v);
	for(i=0;i<n;i++)
	{
		if(visited[i]==0)
			bfs(i);
	}
	printf("queus:\n");
	for(i=0;i<n;i++)
		
			printf("%d\n",q[i]+1);
	for(i=0;i<n;i++)
	{
		if(visited[i])
			printf("%d\n",i+1);
		else
		{
			printf("BFS not possible as all nodes are not reachable\n");
			break;
		}
	}
	
}										
			
