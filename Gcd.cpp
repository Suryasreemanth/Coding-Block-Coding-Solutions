#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b!=0)
	return gcd(b,a%b);
	else if(b==0)
	return a;
}

int main()
{
	int a,b;
	cin>>a>>b;
	int z=gcd(a,b);
	cout<<z;
}
