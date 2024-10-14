//First and Last occurrence of an Element
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int BinSearch(int a[],int l,int h,int key)
{
  int mid;
  int result= -1 ;

  while(l<=h)
  {
    mid=(l+h)/2 ;

    if(key==a[mid])
         
         {
          result=mid ;
          h=mid-1 ;     //FOR FIRST OCCURANCE
                        //FOR LAST OCCURANCE--->(l=mid+1)
         }
    else if(key<a[mid])
         h=mid-1 ;
    else
         l=mid+1 ;
  }
  return result ;
}
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

int arr[]={1,2,3,4,8,8,8,8,5,6,7};

int l=0;
int h=(end(arr)-begin(arr))-1 ;

int key=BinSearch(arr,l,h,8);
cout<<key<<endl ;

  return 0;
}
