#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

void prime_Sieve(int *a){

    //mark all even number as not prime or mark all odd number as prime
    for(int i=3;i<=1000;i+=2){
        a[i]=1 ;
    }

     for(int i=3;i<=1000;i+=2){
        if(a[i]==1){
            for(int j=i*i ;j<=1000;j+=i){
                 a[j]=0 ;
            }
        }
     }
    a[2]=1 ;
    a[0]=a[1]=0 ;

}
int main() {
int n ;
cin>>n ;
int a[1005]={0} ;

prime_Sieve(a) ;
for(int i=0;i<=n;i++){
    if(a[i]==1){
     cout<<i<<" " ;
    }
}

    return 0;
}
