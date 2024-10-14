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

int n ;
cin>>n ;

int arr[n] ;
int count=0 ;

for(int i=0;i<n;i++)
{
  cin>>arr[i] ;
}
for(int i=0;i<n;i++)
{
 if(arr[i]==1)
 {
  count++ ;
  break ;
 }
}
 if(count)
 cout<<"HARD" ;
 else
 cout<<"EASY" ;





  return 0;
}
