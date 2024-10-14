//MAximum Xor value of a pair from a range
//https://www.youtube.com/watch?v=wFuMDWF3ewc   FOREXPLANATION

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
//O(1) SOLUTION
int l,r ;
cin>>l>>r ;

int ans=l^r ;

int pos=0 ;
while(ans){
    ans=ans>>1 ;
    pos++ ;
}
cout<<(1<<pos)-1<<endl ;
    return 0;
}

//O(n ^ 2) SOLUTION
/* =====Solution=====
#include <cstdio>
#include <algorithm>
using namespace std;
    
int l, r, a, b, ret;
    
int main () {
    scanf("%d %d", &l, &r);
    for(a = l; a <= r; a++)
        for(b = a; b <= r; b++)
            ret = max(ret, a ^ b);
    printf("%d\n", ret);
    return 0;
} */
