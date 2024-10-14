#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
const int mx=1e5+123 ;
int arr1[mx] ;
int arr2[1000123];
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
int t ;
cin>>t ;
for(int tc=1;tc<=t;tc++)
{
  for (int i = 1; i <=1000000; i++)
  {
    arr2[i]=0 ;
  }
  
    int n ; 
    cin>>n ;

for (int i = 1; i <= n; i++)
{
  cin>>arr1[i];
}

for (int i = 1; i <= n; i++)
{
  arr2[arr1[i]]++ ;
}
int q ;
cin>>q ;
cout<<"Case "<<tc<<":"<<endl ;
while(q--)
{
  int p ;
  cin>>p ;
  cout<<arr2[p]<< endl ;

}
}
  return 0;
}
