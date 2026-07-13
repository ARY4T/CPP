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
        char c; cin>>c;
        
        string s; cin>>s;

        int ops = 0;
        
        for(int i=0; i<n; ++i){
            if(s[i] != c) {
                ops++;
                break;
            }
        }

        if(ops == 0) {
            cout<<0<<nl;
            continue;
        }

        bool oneOp = false;
        int indONeOp = -1;

        for(int i=n/2; i<n; ++i){
            if(s[i] == c) {
                indONeOp = i+1;
                oneOp = true;  
            }
        }

        if(oneOp){
            cout<<1<<nl;
            cout<<indONeOp<<nl;
            continue;
        }

        cout<<2<<nl;
        cout<<n-1<<" ";
        cout<<n<<" "<<nl;  
    }      
  
}