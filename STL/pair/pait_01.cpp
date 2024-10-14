#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
    pair<int,int>p1,p2;

p1={3,5};
p2={3,4};
//prothome first value compare kore pore second value compare kore 
if(p1<p2)
{
    cout<<"YES\n";
}
else if(p1>p2)
{
    cout<<"NO\n";
}
else
cout<<"equal\n";


pair<int,int>p=min(p1,p2);
cout<<p.first<<" "<<p.second<<endl ;
cout<<"___________________"<<endl;
//pair of vector
vector<pair<int,int>>v1;
v1.push_back({6,5});
v1.push_back({2,3});
v1.push_back({4,5});
v1.push_back({6,1});
v1.push_back({1,9});
sort(v1.begin(),v1.end());
//first value er upor depend kore sort hobe then second value

for(auto u:v1)
{
    cout<<u.first<< " "<<u.second<<endl;
}



    return 0;
}
