#include<bits/stdc++.h>
#define ll unsigned long long int
#define rep(a, b) for(int i=a;i<b;i++)
using namespace std;
int sum(int *arr, int i, int p)
{
    int sum1=0;
    for(int j=i;j<i+p;j++)
        sum1+=arr[j];
    return sum1;
}
int main()
{
    int t;
    cin>>t;
    for(int u=1;u<=t;u++)
    {
        ll n, p;
        vector<int> res;
        cin>>n>>p;
        int *arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int *narr=new int[n];
        narr[0]=arr[1]-arr[0];
        rep(1, n)
        {
            narr[i]=arr[i]-arr[i-1];
        }
        for(int i=0;i<n-p+1;i++)
        {
            res.push_back(sum(narr, i, p));
        }
        int y=INT_MAX;
        int loc;
        for(int i=0;i<res.size();i++)
        {
            if(res[i]<y)
            {
                y=res[i];
                loc=i;
            }
        }
        y=-1;
        for(int i=loc;i<loc+p;i++)
            {
                if(arr[i]>y)
                {
                    y=arr[i];
                }
            }
        ll cnt=0;
        for(int i=loc;i<loc+p;i++)
        {
            cnt+=y-arr[i];
        }
        cout<<"Case #"<<u<<": "<<cnt<<endl;
    }
    return 0;
}
