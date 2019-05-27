#include<stdio.h>
#include<time.h>
int h[50000];
void heapify(int h[],int n)
{
	int i,j,heap,v,k;
	for(i=n/2;i>=1;i--)
	{
		k=i;heap=0,v=h[k];
		while(!heap && (2*k)<=n)
		{
			j=2*k;
			if(j<n)
			{
				if(h[j]<h[j+1])
					j=j+1;
			
			}
			if(v>=h[j])
				heap=1;
			else
			{
				h[k]=h[j];
				k=j;
			}
		}
		h[k]=v;
	}
}
void main()
{
	int n,i,j,temp,size;
	double total;
	printf("Enter number of elements :\n");
	scanf("%d",&n);
	clock_t start,end;
	printf("Enter elements:\n");
	for(i=1;i<=n;i++)
		//h[i]=rand();
		scanf("%d",&h[i]);
	start=clock();
	heapify(h,n);
	for(i=n;i>=1;i--)
	{
		temp=h[1];
		h[1]=h[i];
		h[i]=temp;
		size=i-1;
		heapify(h,size);
	}
	end=clock();
	total=(double)(end-start)/CLOCKS_PER_SEC;
	printf("After sorting :\n");
	for(i=1;i<=n;i++)
		printf("%d\n",h[i]);
	printf("Time taken = %lf seconds\n",total);
}										
	
