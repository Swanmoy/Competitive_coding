#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll bin(string n, int i)
{
    ll cnt=0;
    int c=0;
    for(int j=n.length()-1;j>=i;j--)
        cnt+=pow(2, c++)*(int(n[j])-48);
    return cnt;
}

int main()
{
    ll t;
    cin>>t;
    for(ll u=1;u<=t;u++)
    {
        ll x, y, l, r;
        cin>>x>>y>>l>>r;
        string a="";
        ll x1=x, y1=y;
        while((x1!=0)||(y1!=0))
        {
            int rem1=x1%2;
            int rem2=y1%2;
            if(rem1==0 && rem2==0)
                a="0"+a;
            else
                a="1"+a;
            x1/=2;
            y1/=2;
        }
        ll res;
        int i=0;
        while(true)
        {
            res=bin(a, i);
            if(res>r)
            {
                if(bin(a, i+1)<l)
                {
                    res=res&(l|(~r));
                    break;
                }
                else
                {
                    i++;
                }
            }
            else if(res<l)
            {
                if(bin("1"+a, i)>r)
                {
                    res=res&(l|(~r));
                }
                else
                {
                    a="1"+a;
                }
            }
            else
                break;
        }
        cout<<res<<endl;
    }
    return 0;
}
