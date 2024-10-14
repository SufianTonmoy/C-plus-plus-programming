#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

bool isOdd(int n ){
    return (n&1);
}
int getBit(int n,int i){
    int musk=1<<i ;
    return (n & musk)>0 ? 1 : 0 ;
        
}
int setBit(int n,int i){
    int mask=1<<i ;
    int ans= n | mask ;

    return ans ;
}

void clearBit(int &n,int i){

    int mask= ~(1<<i) ;
    n=n & mask ;
    
}
int updateBit(int &n,int i,int v){

    clearBit(n,i) ;
    int mask=v<<i ;

    n= n| mask ;


}

int clearLastIBits(int n ,int i){
    int mask=(-1<<i) ;
    return n&mask ;
}

int clearRangeIToJ(int n ,int i, int j){
    int ones=(~0) ;
    int a =ones<<(j+1) ;
    int b =(1<<i)-1 ;
    int mask=a|b ;
    int no=n& mask ;
    return no ;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n , i,j; cin>>n>>i>>j ;

    //cout<<isOdd(n)<<endl  ;
    //cout<<setBit(n,i)<<endl  ;
    
    //clearBit( n,i) ;
    // updateBit(n,i,v) ;
    // cout<<n ;
    //cout<<clearLastIBits(n,i)<<endl ;
    cout<<clearRangeIToJ(n,i,j)<<endl ;

    return 0;
}

