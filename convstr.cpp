//@uthor-evilgenius(Swanmoy)
#include<bits/stdc++.h>
#define ll long long int
#define mod(n) (n)%(ll)(1000000007)
#define inf LONG_MAX
using namespace std;
int main()
{
   /* #ifndef OL
    freopen("input.txt", "r", stdin);
    #endif // OL*/
	ll t;
	cin>>t;
	for(ll u=0;u<t;u++)
    {
        ll l;
        cin>>l;
        string a, b;
        cin>>a;
        cin>>b;
        ll chk=0;
        ll ara[l], arb[l];
        ll i, j;
        ll chng[l];
        set<ll> r;
        set<ll> aw;
        map<ll, ll> aq;
        for(i=0;i<l;i++)
        {
            ara[i]=a[i]-96;
            arb[i]=b[i]-96;
        }
        for(i=0;i<l;i++)
        {
            aw.insert(ara[i]);
            aq[ara[i]]=i;
            if(ara[i]!=arb[i])
            {
                chng[i]=1;
            }
            else
            {
                chng[i]=0;
            }
        }
        for(i=0;i<l;i++)
        {
            if(chng[i]==1)
            {
                r.insert(arb[i]);
                if((ara[i]<arb[i])||(aw.find(arb[i])==aw.end()))
                   {
                       chk=1;
                       break;
                   }
            }
        }
        if(chk==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<r.size()<<endl;
            set<ll> k;
            ll o=r.size();
            while(o--)
            {
                ll max1=LONG_MIN;
                for(i=0;i<l;i++)
                {
                    if(chng[i]==1)
                    {
                        if(arb[i]>max1)
                        {
                            k.clear();
                            k.insert(i);
                            max1=arb[i];
                        }
                        else if(arb[i]==max1)
                        {
                            k.insert(i);
                        }
                    }
                }
                k.insert(aq[*k.begin()]);
                cout<<k.size()<<" ";
                for(auto x:k)
                {
                    cout<<x<<" ";
                    chng[x]=0;
                }
                cout<<endl;
            }
        }
    }
}
