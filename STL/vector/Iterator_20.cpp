//how to write iterators code in short
//(range based loops)
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

vector<int>v={1,2,3,4,5};

    for(auto &value:v)
    {   value++ ;
        
        //cout<<value <<" ";
    }
    //cout<<endl ;
    for(auto value:v)
    {   
        cout<<value <<" ";
    }
    cout<<endl ;

    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};

    for(pair<int,int> &val:v_p)
    //for(auto &val:v_p)

    {
        cout<<val.first<<" "<<val.second<<endl ;
    }
    return 0;
}
