#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int main() {

float x=1.0 ;
int people = 0 ;
float num=365 ;
float deno=365 ;
float p ;
cin>>p ;
if(p==1.0){
  cout<<"366"<<endl ;
  return 0 ;
}
while(x>(1-p)){

x=x*(num/deno) ;
num-- ;
people++ ;

}

cout<<"people :"<<people<<" x :"<<x<<endl ;

  return 0;
}
