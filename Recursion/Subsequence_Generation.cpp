#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

void subsequenceGeneration(string input,string output,int i){

    if(i==input.length()){
        cout<<output<<endl ;
        return  ;
    }

    //Exclution
    subsequenceGeneration(input,output,i+1) ;

    //inclution
    output.push_back(input[i]) ;
    subsequenceGeneration(input,output,i+1) ;

}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

string input ="abc" ;
string output="" ;

subsequenceGeneration(input,output,0) ;



    return 0;
}
