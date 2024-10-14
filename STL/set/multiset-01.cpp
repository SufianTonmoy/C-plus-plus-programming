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

multiset<int>s ;

s.insert(1);
s.insert(2);
s.insert(1);
s.insert(3);
s.insert(1);
s.insert(4);
s.insert(1);
s.insert(4);

cout<<s.size()<<endl ;

for(auto u: s)
{
  cout<<u<<" " ;

}
cout<<endl ;
cout<<s.count(1)<<endl ;
//DELETE ALL 1.
s.erase(1);
for(auto u: s)
{
  cout<<u<<" " ;
}
cout<<endl ;
//DELETE ONLY ONE 1

auto it=s.find(1);
s.erase(it) ;
for(auto u: s)
{
  cout<<u<<" " ;
}
cout<<endl ;

  return 0;
}
