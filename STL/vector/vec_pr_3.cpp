//codeforce problem (381A)

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

    int n;
    cin>>n ;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int d=0,s=0;
    int first=1;

    while(1)
    {
        if(v.empty())break;

        if(first==1)
        {
            if(v[0]>v.back())
            {
                s+=v[0];
                v.erase(v.begin());
            }
            else{
                s+=v.back();
                v.pop_back();
            }
            first=2;
        }
        else{
            if(v[0]>v.back())
            {
                d+=v[0];
                v.erase(v.begin());
            }
            else{
                d+=v.back();
                v.pop_back();
            }
            first=1;

        }

    }
    cout<<s<<" "<<d ;
    

    return 0;
}

