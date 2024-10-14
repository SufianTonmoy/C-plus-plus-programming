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


int arr[7]={1,2,2,2,4,5,6};

int lb=lower_bound(arr,arr+7,10)-arr;
cout<<lb<<endl ;

int ub=upper_bound(arr,arr+7,7)-arr;
cout<<ub<<endl ;

  return 0;
}
