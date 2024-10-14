//stirng is palindrom op not
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    string s="aabaa";
    
    string temp=s;
    reverse(temp.begin(),temp.end());
    if(temp==s)
    {
        cout<<"palinfrom\n";
    }
    else
    cout<<"Not palindrom\n";
    return 0;
}
