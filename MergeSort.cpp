#include<stdio.h>
#include<stdlib.h>
void merge(long long int a[],long long int l,long long int m,long long int r)
{
	long long int n1,n2,i,j,k;
	n1=m+1-l;
	n2=r-m;							//be careful with this
	long long int a1[n1], a2[n2];
	for(i=0;i<n1;i++)
		a1[i]=a[l+i];	
	for(i=0;i<n2;i++)
		a2[i]=a[m+1+i];					//BE CAREFUL WITH THIS AS WELL
	i=0,j=0,k=l;						//Rememnber them
	while(i<n1 && j<n2)
	{
		if(a1[i]<=a2[j])
		{
			a[k]=a1[i];
			i++;
		}
		else
		{
			a[k]=a2[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=a1[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=a2[j];
		j++;
		k++;
	}		
}
void mergesort(long long int a[],long long int l,long long int r)
{
	if(l<r){
		int m=l+(r-l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}
