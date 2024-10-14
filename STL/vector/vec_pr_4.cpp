//leetcodeproblem 1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int peakIndexInMountainArray(vector<int>& arr) {

    int i=max_element(arr.begin(),arr.end())-arr.begin();
      return i ;  
    }
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    return 0;
}
