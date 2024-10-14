#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int var1,var2 ;

bool solve(int arr[],int n,int x)
{
  int i=0,sum;
  int j=n-1 ;
  while(i<j)
  {
    sum=arr[i]+arr[j] ;
    if(sum==x)
    {
      var1=i;
      var2=j ;
      return true ;
    }
    else if(sum>x)
       j--;
    else
       i++ ;
  }
  return false ;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int n,x;
cin>>n>>x;
int arr[n] ;
for (int i = 0; i < n; i++)
{
  cin>>arr[i] ;

}
sort(arr,arr+n) ;

if(solve(arr,n,x))
{
   cout<<"True"<<"\n"<<var1<<" "<<var2<<endl ;
}
else
   cout<<"False"<<endl ;

  return 0;
}
