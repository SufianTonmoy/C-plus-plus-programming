//https://www.spoj.com/problems/MATHLOVE/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

ll getSum(ll mid){

	return mid*(mid+1) >>1 ;
}




int main() {

     int t ;
     cin>>t ;

     while(t--){

     	ll  y;
     	cin>>y ;

     	ll l=1 ,h= 1e5 ,ans=-1 ;

     	while(l<=h){
     		ll mid=(l+h)>>1 ;

     		if(getSum(mid)==y){
     			ans=mid ;
     			break ;
     		}
     		else if(getSum(mid)<y){
     			l=mid+1 ;
     		}
     		else
     			h=mid-1 ;
     	}

     	if(ans==-1){
     		cout<<"NAI"<<endl ;
     	}
     	else
     		cout<<ans<<endl ;

     }

}