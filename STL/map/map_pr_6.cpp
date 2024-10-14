#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input_4.txt", "r", stdin);
  freopen("output_4.txt", "w", stdout);
#endif

int n;
cin>>n;

map<string,bool>vis;

while(n--)
{
  string s;
  cin>>s;

  if(vis[s]==1)
  cout<<"YES\n";
  else 
  cout<<"NO\n";

  vis[s]=1;
}

  return 0;
}
