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

set<int>s;
int q;
cin>>q;

while(q--)
{
  int typ,x;
  cin>>typ>>x;

  if(typ==1)
  {
    s.insert(x);
  }
  else if(typ==2)
  {
    s.erase(x);

  }
  else{
    if(s.count(x)==1)
    cout<<"Yes\n";
    else
    cout<<"No\n";
  }




}  return 0;
}
