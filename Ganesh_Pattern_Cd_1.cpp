#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int i,j,s,k;
	
	k=(n+1)/2;
	
	//part -1 
	cout<<"*";
	for(i=0;i<k-2;i++)
	cout<<" ";
	for(i=0;i<k;i++)
	cout<<"*";
	
	cout<<"\n";
	
	//part-2
	
	for(i=0;i<k-2;i++)
	{
		cout<<"*";
		for(j=0;j<k-2;j++)
		cout<<" ";
		cout<<"*"<<endl;
	}
	
	//part-3
	
	for(i=0;i<n;i++)
	cout<<"*";
	
	cout<<endl;
	// part -4
	for(i=0;i<k-2;i++)
	{
		for(j=0;j<k-1;j++)
		cout<<" ";
		cout<<"*";
		for(j=0;j<k-2;j++)
		cout<<" ";
		cout<<"*"<<endl;
	}
	
	// part-5
	
	for(i=0;i<k;i++)
	cout<<"*";
	for(i=0;i<k-2;i++)
	cout<<" ";
	cout<<"*";
}
