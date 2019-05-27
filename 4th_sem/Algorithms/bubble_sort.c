#include<stdio.h>
#include<time.h>
#define SIZE 50000
void main()
{
	int a[SIZE],i,j,n,temp;
	double total;
	clock_t start,end;
	printf("Enter n :\n");
	scanf("%d",&n);
	//printf("Enter elements :\n");
	for(i=0;i<n;i++)
		a[i]=rand();
		//scanf("%d",&a[i]);
	start=clock();
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	end=clock();	
	/*printf("Elements after sorting are :\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);*/
	total=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Time taken = %lf seconds\n",total);
}							
			
