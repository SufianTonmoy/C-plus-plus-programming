#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool comp(pair<int,int>a,pair<int,int>b) 
{
    if(a.first==b.first)
    {
        return (a.second>b.second);
    }
    return (a.first>b.first);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input_3.txt", "r", stdin);
    freopen("output_3.txt", "w", stdout);
#endif

int N;
cin>>N;

  vector<pair<int,int>>v;

  for (int i = 0; i < N; i++)
  {
    int x,y;
    cin>>x>>y ;

    v.push_back({x,y});
  }

  sort(v.begin(),v.end(),comp);
  for(int i=0;i<N;i++)
  {
    cout<<v[i].first<<" "<<v[i].second<<endl ;
  }
  
    

    return 0;
}
