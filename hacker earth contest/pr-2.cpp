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

int t ;
cin>> t;

while(t--)
{
  int n; 
  cin>> n;
  ll product =1 ;
  int x ;

  for (int i = 0; i < n; i++)
  {
    cin>>x ;
    product*=x;
  }

if((product%10==2)||(product%10==3)||(product%10==5))
{
  cout<<"YES\n";
}
else cout<<"NO\n" ;

}

  return 0;
}
