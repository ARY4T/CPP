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

        bool isPossible = false;

        for(int &el:v) {
            cin>>el;
            if(el == 67) isPossible = true;
        }

        if(isPossible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }       
}