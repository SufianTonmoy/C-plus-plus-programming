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
  
  int n; 
  cin>>n ;
  
  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin>>v[i] ;

  }

  int key ;
  cin>>key ;
  int l=0 ,h=n-1 ;
  int mid ;

  while((h-l)>1)
  {
    mid=(l+h)/2 ;
    if(v[mid]<key)
    {
        l=mid+1 ;
    }
    else
    {
      h=mid ;
    }
  }
  cout<<l<<" "<<h<<endl ;
  
  if(v[l]==key)
  {
    cout<<l<<endl ;
  }
  else if(v[h]==key)
  {
    cout<<h<<endl ;
  }
  else
  cout<<"Not found" ;

  return 0;
  
}
