#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin>>t;
  while(t--)
  {
    int  n; 
    cin>>n ;

/*     char bin[n] ;
    for (int i = 0; i < n; i++)
    {
      cin>>bin[i] ;

    }
    cout<<stoi(bin,0,2)<<"\n"; */
    string s ;
    cin>>s ;
    long long result=0 ;
    ll power2=1 ;
    for (int i = s.size()-1; i >=0; i--)
    {
      int binary_digit=s[i]-'0' ;
      result=result+(binary_digit*power2);
      power2=power2*2 ;

    }
    cout<<result<<endl ; 
  }

  return 0;
}
