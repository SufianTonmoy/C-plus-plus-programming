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


int n,X=0 ;
string s;
cin>>n;

while(n--)
{
  cin>>s ;
  if(s=="X++") X++ ;
  else if (s=="X--") X--;
  else if (s=="++X") ++X;
  else if (s=="--X") --X;

  }
  cout<<X;

  return 0;
}
