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

 priority_queue<int>q;

q.push(1);
q.push(2);
q.push(3);
q.push(4);

// cout<<q.top()<<endl ;
// q.pop() ;
// cout<< q.top()<<endl ;

while(!q.empty())
{
  cout<<q.top()<<endl ;
  q.pop() ;
}

cout<<q.size()<<endl ;
  return 0;
}
