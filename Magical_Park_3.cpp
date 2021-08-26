#include<iostream>
using namespace std;

int main()
{
 short int n,m,k,s,i,j;
 bool temp=true;
 cin>>n>>m>>k>>s;
 char a[n][m],e;
 for(i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
 		cin>>a[i][j];
	 }
 }	
 
  for(i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
 		if( s<k)
 		{
 			temp="false";
			 break;
		 }
 		e=a[i][j];
 	
 		if(e=='.')
 		{
 			s=s-2;
		 }
		else if(e=='*')
		 {
		 	s=s+5;
		 }
		else if(e=='#')
		 {
		 	break;
		 }
		if(j!=n-1)
 		s=s-1;
	 }
  }
	 if(temp)
	 {
	  cout<<"Yes"<<endl;
	  cout<<s<<endl;
	 }
	 else
	 cout<<"No";
 }	
