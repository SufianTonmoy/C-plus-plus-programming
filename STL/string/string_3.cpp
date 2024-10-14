#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input_2.txt", "r", stdin);
    freopen("output_2.txt", "w", stdout);
#endif

    vector<string>v;
    v.push_back("tonmoy");
    v.push_back("abul");
    v.push_back("sakib");
    v.push_back("tonmoy");
    v.push_back("sakib");
    v.push_back("hasan");

    sort(v.begin(),v.end());

    int sz=unique(v.begin(),v.end())-v.begin();

    for (int i = 0; i < sz; i++)
    {
        cout<<v[i]<<endl ;

    }
    
    



    return 0;
}
