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

string s ,temp;

getline(cin,s);

for(auto u:s)
{
  if(!isspace(u))
  {
    temp+=toupper(u) ;
  }
  else
  {
    cout<<temp<<endl ;
    temp.clear();
  }
}
  cout<<temp<<endl ;
  return 0;
}
