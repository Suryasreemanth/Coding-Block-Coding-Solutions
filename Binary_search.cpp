#include<bits/stdc++.h>
using namespace std;
// Time Complexity is 0(log n)
int binary_search(int a[],int n,int key)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        return mid;
        
        if(key>a[mid])
        {
            s=mid+1;
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
     cout<<"Enter no of elements"<<endl;
    cin>>n;
    int a[n],i;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter value of Key"<<endl;
    int key;
    cin>>key;
    cout<<binary_search(a,n,key)<<endl;
}
