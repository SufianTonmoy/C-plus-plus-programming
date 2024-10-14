#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int stringToInt(char *a,int n ){
    if(n==0)
        return 0 ;
    int digit=a[n-1]-'0' ;
    int small_num=stringToInt(a,n-1);
    return small_num *10 +digit ;
}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

char a[]="1234";
int n=strlen(a);
int x=stringToInt(a,n);
cout<<x<<endl ;
cout<<x+5<<endl ;

    return 0;
}
