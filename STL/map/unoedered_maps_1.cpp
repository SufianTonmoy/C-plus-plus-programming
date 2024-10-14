#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void print(unordered_map<int,string>&m)
{
    for(auto &u:m)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input_4.txt", "r", stdin);
  freopen("output_4.txt", "w", stdout);
#endif
//1.inbuilt implementation
//2.Time complexity
//3.valid key database
unordered_map<int,string>m;
 m[1]="abc";
 m[2]="cdc";
 m[3]="acd";
 m.insert({4,"afg"});
 print(m);



  return 0;
}
