#include<stdio.h>
#include<conio.h>
void printarray(int *,int);
void quicksort(int *,int, int);
int partition(int *,int,int);
int main()
{
	int a[]={2,3,1,12,13,4,16};
	int n=7;
	printarray(a,n);
	quicksort(a,0,n-1);
	printarray(a,n);
	getch();
}
void printarray(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
void quicksort(int a[],int low,int high)
{
	int partitionindex;
	if(low<high)
	{
		partitionindex=partition(a,low,high);
		quicksort(a,low,partitionindex-1);
		quicksort(a,partitionindex+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low+1;
	int j=high;
	int temp;
	do
	{
	while(a[i]<=pivot)
	{
		i++;
	}
	while(a[j]>pivot)
	{
		j--;
	}
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
    }while(i<j);
temp=a[low];
a[low]=a[j];
a[j]=temp;
return j;
}
