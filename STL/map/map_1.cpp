#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {


  map<string,int>id;

  id["shahriar"]=1;
  id["momo"]=3;
  id["sharif"]=4;
  id["prety"]=9;
  /*
      int ID[123];
      ID[4]=21;
      cout<<ID[4];  
  */

  cout<<id["sharif"]<<endl;

  map<string,string>gender;

  gender["shahriar"]="male";
  gender["momo"]="female";

  cout<<gender["shahriar"]<<" "<<gender["momo"]<<endl;

  vector<long long>v={1,1045454545454545,2555454655655,1045454545454545};

  map<long long,int>cnt;
/*
  for (int i = 0; i < v.size(); i++)
  {
    cnt[v[i]]++;
  }
    cout<<cnt[1045454545454545]<<endl ;
    cnt[v[i]] =cnt[v[i]] + 1 ;
    cnt[v[0]]=cnt[v[0]]+1 ;
    cnt[1]=cnt[1]+1 ;
    cnt[1]= 0+1 = 1 ;
*/
for(auto u:v )
{
  cnt[u]++ ;
}

for(auto u:cnt)
{
  cout<<u.first<<" "<<u.second<<endl;
}



  

   

}
