//https://www.spoj.com/problems/RPLC/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

bool getSum(ll mid ,ll ar[],ll y){

     ll sum =mid ;
   for(ll i=0 ;i<y;i++){
     sum=sum+ar[i];

     if(sum<=0){
          return false ;
     }
   }
   return true ;
}




int main() {

     int t ;
     cin>>t ;

     for(int tc=1;tc<=t;tc++){

     	ll  y;
     	cin>>y ;

           ll ar[y];

           for(ll i=0 ;i<y;i++){
               cin>>ar[i] ;
           }

     	ll l=1 ,h= 1e13 ,ans=-1 ;

     	while(l<=h){
     		ll mid=(l+h)>>1 ;

     		if(getSum(mid,ar,y)){
                    ans=mid ;
     			h=mid-1 ;
     		}
     		else
                    l=mid+1 ;
     			
     	}
          cout<<"Scenario #"<<tc<<":"<<" "<<ans<<endl ;
     }

     	

     }

