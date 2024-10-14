#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int BinSearch2(int a[],int l,int h,int key)
{
  int mid;

  while(l<=h)
  {
    mid=l+(h-l)/2 ;

    if(key==a[mid])
         return mid;
    else if(key<a[mid])
         l=mid+1 ;
    else
         h=mid-1 ;
  }
  return -1 ;
}

int BinSearch1(int a[],int l,int h,int key)
{
  int mid;

  while(l<=h)
  {
    mid=(l+h)/2 ;

    if(key==a[mid])
         return mid;
    else if(key<a[mid])
         h=mid-1 ;
    else
         l=mid+1 ;
  }
  return -1 ;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int arr[]={20,17,15,14,13,12,10,9,8,4};

int l=0,key;
int size=end(arr)-begin(arr) ;
int h=size-1 ;

if(size==1)
{
  key=BinSearch1(arr,l,h,2);
}
else if(arr[0]<arr[1])
{
  key=BinSearch1(arr,l,h,5);
}
else
  key=BinSearch2(arr,l,h,12);

  cout<<key<<endl ;


  return 0;
}
