//Space optimised seive using bitset
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

const int n=10000000;
bitset<10000005>b ;
vector<int>primes ;

void seive(){
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

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
seive();
for(int i=0;i<=100;i++){
    cout<<primes[i]<<" " ;
}

    return 0;
}
