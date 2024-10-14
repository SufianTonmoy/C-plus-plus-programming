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

map<int,int>cnt;
int n;
cin>>n ;

for(int i=1;i<=n;i++)
{
  int a ;
  cin>>a;
  cnt[a]++;
}
int ans=0;//ans=koyta element delete kora lagbe

for(auto u:cnt)
{
   if(u.second>=u.first)ans+=(u.second-u.first);
   else ans+=u.second;
}
cout<<ans<<endl;
  return 0;
}
