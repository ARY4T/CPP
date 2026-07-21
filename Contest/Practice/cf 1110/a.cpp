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
        int n, k;
        cin>>n>>k;

        string s; cin>>s;
        
        if(s.size() < 2*k) cout<<-1<<nl;

        else{
            int changes = 0;
            for(int i=0; i<k; ++i){
                if(s[i] == 'L') changes++;
            }

            for(int i=n-1; i>n-1-k; --i){
                if(s[i] == 'R') changes++;
            }

            
            cout<<changes<<nl;
        }
        
    }      
  
}