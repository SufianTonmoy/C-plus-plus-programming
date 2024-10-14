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

for (int i = 0; i <n; i++)
{
  int a;
  cin>>a ;

  s.insert(a);
}
if(s.size()==1)
cout<<"No\n";

else{

//PRINTING THE SECOND ELEMENT OF SET


/* cout<<*(++s.begin())<<endl ; */

//PRINTING THE THIRD ELEMENT OF SET
  int p,c =0 ;

  for(auto u:s)
  {
    if(c==3)
    {
      break;
    }
    p=u ;
    c++ ;
  }
  cout<<p<<endl ;
  
  }





  return 0;
}
