#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
#endif
int n ;
int a,b,c,cnt=0;
cin>>n;
int sum=0;
while(n--)
{
cin>>a>>b>>c;

sum=a+b+c ;

if(sum>=2)
cnt++ ;
}
cout<<cnt;


  return 0;
}
