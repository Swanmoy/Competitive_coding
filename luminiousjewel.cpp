//@uthor evilgenius(Swanmoy)
#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int u=1;u<=t;u++)
    {
        string n;
        cin>>n;
        int f=0;
        ll cost=0, sit=1;
        int l=n.length()-1;
        while(f<=l)
        {
            while(true)
            {
                if(n[f]==n[f+1])
                    f++;
                else
                    break;
            }
            while(true)
            {
                if(n[l]==n[l-1])
                    l--;
                else
                    break;
            }
            if(n[f]==n[l])
            {
                cost+=sit*(n[f]-96);
                sit++;
                f++;
                l--;
            }
            else
            {
                if(n[f]>n[l])
                {
                    cost+=sit*(n[f]-96);
                    sit++;
                    f++;
                }
                else
                {
                    cost+=sit*(n[l]-96);
                    sit++;
                    l--;
                }
            }
        }
        cout<<cost<<endl;
    }
}
