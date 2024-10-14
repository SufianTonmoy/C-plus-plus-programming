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

int a,b;
cin>>a>>b ;
//cout<<a<<" "<<b<<endl;
int sum=0;

while(a--)
{
  int i;
  cin>>i ;
  if(i<=b)
    sum=sum+1;
  else
    sum=sum+2 ;
}
cout<<sum;




  return 0;
}
