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
set<int>s;
int n ;
cin>>n ;

int p;
cin>>p ;
for (int i = 0; i < p; i++)
{
  int a ;
  cin>>a;
  s.insert(a);
}
cin>>p ;
for (int i = 0; i < p; i++)
{
  int a ;
  cin>>a ;
  s.insert(a);
}
if(s.size()==n)
cout<<"I become the guy\n";
else cout<<"Oh,my keyboard\n";



  return 0;
}
