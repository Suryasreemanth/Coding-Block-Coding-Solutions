#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[i]>a[i+1])
			swap(a[i],a[i+1]);
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}
