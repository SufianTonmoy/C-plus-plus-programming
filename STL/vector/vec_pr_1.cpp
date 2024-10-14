#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> input(){
    vector<int>data ;
    int n ;
    cin>> n;
    while(n--)
    {
        int  d ;
        cin>>d ;
        data.push_back(d) ;
    }
    return data ;
}

vector<int> reverse(vector<int>data)
{
    int ln=data.size();
    vector<int>rdata ;
    for (int i = ln-1; i >=0 ; i--)
    {
        rdata.push_back(data[i]);
    }
    return rdata ;
    
}

void output(vector<int>rdata)

{
    for(int d:rdata)
    {
        cout<<d<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> data;
    data=input();
    data=reverse(data);
    output(data);

    return 0;
}
