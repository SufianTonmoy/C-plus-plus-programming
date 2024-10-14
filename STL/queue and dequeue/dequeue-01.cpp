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

 deque<int>dq ;
 

 dq.push_front(1);
 dq.push_front(2);
 dq.push_front(3);
 dq.push_back(4);
 dq.push_back(5);

cout<<dq.front()<<" "<<dq.back()<<endl ;
dq.pop_front();
cout<<dq.front()<<" "<<dq.back()<<endl ;
dq.pop_back();
cout<<dq.front()<<" "<<dq.back()<<endl ;

cout<<dq.size()<<endl ;
cout<<dq.empty()<<endl ;

  return 0;
}
