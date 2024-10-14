#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int pow(int a, int n){

  if(n==0){
    return 1 ;
  }

int sub_prob=pow(a,n/2) ;

if(n&1){
  return a * sub_prob * sub_prob ;
}
else
  return sub_prob * sub_prob ;



}




int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int a,n ;

cin>>a>>n ;

cout<<pow(a,n) ;



  return 0;
}
