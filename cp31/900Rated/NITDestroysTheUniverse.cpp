#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;cin>>n;
        vector<int> v(n);
        for(auto &el:v) cin>>el;
        int cntZeroes = 0;
        for(auto el:v){
            if(el == 0) cntZeroes++;
        }

        bool foundZero = false;

        int left = 0;
        int right = n-1;

        while(v[left] == 0) left++;
        while(v[right] == 0) right--;

        for(int i=left; i<=right; ++i){
            if(v[i] == 0) foundZero = true;
        }

        if(cntZeroes == n) cout<<0<<nl;
        else if(foundZero == false) cout<<1<<nl;
        else cout<<2<<nl;
        
    }      
    return 0;   
}