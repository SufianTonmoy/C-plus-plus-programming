#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int profit(int N,int C,int *weight,int *prices){
    if(N==0 || C==0){
        return 0 ;
    }
    int ans=0 ;
    int inc;
    int exc;
    inc=exc=0 ;
    if(weight[N-1] <=C)
    {
        inc=prices[N-1]+profit(N-1,C-weight[N-1],weight,prices);

    }
    exc=profit(N-1,C,weight,prices) ;
    
    ans=max(inc,exc) ;
    return ans ;
}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int weight[]={1,2,3,5} ;
int prices[]={40,20,30,100} ;
int N=4 ;
int C=7 ;
cout<<profit(N,C,weight,prices) ;
    return 0;
}
