//@uthor-evilgenius(Swanmoy)
#include<bits/stdc++.h>
#define ll long long int
#define mod(n) (n)%(ll)(1000000007)
#define inf LONG_MAX
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll u=0;u<t;u++)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll i, j;
        for(i=0;i<n;i++)
            cin>>arr[i];
        ll cnt=0;
        ll chk=-1;
        ll cal=0;
        ll prev=-1;
        for(i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                cnt++;
                if(chk==-1)
                {
                    chk=0;
                    prev=i;
                }
                else
                {
                    cal+=min(i-prev, (n-i-1)+prev+1);
                    prev=i;
                }
            }
        }
        if(cnt==1)
            cout<<-1<<endl;
        else if(cnt==0)
            cout<<0<<endl;
        else
            cout<<cal<<endl;
    }
}
