#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int sum=0;
	while(n>0)
	{
		sum=sum+(n/5);
		n=n/5;
	}
	cout<<sum;
}
