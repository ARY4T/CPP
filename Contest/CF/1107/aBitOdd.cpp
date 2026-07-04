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

        int cones = 0;
        int czeros = 0;
        bool al = false;

        for(int i=0; i<n; ++i){
            if(s[i] == '1') cones++;
            else if(cones&1){
                al = true;
                break;
            }
            else cones = 0;

            if(s[n-1-i] == '0') czeros++;
            else if(czeros&1){
                al = true;
                break;
            }
            else czeros = 0;

        }

        if(al) cout<<"Alice"<<nl;
        else cout<<"Bob"<<nl;
    }      
  
}