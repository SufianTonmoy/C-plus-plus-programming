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

int n,k,l,c,d,p,nl,np ;
int arr[2] ;

cin>>n>>k>>l>>c>>d>>p>>nl>>np ;

int total_drink=(k*l)/nl ;
int total_slice=(c*d) ;
int total_salt=p/(np);

int ans=min(min(total_drink,total_slice),total_salt);
cout<<(ans/n) ;
  return 0;
}
