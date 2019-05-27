#include<stdio.h>
#include<time.h>
#define SIZE 50000
void main()
{
	int a[SIZE],pos,i,j,n,temp;
	double total;
	clock_t start,end;
	printf("Enter n :\n");
	scanf("%d",&n);
	//printf("Enter elements :\n");
	for(i=0;i<n;i++)
		a[i]=rand();
		//scanf("%d",&a[i]);
	start=clock();
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
			{
				pos=j;
			}
		}
		temp=a[pos];
		a[pos]=a[i];
		a[i]=temp;
	}	
	end=clock();	
	/*printf("Elements after sorting are :\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);*/
	total=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Time taken = %lf seconds\n",total);
}							
			
