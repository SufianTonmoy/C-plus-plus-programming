#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    
    int N ;
    cin>>N ;

    vector<int>v ;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

     reverse(v.begin(),v.end());
     for (int i = 0; i < N; i++)
    {
       cout<<v[i]<<" " ;
    }
    cout<<endl ;
    
   
    return 0;
}
