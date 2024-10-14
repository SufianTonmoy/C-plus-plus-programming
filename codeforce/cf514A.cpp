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

long long n ;
cin>>n ;
int a[25] ;

int cnt=0 ;

while(n>0)
{
  int temp=n%10 ;
  a[cnt++]=temp ;
  n/=10 ;
}

for (int i = 0,j=cnt-1; i < j; i++,j--)
{
  int temp=a[i] ;
  a[i]=a[j] ;
  a[j]=temp ;

}

int temp=a[0] ;
for (int i = 0; i < cnt; i++)
{
  int inv=9-a[i] ;
  if(inv<a[i])
      a[i]=inv ;
}
if(a[0]==0)
{
  a[0]=temp ;
}
for (int i = 0; i < cnt; i++)
{
  cout<<a[i] ;
}

  return 0;
}
