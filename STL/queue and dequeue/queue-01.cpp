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

queue<int>q;

q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
// PRINT FIRST ELEMENT
cout<<q.front()<<endl ;
//DELETE LAST ELEMENT
q.pop();
cout<<q.front()<<endl ;
//PRINT SIZE
cout<<q.size()<<endl ;
//PRINT WHOLE QUEURE
while(!q.empty())
{
  cout<<q.front()<<endl ;
  q.pop() ;
}

  return 0;
}

