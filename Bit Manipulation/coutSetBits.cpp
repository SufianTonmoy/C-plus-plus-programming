#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

void countBits(int n ){

    int ans=0 ;
    while(n>0){
        ans+=n&1 ;
        n=n>>1 ;
    }
    cout<<ans<<endl ;

}
void countBitsFast(int n ){

int cnt=0 ;
    while(n>0){
        n=n&(n-1);
        cnt++ ;
    }
    cout<<cnt<<endl ;
}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int n ; cin>>n ;
    
    countBits(n) ;
    countBitsFast(n) ;
    cout<<__builtin_popcount(n)<<endl ;


    return 0;
}
