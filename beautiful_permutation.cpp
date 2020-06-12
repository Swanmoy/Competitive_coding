#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll c=0;
    ll arr[n];
    ll i, j;
    for(i=2;i<=n;i+=2)
    {
       arr[c++]=i;
    }
    for(i=1;i<=n;i+=2)
    {
        arr[c++]=i;
    }
    ll chk=0;
    for(i=0;i<n-1;i++)
    {
        if(abs(arr[i]-arr[i+1])==1)
        {
            chk=1;
            break;
        }
    }
    if(chk==0)
    {
        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
    else
    {
        cout<<"NO SOLUTION"<<endl;
    }
}
