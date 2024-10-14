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

set<string>s;

s.insert("shahriar");
s.insert("proma");
s.insert("momo");
s.insert("sobuj");
s.insert("nobel");
s.insert("prety");
s.insert("shahriar");
s.insert("proma");
s.insert("momo");
s.insert("sobuj");
s.insert("nobel");
s.insert("prety");

cout<<s.size()<<endl ;

for(auto u: s)
{
  cout<<u<<endl ;
}


  return 0;
}
