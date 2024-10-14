#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int maxSum(int a[] ,int n) {

int dp[100]={0} ;

dp[0] =a[0]>0 ? a[0] : 0 ;
int max_so_far=dp[0] ;
for(int i=1;i<n;i++){
  dp[i]=dp[i-1]+a[i] ;

  if(dp[i] < 0){
    dp[i] =0 ; 
  }
  max_so_far=max(dp[i],max_so_far) ;

}
/* for (int i = 0; i < n; i++)
{
  cout<<dp[i]<<end ;
} */
return max_so_far ;

}

//Space optimized code
//kadan's algorithm 

int maxSubSpace(int a[] ,int n  ){

int max_so_far=0 ;
int currentSum=0 ;

for(int i=0 ;i<n ;i++){
  currentSum+=a[i] ;
  if(currentSum<0){
    currentSum=0 ;

  }
  max_so_far=(max_so_far,currentSum) ;
}
return max_so_far ;

}
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int n ; 
cin>>n ;
int a[n] ;

for (int i = 0; i < n; i++)
{
  cin>>a[i] ;
}

cout<<maxSubSpace(a,n) <<endl ;


  return 0;
}
