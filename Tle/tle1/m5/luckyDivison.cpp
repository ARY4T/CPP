#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n;cin>>n;
        vector<int> luckyNums = {4,7,44,47,74,77,444,447,474,477,744,747,777};
        bool possible = false;
        for(auto nums:luckyNums){
            if(n%nums == 0) {
                possible = true;
                break;
            }
        }
        if(possible) cout<<"YES";
        else cout<<"NO";
    }      
    return 0;   
}