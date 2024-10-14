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


 int a,b,cnt=0 ;
 cin>>a>>b ;

while(1)
{
  a=a*3;
  b=b*2;
  cnt++ ;
if(a>b)
{
  break;
}
}
cout<<cnt;

  return 0;
}
