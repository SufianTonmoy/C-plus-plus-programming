#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx=2*10e5 ;
int arr[mx],sum[mx] ;

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int n ,q ;
cin>>n>>q ;

for(int i=0;i<n;i++) 
{
    cin>>arr[i] ;
}
for(int i=1;i<=n;i++){
  sum[i]=sum[i-1] ^ arr[i-1] ;
}

while(q--){
  int l,r ;
  cin>>l>>r ;

  cout<<(sum[r] ^ sum[l-1])<<endl ;
  
}
  return 0;
}
