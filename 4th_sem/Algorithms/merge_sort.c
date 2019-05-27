#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 50000
void merge(int a[],int i1,int j1,int i2,int j2)
{
	int i,j,k,temp[50000];
	i=i1;
	j=i2;
	k=0;
	while(i<=j1&&j<=j2)
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	while(i<=j1)
		temp[k++]=a[i++];
	while(j<=j2)
		temp[k++]=a[j++];
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}
void mergesort(int a[],int i,int j)
{
	int mid;
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);
		mergesort(a,mid+1,j);
		merge(a,i,mid,mid+1,j);
	}
}
void main()
{
	clock_t start,end;
	int a[SIZE],i,n,j;
	double total;
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		//a[i]=rand();
	start=clock();
	mergesort(a,0,n-1);
	end=clock();
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	total=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Time taken = %lf seconds\n",total);
}			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
										
