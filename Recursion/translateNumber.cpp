#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};

void printSpelling(int n ){
if(n==0)
     return ;
//top-down approach
// int digit=n%10 ;
// cout<<words[digit]<<" " ;
printSpelling(n/10);
//Bottom -up approach
// int digit=n%10 ;
// cout<<words[digit]<<" " ;
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
printSpelling(n);


     return 0;
}
