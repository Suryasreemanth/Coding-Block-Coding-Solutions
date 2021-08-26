#include<iostream>
using namespace std;

void num_prime(int *p,int a,int b)
{
	int sum_a=0,sum_b=0,i,j;
	
	//Eliminating  All even numbers are not prime except 2;
	for(i=3;i<=b;i=i+2)
	{
		p[i]=1;
	}
	// Making multiples of odd numbers as 0
	for(i=3;i<=b;i=i+2)
	{
		if(p[i]==1)
        {
		for(j=2*i;j<=b;j=j+i)
		{
			p[j]=0;
		}
	}
}
	p[2]=1;
	
	for(i=0;i<=b;i++)
	{
		sum_b=sum_b+p[i];
	}
	for(i=0;i<a;i++)
	{
		sum_a=sum_a+p[i];
	}
	
	cout<<sum_b-sum_a<<endl;
}

int main()
{
	int t,a,b;
	cin>>t;
	
	while(t--)
	{
		cin>>a>>b;
		int p[b+1]={0};
		num_prime(p,a,b);
	}
}
