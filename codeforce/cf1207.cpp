#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t ;
 

while(t--){
          int b,p,f,h,c ;
          cin>>b>>p>>f>>h>>c ; ;
          
        int mxprice=h,  mxPricePaticeNum=p;
        int mnprice=c,  mnPricePaticeNum=f;
        
        if(mxprice<mnprice){
            mxprice=c,  mxPricePaticeNum=f;
            mnprice=h,  mnPricePaticeNum=p;
        }
        
        int burgernumber=b/2 ;
        int ans=0 ;
        
        if(burgernumber<mxPricePaticeNum){
            ans+=(burgernumber*mxprice) ;
            burgernumber=0 ;
            
        }
        else{
            ans+=(mxPricePaticeNum*mxprice);
            burgernumber-=mxPricePaticeNum ;
        }
        
        if(burgernumber<mnPricePaticeNum){
            ans+=(burgernumber*mnprice) ;
            
        }
        else{
            ans+=(mnPricePaticeNum*mnprice);
        }
        
        
        cout<<ans<<endl ;
    }
    
    return 0;

}

