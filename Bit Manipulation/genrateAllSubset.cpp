#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

vector<string>v;

int filter(int n ,char c[]){

string s;
    int j=0 ;
    while(n>0){
        if(n&1){
           s+=c[j] ;
        }
        j++ ;
        n=n>>1 ;
    }
    v.push_back(s) ;
    s.clear() ;
    //cout<<endl ;

}
int printSubset(char c[]){

    int  n=strlen(c);

    for (int i = 0; i < (1<<n); i++)
    {
        filter(i,c) ;
    }
    
}

int main() {
/*     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 */
char c[100] ;
cin>>c ;
int  n=strlen(c);
printSubset(c) ;

sort(v.begin(),v.end()) ;
for (int i = 0; i < (1<<n); i++)
{
    cout<<v[i]<<endl ;
}
    return 0;
}
