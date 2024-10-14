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


  string s;
  char c;
  cin>>c;
  getline(cin,s);
  s=c+s;

  string temp;

  vector<string>v;

  for(auto u:s)
  {
    if(isspace(u))
    {
      v.push_back(temp);
      temp.clear();
    }
    else
      temp+=u ;
  }
  v.push_back(temp);

  map<string,int>cnt;

  int maxFrq=0;

  for(auto u:v)
  {
    cnt[u]++;
    maxFrq=max (maxFrq,cnt[u]);
  }
  string ans ;
  for(auto u:v)
  {
    if(cnt[u]==maxFrq)
    {
      ans =u;
      break;
    }
  }
  cout<<ans<<" "<<maxFrq<<endl ;

  return 0;
}
