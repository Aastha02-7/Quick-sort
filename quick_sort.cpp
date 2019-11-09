#include<conio.h>
#include<stdio.h>
#define max 100
int a[max],n,i,l,h;
int main()
{
	void input(void);
	input();
	return 0;
}
void input(void)
{
	void output(int[],int n);
	void quick_sort(int a[],int l,int h);
	printf("How many elements in the array");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	h=n-1;
	quick_sort(a,1,h);
	printf("Sorted Array: ");
	output(a,n);
}
void quick_sort(int a[],int l,int h)
{
	int temp,key,low=1,high;
	high=h;
	key=a[(low+high)/2];
	do
	{
		while(key>a[low])
		{
			low++;
		}
		while(key<a[high])
		{
			high--;
		}
		if(low<=high)
		{
			temp=a[low];
			a[low++]=a[high];
			a[high--]=temp;
		}
	}
		while(low<=high);
		if(l<high)
			quick_sort(a,l,high);
		if(low<h)
			quick_sort(a,low,h);
	}
	void output(int a[],int n)
	{
		for(i=0;i<=n-1;i++)
		{
			printf("%d\n",a[i]);
		}
	}

