 #include<stdio.h>
int n,i,j,a[20][20],visited[20];
void dfs(int i)
{
	int j;
	printf("\n%d\n",i+1);
	visited[i]=1;	
	for(j=0;j<n;j++)
		if(a[i][j] && !visited[j])
			dfs(j);
	
}
void main()
{
	int v;
	printf("Enter number of vertices:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		visited[i]=0;
	}
	printf("Enter the adjacency matrix :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("BFS order :\n");		
	dfs(0);
	for(i=0;i<n;i++)
	{
		if(visited[i]==0)
			dfs(i);
	}
	
	
}										
			
