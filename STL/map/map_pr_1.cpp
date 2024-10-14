/*
Given N string ,print unique strings in
lexiographical order with their frequency
N<=10^5
|s|<=100
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input_4.txt", "r", stdin);
  freopen("output_4.txt", "w", stdout);
#endif

map<string,int>m;

int n ;
cin>>n;

for (int i = 0; i < n; i++)
{
  string s;
  cin>>s;
  //m[s]++;
  m[s]=m[s]+1 ;
}
for(auto u:m)
cout<<u.first<<" "<<u.second<<endl;


  return 0;
}
