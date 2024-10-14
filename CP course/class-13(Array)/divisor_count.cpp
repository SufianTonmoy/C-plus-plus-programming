#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {

  int n,sq;
  cin>>n;

  for(int i=1;i<=n;i++)
  {
    if(i*i>=n)
    {
      if(i*i==n)
        sq=i ;
        
      else
        sq=i-1 ;
        break ;
    }
  }
  //cout<<sq ;
  int cnt=0 ;

  for(int i=1;i<=sq;i++)
  {
    if(n%i==0)
    {
      if(n/i==i)
      cnt++ ;
      else
      cnt+=2 ;
    }
  }
cout<<cnt ;
  return 0;
}
