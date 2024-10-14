#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main() 
{
  
   map<string,int>id;

  id["shahriar"]=1;
  id["momo"]=3;
  id["sharif"]=5;
  id["prety"]=6;
  id["dima"]=9;

  for(auto u:id)
  {
    cout<<u.first<<" "<<u.second<<endl;
  }
 
  
  map<int,bool>vis;

   vector<int>v={2,2,1,1,3};

   for(auto u:v)
   {
    vis[u]=1;

   }
   for(auto u:vis)
   {
    cout<<u.first<<" "<<u.second<<endl;
   }
 
 

//userdefine input

/* map<string,int> id;
int n;
cin>> n;
for (int i = 0; i < n; i++)
{
  string s;
  int d;

cin>>s>>d ;

id[s]=d ;
}

for(auto u:id)
  {
    cout<<u.first<<" "<<u.second<<endl;
  }
 */



return 0 ;

}
