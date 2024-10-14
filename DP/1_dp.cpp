#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

//Fibonacci -> Top Down approach
int fib (int n,int dp[]){

  //base case
  if(n==0 || n==1){
    return n ;
  }

  //Look up

  if(dp[n] != 0){
    return dp[n] ;
  }

  int ans;
  ans=fib(n-1,dp)+fib(n-2,dp) ;

  return dp[n] = ans ;

}

//Bottom up approach

int fibBU(int n){

  int dp[100]={0} ;

  dp[1]=1 ;

  for(int i=2;i<=n ;i++){
    dp[i]=dp[i-1]+dp[i-2] ;
  }
  return dp[n] ;
}

//Bottom up with space optimization 


int fibBUSpace(int n){

if(n==0 || n==1){
  return n ;
}

int a =0 ;
int b=1 ;
int c ;

for(int i=2 ;i<=n ;i++){

  c=a+b ;
  a=b ;
  b=c ;
}
return c ;

}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int n ;
cin>>n ;

int dp[100]={0} ;

cout<<fibBUSpace(n) ;
  return 0;
}
