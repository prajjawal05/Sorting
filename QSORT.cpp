#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h)
{
	int i=l-1,j,x=a[h];
	for(j=l;j<h;j++)
	{
		if(a[j]<x)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[h]);
	return(i+1);
}
void qksort(int a[],int l,int h)
{
	int j;
	if(l<=h)
	{
		j=partition(a,l,h);
		qksort(a,l,j-1);
		qksort(a,j+1,h);
	}
}
int main()
{
	int n,i;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qksort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;		
}
