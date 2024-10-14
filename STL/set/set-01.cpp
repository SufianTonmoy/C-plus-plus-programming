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

//PRINT USING LOOP
  /* cout<<s.size()<<endl ;
  for(auto u:s)
  {
    cout<<u<<" ";
  }
  cout<<endl ; */

//PRINT USING ITERATOR

  /*set<int>::iterator it;
  for (it=s.begin();it!=s.end();it++)
  {
    cout<< *it<<" ";
  }
  cout<<endl ; */

  s.clear();
 // s.insert(2);
  s.insert(2);
  s.insert(3);
  s.insert(1);
cout<<s.size()<<endl ;
  for(auto u:s)
  {
    cout<<u<<" ";
  }
  cout<<endl ;


/* cout<<s.count(2)<<endl ;
cout<<s.count(4)<<endl ; */
//PRINT FIRST ELEMENT
cout<<*s.begin()<<endl ;
//PRINT LAST ELEMENT
cout<<*(--s.end())<<endl ;
cout<<*(s.rbegin())<<endl ;
//ERASE ANY ELEMENT IN SET

s.erase(2);
s.erase(s.begin());
s.erase(--s.end());


cout<<s.size()<<endl  ;
for(auto u:s)
  {
    cout<<u<<" ";
  }
  cout<<endl ;



  


  return 0;
}
