#include<iostream>
using namespace std;

int main()
{
	int t,n,sum=0;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		while(n!=0)
		{
			sum=sum+(n%2);
			n=n/2;
		}
		cout<<sum<<endl;
	}
}
