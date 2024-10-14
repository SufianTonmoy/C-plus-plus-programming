#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )

bool cowRakhaJabe(int a[],int n,int c,int min_step){

    int last_Cow=a[0] ;
    int cnt=1 ;

    for(int i=1;i<n;i++){
        if(a[i]-last_Cow>=min_step){
            cnt++ ;
            last_Cow=a[i] ;
            if(cnt==c){
                return true ;
            }

        }
    }
    return false ;

}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int t ;
cin>>t ;
while(t--){
    int n,c ;
    cin>>n>>c ;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i] ;
    sort(a,a+n) ;

    int s=0 ;
    int e=a[n-1]-a[0] ;
    int ans=0 ;

    while(s<=e){
        int mid=(s+e)/2 ;

        bool cowCanPlace=cowRakhaJabe(a,n,c,mid);

        if(cowCanPlace){
            ans=mid ;
            s=mid+1 ;
        }
        else
           e=mid-1 ;

    }
    cout<<ans<<endl ;

}


    return 0;
}
