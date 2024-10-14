#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first)return 1;
    else if(p1.first==p2.first)
    return (p1.second<p2.second);
    return 0;
}
int main() {

vector<pair<int,int>>v;

v={{4,143},{3,120},{4,500},{1,20}};

sort(v.begin(),v.end(),cmp);

for(auto u:v)
{
    cout<<u.first<<" "<<u.second<<endl;
}

    return 0;
}
