#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

void generate_bracket(char *out,int n ,int idx,int open,int close){

    if(idx == 2*n){
        out[idx]='\0' ;
        cout<<out<<endl ;
        return ;
    }
    if(open<n){
        out[idx]='(' ;
        generate_bracket(out,n,idx+1,open+1,close) ;
    }
    if(close<open){
        out[idx]=')' ;
        generate_bracket(out,n,idx+1,open,close+1) ;
    }
    return ;
}



int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int n ;
cin>>n ;
char output[1000];
generate_bracket(output,n,0,0,0) ;
    return 0;
}
