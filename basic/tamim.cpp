#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    set<int>::iterator itr;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for (itr =s.begin(); itr!=s.end(); itr++){
        cout<<*itr<<" ";
    }
}