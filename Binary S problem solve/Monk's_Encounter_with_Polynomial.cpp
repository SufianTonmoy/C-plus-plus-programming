//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

ll getPoly(ll mid,ll a, ll b ,ll c){

	return a*mid*mid + b*mid +c ;
}




int main() {

          
     int t ;
     cin>>t ;

     while(t--){
     	ll a,b,c,y;
     	cin>>a>>b>>c>>y ;

     	ll l=0 ,h= 1e5 ,ans=-1 ;

     	while(l<=h){
     		ll mid=(l+h)>>1 ;

     		// if(getPoly(mid,a,b,c)==y){
     		// 	ans=mid ;
     		// }
     		if(getPoly(mid,a,b,c)>=y){
     			ans=mid ;
                    h=mid-1 ;
     		}
     		else
     			l=mid+1 ;
     	}

     	cout<<ans<<endl ;
     }
     

}