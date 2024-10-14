#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int n,q ;
int ans;
cin>>n ;
int a[n] ;

for(int i=0 ;i<n;i++){
    cin>>a[i] ;
}
sort(a,a+n) ;
cin>>q ;
while(q--){
    ans=0 ;
    int p ;
    cin>>p ;
    ans=upper_bound(a,a+n,p)-a ;
    cout<<ans<<endl ;
}

    return 0;
}
