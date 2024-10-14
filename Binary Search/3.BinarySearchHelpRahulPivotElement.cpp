#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int find(int a[],int n,int key){

   int l=0 ;
   int h=n-1 ;

   while(l<=h){
      int mid=(l+h)/2 ;
      if(a[mid]==key)
         return mid ;
   
      else if(a[l]<=a[mid]){
         if(key>=a[l] && key<=a[mid]){
            h=mid - 1 ;
         }
         else
            l=mid+1 ;
      }
      else{
         if(key<=a[h] && key>=a[mid]){
            l=mid +1 ;
         }
         else
            h=mid-1 ;
      }
   }
      return -1 ;

}

int main() {

   int n ;
   cin>>n ;
   int a[n] ;

   for(int i=0 ;i<n ;i++){
      cin>>a[i] ;
   }
   int key ;
   cin>>key ;

   cout<<find(a,n,key);


}