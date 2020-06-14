//@uthor-evilgenius(Swanmoy)
#include<bits/stdc++.h>
#define ll long long int
#define mod(n) (n)%(ll)(1000000007)
#define inf LONG_MAX
using namespace std;
int main()
{
	/*#ifndef OL
	freopen("input.txt", "r", stdin);
	#endif*/
	ll t;
	cin>>t;
	for(ll u=0;u<t;u++)
    {
        string s;
        cin>>s;
        ll len=s.length();
        ll t1, t2;
        t1=1;
        t2=(len-2*t1)/2;
        ll cnt=0;
        ll lim=(len-2)/2;
        while(t1<=lim)
        {
            string a, b, c, d;
            ll lena, lenb, lenc, lend;
            lena=t1;
            lenb=2*t1;
            lenc=2*t1+t2;
            lend=2*t1+2*t2;
            if((lena>len)||(lenb>len)||(lenc>len)||(lend>len))
                break;
            a=s.substr(0, lena);
            b=s.substr(lena, t1);
            c=s.substr(lenb, t2);
            d=s.substr(lenc, t2);
            if((a==b)&&(c==d))
                cnt++;
            t1++;
            t2=(len-2*t1)/2;
        }
        cout<<cnt<<endl;
    }
}
