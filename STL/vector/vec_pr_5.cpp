//hacker Earth problem
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int>v;
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X ;
        for (int i = 0; i <N; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        int sz=unique(v.begin(),v.end())-v.begin();
        
        if(sz==X)
        cout<<"good"<<endl;
        else if(sz>X)
        cout<<"average"<<endl;
        else
        cout<<"bad" ;

        
    }
    return 0;
}
