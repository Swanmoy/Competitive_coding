#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll m, n;
    cin>>n>>m;
    multiset<ll> p;
    ll i, j;
    for(i=0;i<n;i++)
    {
        ll c;
        cin>>c;
        p.insert(c);
    }
    for(i=0;i<m;i++)
    {
        ll key;
        cin>>key;
        auto loc=p.lower_bound(key);
        if((loc==p.begin())&&(*loc>key))
            cout<<-1<<endl;
        else
        {
                if(*loc>key)
                    loc=prev(loc);
            cout<<*loc<<endl;
            p.erase(loc);
        }
    }
}
