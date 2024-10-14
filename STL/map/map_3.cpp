#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void print(map<int,string>&m)
{
    for(auto &u:m)
    {
        cout<<u.first<<" "<<u.second<<endl;
    }
}

int main() {

 map<int,string>m;
 m[1]="abc";
 m[2]="cdc";
 m[3]="acd";
 m.insert({4,"afg"});
 //print(m);

 /*map<int,string>::iterator it;

 for(it=m.begin();it!=m.end();it++)
 {
    cout<<(*it).first<<" "<<(*it).second<<endl;
 }*/

/* auto it=m.find(3);
//auto it=m.find(7);

//m.erase(1);
//m.erase(it);
//m.clear(3); 
if(it==m.end())
cout<<"No value\n";
else
 cout<<(*it).first<<" "<<(*it).second<<endl; */
 


    return 0;
}
