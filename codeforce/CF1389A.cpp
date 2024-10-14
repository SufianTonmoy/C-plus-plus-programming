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

int  t;
cin>>t;

while(t--)
{
  int  l,r;
  cin>>l>>r;

int x=l,y=2*l ;

if(y<=r)
cout<<x<<" "<<y<<endl ;
else{
  cout<<"-1"<<" "<<"-1"<<endl ;
}
}
  return 0;
}
