#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

void move(int n ,char src,char helper, char des){
    if(n==0){
     return ;
    }

    move(n-1,src,des,helper);

    cout<<"shift disk "<<n<<" from "<<src<<" to "<<des<<endl ;
    move(n-1,helper,src,des) ;
    
    
}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int n ;
cin>>n ;

move(n,'A','B','C');

    return 0;
}
