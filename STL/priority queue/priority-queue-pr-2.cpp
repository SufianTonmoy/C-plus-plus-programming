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

int m,n ;
cin>>m,n ;

priority_queue<int> q;

for (int i = 0; i < m; i++)
{
  int x;
  cin>>x;
q.push(x);
}

long long ans=0 ;

for (int i = 0; i < n; i++)
{
  if(!q.empty())
  {
    int a =q.top();
    q.pop();
    ans+=a ;
    a-- ;
    if(a>0) q.push(a) ;
  }
}
cout<<ans<<endl ;





  return 0;
}
