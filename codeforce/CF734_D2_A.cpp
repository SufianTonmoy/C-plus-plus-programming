#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
#endif

int n;
cin>>n ;
int anton =0;
int danik=0;

while(n--)
{
  char a;
  cin>>a;
  if(a=='A')
    anton++;
    else if(a=='D')
    danik++;
}
if(anton>danik)
cout<<"Anton";
else if(danik>anton)
cout<<"Danik";
else
cout<<"Friendship";
  return 0;
}
