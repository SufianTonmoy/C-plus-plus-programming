#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
//Top Down Approach
int coinChange(int n,int coins[] ,int T,int dp[]){
  if(n==0) return 0 ;

  if(dp[n] != 0){
    return dp[n] ;
  }
  int ans=INT_MAX ;
  for(int i=0 ;i<T ;i++){
    if(n-coins[i] >= 0){
      int subprob=coinChange(n-coins[i],coins,T,dp) ;
      ans=min(ans,subprob+1) ;
    }
  }
  dp[n] =ans ;
  return dp[n] ;

}

//Botttom up approach
int coinChangeBU(int N,int coins[] ,int T,int dp[]){

int dp[100]={0} ;

for(int n=1 ;n<=N;n++){

   dp[n]=INT_MAX ;

  for(int i=0 ;i<T ;i++){
    if(n-coins[i] >=0){
      int subprob =dp[n-coins[i]] ;
      dp[n]=min(dp[n] ,subprob+1) ;
    }
  }

}

return dp[N] ;

}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
int n ;
cin>>n ;
int coins[3]={1,7,10} ;
int dp[100]={0} ;
int T=sizeof(coins)/sizeof(coins[0]) ;
cout<<coinChange(n,coins,T,dp) ;

  return 0;
}
