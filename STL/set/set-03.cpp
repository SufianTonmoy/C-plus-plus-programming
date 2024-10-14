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
set<pair<int,int>>s ;

s.insert({2,3});
s.insert({4,1});
s.insert({4,1});
s.insert({2,1});
s.insert({4,3});
s.insert({5,1});
s.insert({5,1});
s.insert({5,4});

cout<<s.size()<<endl ;
for(auto u:s)
{
  cout<<u.first<<" "<<u.second<<endl;
}

set<int,greater<int>>s1 ;

s1.insert(2);
s1.insert(2);
s1.insert(3);
s1.insert(4);

for(auto u:s1)
{
  cout<<u<<" ";
}
cout<<endl ;

  return 0;
}
