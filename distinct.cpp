#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll cnt=1;
    for(ll j=1;j<n;j++)
    {
        if(arr[j]!=arr[j-1])
            cnt++;
    }
    cout<<cnt<<endl;
}
