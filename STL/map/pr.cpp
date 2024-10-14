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

vector<int>v;
map<int,int>m;
int n;
while(scanf("%d",&n)==1)
{
    if(m[n]==0)
    v.push_back(n);
    m[n]++ ;
}

for(auto u:v)
{
  cout<<u<<" "<<m[u]<<endl;
}

  return 0;
}
