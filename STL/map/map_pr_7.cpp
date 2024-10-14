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

int n;
cin>>n;
map<string,int>cnt;
while(n--)
{
    string s;
    cin>>s;

    if(cnt[s]==0) cout<<"OK\n";
    else
    cout<<s<<cnt[s]<<endl;
    cnt[s]++ ;

}

  return 0;
}
