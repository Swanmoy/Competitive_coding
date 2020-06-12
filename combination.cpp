#include<bits/stdc++.h>
using namespace std;
set<vector<int>> comb;
vector<int> combination;
void search(int n, int *arr, int r, int i=0);
void search(int n, int *arr, int r, int i)
{
    if(combination.size()==r)
        comb.insert(combination);
    else
    {
        if(i<n)
        {
            search(n, arr, r, i+1);
            combination.push_back(arr[i]);
            search(n, arr, r, i+1);
            combination.pop_back();
        }
    }
}
void disp(vector<int> a)
{
    for(int x:a)
        cout<<x<<" ";
    cout<<"\n";
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int r;
    cin>>r;
    search(n, arr, r);
    for(auto x:comb)
        disp(x);
    cout<<comb.size();
    return 0;
}
