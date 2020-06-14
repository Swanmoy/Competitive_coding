#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
    ll n, x;
    cin>>n>>x;
    ll cnt=0;
    ll cnt1=0;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr, arr+n);
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if((arr[i]+arr[j])>x)
        {
            cnt1++;
            j--;
        }
        else
        {
            cnt1++;
            i++;
            j--;
        }
    }
    if(i==j)
        cnt1++;
    cout<<cnt1<<endl;
}
