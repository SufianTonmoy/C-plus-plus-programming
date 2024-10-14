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

stack<int>st ;

st.push(1);
st.push(2);
st.push(3);
st.push(4);

//PRINT TOP ELEMENT

//cout<<st.top()<<endl ;

//REMOVE EMEMENT FROM STACK
 //st.pop();

 //cout<<st.top()<<endl ;
//SIZE OF STACK
cout<<st.size()<<endl ;
 while(!st.empty())
 {
  cout<<st.top()<<endl ;
  st.pop(); 
 }

  return 0;
}
