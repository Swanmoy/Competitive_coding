#include<bits/stdc++.h>
#define ll unsigned int
#define inf INT_MAX
using namespace std;
int main()
{
    #ifndef OL
    freopen("input.txt", "r", stdin);
    #endif // OL
    ll n, W;
    cin>>n>>W;
    ll *pr=new ll[n];
    ll *pa=new ll[n];
    ll i, j;
    for(i=0;i<n;i++)
        cin>>pr[i];
    for(i=0;i<n;i++)
        cin>>pa[i];
    ll **shop=new ll*[n+1];
    for(i=0;i<=n;i++)
        shop[i]=new ll[W+1];
    for(i=0;i<=W;i++)
        shop[0][i]=0;
    for(i=0;i<=n;i++)
        shop[i][0]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=W;j++)
        {
            if(pr[i-1]>j)
            {
                shop[i][j]=shop[i-1][j];
            }
            else
            {
                shop[i][j]=max(shop[i-1][j], shop[i-1][j-pr[i-1]]+pa[i-1]);
            }
        }
    }
    cout<<shop[n][W]<<endl;
}
