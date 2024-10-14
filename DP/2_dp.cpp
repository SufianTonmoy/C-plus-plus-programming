#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

//Top down Approach
int minStep(int n ,int dp[]){

  if(n==1){
    return 0 ;
  }

  if(dp[n]!= 0){
    return dp[n] ;
  }

  int opn1,opn2,opn3 ;

  opn1=opn2=opn3=INT_MAX ;

  if(n%3==0){
    opn1=minStep(n/3,dp) + 1  ;
  }
  if(n%2== 0){
    opn2=minStep(n/2,dp) + 1 ;
  }
  opn3=minStep(n-1,dp) + 1 ;

  int ans ;
  ans=min(min(opn1,opn2),opn3) ;

  return dp[n] =ans ;

}

//Bottom Up approach

int minStepBU(int n){

  int dp[100]={0} ;

  for(int i=2;i<=n;i++){
    int op1,op2,op3 ;
    op1=op2=op3=INT_MAX ;

    if(i%3==0){
      op1=dp[i/3] ;
    }
    if(i%2==0){
      op2=dp[i/2] ;
    }

    op3=dp[i-1] ;

    
    dp[i]=min(min(op1,op2),op3) +1 ;

  }
  for(int i=0 ;i<=n;i++){
  cout<<dp[i] <<" " ;
} 
  return dp[n] ;

}
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
int n ;
cin>> n ;

//int dp[100] ={0} ;

//cout<<minStep(n,dp)<<endl ;
//minStep(n,dp) ;
/* for(int i=0 ;i<=n;i++){
  cout<<dp[i] <<" " ;
} */

cout<<minStepBU(n)<<endl ;

  return 0;
}
