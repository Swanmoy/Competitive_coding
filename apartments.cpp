#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    long long int m, n, k;
    cin>>n>>m>>k;
    ll p[n];
    ll app[m];
    for(ll i=0;i<n;i++)
        cin>>p[i];
    for(ll i=0;i<m;i++)
        cin>>app[i];
    sort(p, p+n);
    sort(app, app+m);
    ll i=0, j=0, cnt=0;
    while(j<m)
    {
        if((app[j]>=(p[i]-k))&&(app[j]<=(p[i]+k)))
           {
               cnt++;
               i++;
               j++;
           }
        else
            {
                if(p[i]<app[j])
                    i++;
                else
                    j++;
            }
    }
    cout<<cnt<<endl;
}
