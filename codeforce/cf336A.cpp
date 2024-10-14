#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
const int mx=123;
int arr[mx],brr[mx] ;
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int n,x ;
cin>>n ;
for(int i=1;i<=n;i++)
cin>>arr[i];

for(int i=1;i<=n;i++)
{
  x=arr[i] ;
  brr[x]=i ;
}
for (int i = 1; i <=n; i++)
{
  cout<<brr[i]<<" " ;
}



  return 0;
}
