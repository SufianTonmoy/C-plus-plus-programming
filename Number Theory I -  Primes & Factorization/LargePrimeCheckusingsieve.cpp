//Space Optimised Sieve using Bitset
//Checking if a Large number is Prime or not ~ 10^12

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )


const int n=10000000;
bitset<10000005>b ;
vector<int>primes ;

void sieve(){
    //set all bit
    b.set(); //1,1,1,1,1,1,...

    b[0]=b[1]=0 ;
    for(long long int i=2;i<=n;i++){
        if(b[i]){
            primes.push_back(i) ;
            for(long long int j=i*i;j<=n;j=j+i){
                b[j]=0 ;
            }
        }
    }

}
bool isPrime(int no){
    if(no<=n){
        return b[no]==1 ?true:false ;
    }
    for(long long int i=0;primes[i]*(long long)primes[i]<=no;i++){
        if(no%primes[i]==0){
            return false ;
        }
    }
    return true ;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
sieve() ;

if(isPrime(2147483647)){
    cout<<"Yes.It is prime" ;
}
else
    cout<<"No.It is not prime" ;


    return 0;
}
