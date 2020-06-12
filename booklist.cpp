#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main()
{
    ll m, n;
    cin>>m;
    vector<int> books;
    for(int i=0;i<m;i++)
    {
        ll c;
        cin>>c;
        books.push_back(c);
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll f;
        cin>>f;
        cout<<books[f-1]<<endl;
        books.erase(books.begin()+f-1);
    }
    return 0;
}
