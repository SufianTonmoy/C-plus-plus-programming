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


int arr[5]={4,3,5,2,1};
int j,temp ;

for(int i=1;i<5;i++)
{
  temp=arr[i];
  j=i-1 ;
  while(j>=0 && arr[j]>temp)
  {
    arr[j+1]=arr[j] ;
    j-- ;
  }
    arr[j+1]=temp ;
  }
  
for (int i = 0; i < 5; i++)
{
  cout<<arr[i] <<" ";
}
  return 0;
}
