#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
   //pair of vector
pair<int,int>p[]={{6,5},{2,3},{4,5},{6,1},{1,9}};

sort(p, p+5);

for (int i = 0; i <5; i++)
{
    cout<<p[i].first<<" "<<p[i].second<<endl;
}

    return 0;
}
