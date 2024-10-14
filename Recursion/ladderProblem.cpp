#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int f(int n,int k){
    if(n==0)return 1 ;
    if(n<0) return 0 ;
    int ans =0 ;

    for(int i = 1 ; i <= k ; i++){
        ans+=f(n-i ,k) ;
    } 
    return ans ;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int n ,k ;
cin>>n>>k ;
cout<<f(n,k)<<endl ;

    return 0;
}
