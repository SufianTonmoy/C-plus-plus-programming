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

//COMPARATOR IN PRIORITY_QUEUE

priority_queue<int,vector<int>,greater<int>>q;

q.push(1);
q.push(2);
q.push(2);
q.push(3);
q.push(4);

while(!q.empty())
{
  cout<<q.top()<<endl ;
  q.pop() ;
}


//PAIR IN PRIORITY QUEUE

///priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q1;
priority_queue<pair<int,int>>q1;
q1.push({1,2});
q1.push({2,3});
q1.push({2,4});
q1.push({4,4});
q1.push({3,4});

while(!q1.empty())
{
  cout<<q1.top().first<<" "<<q1.top().second<<endl ;
  q1.pop() ;
}




  return 0;
}
