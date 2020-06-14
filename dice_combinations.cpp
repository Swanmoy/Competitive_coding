#include<bits/stdc++.h>
#define ll long long int
#define mod(n) n%(ll)(1000000007)
using namespace std;
ll cal(ll n, ll *res)
{
    if(n==0)
        return 1;
    else if(n<0)
        return 0;
    else if(res[n]!=-1)
    {
        return res[n];
    }
    else
    {
        ll sum=0;
        for(ll i=1;i<=6;i++)
            sum+=mod(cal(n-i, res));
        res[n]=sum;
        return sum;
    }
}
int main()
{
    ll n;
    cin>>n;
    ll *res=new ll[n+1];
    for(ll i=0;i<=n;i++)
        res[i]=-1;
    ll sum=cal(n, res)%(ll)(1000000007);
    cout<<sum<<endl;
}
