#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        string s;cin>>s;
        int n = s.size();
        vector<int> v(26);

        int distChar = 0;
        for(int i=0; i<n; ++i){
            if(v[s[i]-'a'] == 0){
                distChar++;
                v[s[i]-'a'] = 1;
            }
        }
        
        fill(v.begin(), v.end(), 0);

        bool isPerfect = true;

        for(int i=0; i<n; ++i){
            if(i<distChar){
                if(v[s[i]-'a'] != 0) {
                    isPerfect = false;
                    break;
                }
                else v[s[i]-'a'] = 1;
            } 

            else if(s[i] != s[i-distChar]) {
                isPerfect = false;
                break;
            }
        }

        if(isPerfect) cout<<"YES";
        else cout<<"NO";

        cout<<nl;
    }      
  
}