//array of vectors(to make the number row dynamic)
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void printVec (vector<int>&v)
{
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl ;
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    int N;
    cin>>N ;
    vector<int>v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n ;
        for (int j = 0; j <n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        

    }

    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    

    
    return 0;
}



