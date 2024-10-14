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


map<string,int>cnt;

for (int i = 0; i < n; i++)
{
  string s;
  cin>>s;
  cnt[s]++;
}
/* for(auto u:cnt)
{
  cout<<u.first<<" "<<u.second<<endl;
} */
int ans=0;
for(auto u:cnt)
{
  if(u.second==2)
  {
    ans++;
  }
}
cout<<ans<<endl;


  return 0;
}
