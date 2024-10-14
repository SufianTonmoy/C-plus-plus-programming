#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool isvowel(char c)
{
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input_2.txt", "r", stdin);
    freopen("output_2.txt", "w", stdout);
#endif
    string s ;
    int a[]={5,7,5};
    vector<string>v;
 
    for (int i = 0; i < 3; i++)
    {
        string s;

        char c;
        cin>>c;
        getline(cin,s);

        s=c+s;
      v.push_back(s);
    }

    for (int i = 0; i < 3; i++)
    {
        int c=0;
       for (auto u:v[i])
       {
        if(isvowel(u)) c++ ;
        //cout<<c<<endl;
       }
       if(c!=a[i])
        return cout<<"NO\n",0 ;
   
    }
     cout<<"YES\n";

}
