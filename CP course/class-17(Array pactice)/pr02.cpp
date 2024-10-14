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

//reverse an array 

int arr[]={2,3,1,4,5} ;

for(int i=0,j=4;i<j;i++,j--)
{
  int temp=arr[i] ;
  arr[i]=arr[j] ;
  arr[j]=temp ;
}

for(int i=0;i<5;i++)
{
  cout<<arr[i]<<" ";
}
  return 0;
}
