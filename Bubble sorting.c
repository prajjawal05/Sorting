#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10],i,j,t,n=5;
	for(i=0;i<5;i++)
	scanf("%d", &a[i]);
	printf("\n");
	for(i=0;i<n;i++,n--)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				
			}	
		}
	}
	for(i=0;i<5;i++)
	printf("%d\n", a[i]);	
	return 0;
}
