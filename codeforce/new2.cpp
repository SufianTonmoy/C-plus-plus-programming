#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {

int t ;
cin>>t ;

while(t--)
{
  int n ,m=0,b=0;
  cin>>n ;

  int arr[n] ;

  for (int i = 0; i < n; i++)
  {
    cin>>arr[i] ;

  }
  for (int i = 0; i < n; i++)
  {
    if((arr[i]%2)==0)
    {
      m=m+arr[i] ;
    }
    else
      b=b+arr[i] ;

  }
  if(m>b)
    cout<<"YES\n" ;
  else
    cout<<"NO\n" ;
}

  return 0;
}

