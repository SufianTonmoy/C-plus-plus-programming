//vector of vector(to make the number row dynamic)
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void printVec(vector<int>v)
{
    cout<<"Size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i] <<" ";
    }
    cout<<endl ;
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int N;
    cin>>N ;
    vector<vector<int>> V ;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        //V.push_back(vector<int>());
        vector<int>temp ;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
           // V[i].push_back(x);
            temp.push_back(x);
        }
        V.push_back(temp);
        
    }
    for (int i = 0; i < N; i++)
    {
        printVec(V[i]);
    }
    
    

    
    return 0;
}
