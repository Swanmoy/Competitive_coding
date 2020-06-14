#include<bits/stdc++.h>
#define ll unsigned int
#define mod(n) n%(ll)(1000000007)
using namespace std;
int main()
{
    ll n, x;
    cin>>x>>n;
    ll coins[x];
    ll i, j;
    for(i=0;i<x;i++)
        cin>>coins[i];
    sort(coins, coins+x);
    ll **sol=new ll*[x+1];
    for(i=0;i<=x;i++)
        sol[i]=new ll[n+1];
    for(i=0;i<=n;i++)
        sol[0][i]=0;
    for(i=0;i<=x;i++)
        sol[i][0]=1;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<coins[i-1])
                sol[i][j]=mod(sol[i-1][j]);
            else
                sol[i][j]=mod(mod(sol[i-1][j])+mod(sol[i][j-coins[i-1]]));
        }
    }
    cout<<mod(sol[x][n])<<endl;
}
