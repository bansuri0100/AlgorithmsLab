#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 50000
int part(int a[],int l,int u)
{
	int i,j,p,temp;
	i=l;
	j=u+1;
	p=a[l];
	do
	{
		do
			i++;
		while(a[i]<p&&i<=u);
		do
			j--;
		while(a[j]>p);
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}while(i<j);
	
	a[l]=a[j];
	a[j]=p;
	return j;
}
void quicksort(int a[],int l,int u)
{
	int pos;
	if(l<u)
	{
		pos=part(a,l,u);
		quicksort(a,l,pos-1);
		quicksort(a,pos+1,u);
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
	quicksort(a,0,n-1);
	end=clock();
	printf("Elements after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	total=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Time taken = %lf seconds\n",total);
}			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
										
