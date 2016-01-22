#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i;
	cin>>n>>m;
	int a[m],c[m+n],b[n];
	for(i=0;i<m;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	int k=0,l=0;
	for(i=0;i<m+n;i++)
	{
		if(i<m)
		{
			c[i]=a[k];
			k++;
		}
		else
		{
			c[i]=b[l];
				l++;
		}
	}
	sort(c,c+m+n);
	for(int j=0;j<m+n;j++)	//size_t
		cout<<c[j]<<endl;	
	return 0;
}
