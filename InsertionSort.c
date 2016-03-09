#include<stdio.h>
void isort(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		j=i-1;
		key=arr[i];
		while(j>=0&&key<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
