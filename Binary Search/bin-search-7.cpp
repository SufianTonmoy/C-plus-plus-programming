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
/* Find the first occurrence of a X in a sorted array.
   If it does not exist ,print -1 
*/

/* int arr[9]={1,4,4,4,4,9,9,10,11};
int x;
cin>>x;
int foc=lower_bound(arr,arr+9,x)-arr;

if(foc!=9 && arr[foc]==x)
cout<<foc<<endl ;
else
cout<<-1 ; */

/*
  Find the lst occurrence of a X in a sorted array.
  If it does not exist ,print -1 . 
*/

/* int arr[9]={1,4,4,4,4,9,9,10,11};
int x;
cin>>x;
int loc=upper_bound(arr,arr+9,x)-arr;
loc-- ;

if(loc>=0 && arr[loc]==x)
cout<<loc<<endl ;
else
cout<<-1 ; */

/* 
    Find the largest number smaller than X in a sorted array.
    If no number exist print -1.
 */

/* int arr[9]={1,4,4,4,4,9,9,10,11};
int x;
cin>>x;
int foc=lower_bound(arr,arr+9,x)-arr;
foc-- ;
if(foc>=0)
cout<<arr[foc]<<endl ;
else
cout<<-1 ; */

/* 
    Find the smallest number greater than X in a sorted array .
    if no number exists print -1 .
 */

int arr[9]={1,4,4,4,4,9,9,10,11};
int x;
cin>>x;
int foc=upper_bound(arr,arr+9,x)-arr;

if(foc<9)
cout<<arr[foc]<<endl ;
else
cout<<-1 ;



  return 0;
}
