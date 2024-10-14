#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int mx=2e5+123 ;
ll a[mx] , sum[mx] ;


int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int n ,x ;
cin>>n>>x ;

for(int i=1;i<=n ;i++) cin>>a[i] ;
for(int i=1;i<=n;i++) sum[i]=a[i]+sum[i-1] ;

map<ll , int >cnt ;

for(int i=0;i<=n;i++){
  cnt[sum[i]]++ ;
}

ll ans=0 ;

for(int i=n ;i>=0 ;i--){

cnt[sum[i]] -- ;

ll sub =sum[i] -x ;

ans+=cnt[sub] ;


}
cout<<ans ;

  return 0;
}
