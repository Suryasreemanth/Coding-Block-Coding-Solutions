#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
		for(j=n-1;j>=0;j--)
	{
		for(i=0;i<n;i++)
		{
			cout<<a[i][j]<<" ";
		}
	}
	
}
