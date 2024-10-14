#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


const int mx=1e8+123 ;
bool vis[mx] ;

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int n ;
cin>>n ;

for (int i = 1; i <= n; i++)
{
  vis[i*i]=1 ;
  
}
int ans =0 ;
for (int a = 1; a <= n; a++)
{
  for(int b=a; b <=n ; b++)
  {
    int d=(a*a)+(b*b) ;
    if(d>=mx)break ;
    if(vis[d])
    {
      ans++ ;
    }
  }
}

cout<<ans ;




  return 0;
}
