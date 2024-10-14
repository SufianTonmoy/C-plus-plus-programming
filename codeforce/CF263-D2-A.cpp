#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
#endif

int x;
for (int i = 1; i <=5; i++)
{
  for (int j = 1; j <=5; j++)
  {
    cin>>x;
    if(x==1)
    {
      cout<<abs(3-i)+abs(3-j);
    }
  }
}
}
