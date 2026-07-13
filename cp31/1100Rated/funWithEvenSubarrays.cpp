#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<int> v(n);

        for(int &el:v) cin>>el;

        int ans = 0;
        int i = n-1;

        while(i>=0 && v[i] == v[n-1]){
            i--;
        }

        if(i == -1) cout<<0<<nl;
        else{
            while(i>=0){
                i -= (n-1-i);
                ans++;
                while(i>=0 && v[i] == v[n-1]) i--;
            }
            cout<<ans<<nl;
        }
    }      
  
}