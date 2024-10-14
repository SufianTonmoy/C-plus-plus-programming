#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input_2.txt", "r", stdin);
    freopen("output_2.txt", "w", stdout);
#endif

string s;
cin>>s ;
int sum=0;

for(auto u:s)
{
    sum+=(u-'0');
}
string s2=to_string(sum);
string tem=s2;

reverse(tem.begin(),tem.end());

if(tem==s2)
{
    cout<<"YES\n";
}
else
cout<<"NO\n";


    return 0;
}
