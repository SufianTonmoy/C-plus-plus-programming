#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int var1,var2 ;

bool solve(int arr[],int n,int x)
{
  int i=0,sum;
  int j=n-1 ;
  int dif=INT_MAX ;
  while(i<j)
  {
    sum=arr[i]+arr[j] ;

    if(abs(sum-x)<dif)
    {
      var1=i ;
      var2=j ;
      dif=abs(sum-x) ;
    }
    
    else if(sum>x)
       j--;
    else
       i++ ;
  }
  cout<<"("<<arr[var1]<<" "<<arr[var2]<<") = "<<arr[var1]+arr[var2]<<endl ;
  
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

solve(arr,n,x);

  return 0;
}
