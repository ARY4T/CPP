#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;

        string s; cin>>s;

        int cnt = 0;
        int o = 0, c = 0;

        bool pos = false, neg = false;

        vector<int> col;

        for(int i=0; i<n; ++i){
            if(s[i] == '('){
                cnt++;
                o++;
            }
            else{
                cnt--;
                o--;
            }
            if(cnt>0) {
                pos = true;
                col.pb(1);
            }
            if(cnt<0) {
                neg = true;
                col.pb(2);
            }
            if(cnt == 0){
                col.pb(col.back());
            }
            
        }

        if(o != c){
            cout<<-1<<nl;
        }
        else {
            if(pos && neg){
                cout<<2<<nl;
                for(int i=0; i<n; ++i){
                    cout<<col[i]<<" ";
                }
            }
            else {
                cout<<1<<nl;
                for(int i=0; i<n; ++i){
                    cout<<1<<" ";
                }
            }

            
        }
        
        cout<<nl;
    }      
  
}