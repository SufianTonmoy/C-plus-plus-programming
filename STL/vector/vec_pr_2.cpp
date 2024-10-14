#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    vector<int>v={2,3,5,5,7,7,1};

    sort(v.begin(),v.end());

    int sz=unique(v.begin(),v.end())-v.begin();

    cout<<"size :"<<sz<<endl;
    for (int i = 0; i < sz; i++)
    {
        cout<<v[i]<<" " ;

    }cout<<endl;
    
    vector<int>v1={2,3,5,5,7,7,1};

   vector<int>::iterator it;
    it=max_element(v.begin(),v.end()); 

    cout<<*it<<endl ; //return the value

    int n=max_element(v.begin(),v.end())-v.begin();
    cout<<n<<endl ;  //return the index

    vector<int>::iterator it;
    it=min_element(v.begin(),v.end()); 

    cout<<*it<<endl ; //return the value
    
    int m=max_element(v.begin(),v.end())-v.begin();
    cout<<m<<endl; //return the index

    return 0;
}
