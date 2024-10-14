#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool isvowel(char c)
{
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input_2.txt", "r", stdin);
    freopen("output_2.txt", "w", stdout);
#endif

   string s,ans;

   cin>>s;
   for(auto u:s)
   {
    char c=tolower(u);
    if(!isvowel(c))
    {
        ans+='.' ;
        ans+=c;
    }
    
    
   }
   cout<<ans<<endl;

    return 0;
}
