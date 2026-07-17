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

        int len = 0;

        int ind = 0;

        while(ind<n){
            if(s[ind] == '#'){
                int l = 0;
                while(s[ind] == '#'){
                    l++;
                    ind++;
                }
                len = max(len, l);
            }
            else ind++;
        }

        cout<<(len+1)/2<<nl;
    }      
  
}