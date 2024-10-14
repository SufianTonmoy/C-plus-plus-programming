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

int arr[6]={1,3,4,7,7,5};
/* int max=arr[0];
for (int i = 0; i < 5; i++)
{
  if(max<arr[i])
  {
    max=arr[i] ;
  }
} */
//ASCCENDIND ORDER
sort(arr,arr+6);

for(auto u :arr)
{
  cout<<u <<endl ;
}
//DECENDING ORDER
sort(arr,arr+6,greater<int>());


for(auto u :arr)
{
  cout<<u <<"  " ;
}
cout<<endl ;

int max = *max_element(arr,arr+6);
int min = *min_element(arr,arr+6);
cout<<max<<endl ;
cout<<min<<endl ;


  return 0;
}
