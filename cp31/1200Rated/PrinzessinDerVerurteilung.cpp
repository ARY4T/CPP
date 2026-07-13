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
        string s; cin>>s;
        vector<bool> hash(26, 0);

        for(int i=0; i<n; ++i){
            hash[s[i]-'a'] = true;
        }

        string ans = "";
        bool found = false;

        for(int i=0; i<26; ++i){
            if(hash[i] == false) {
                ans = 'a' + i;
                found = true;
                break;
            }
        }


       if(!found){ 
            vector<bool> hash(26*26, 0);

            for(int i=0; i<n-1; ++i){
                hash[(s[i]-'a')*26+(s[i+1]-'a')] = true;
            }

            for(int i=0; i<26*26; ++i){
                if(hash[i] == false){
                    ans += (i/26 + 'a');
                    ans += (i%26 + 'a');
                    found = true;
                    break;
                }
            }
        }

        if(!found){
            vector<bool> hash(26*26*26, 0);

            for(int i=0; i<n-2; ++i){
                hash[(s[i]-'a')*26*26 + (s[i+1]-'a')*26 + (s[i+2]-'a')] = true;
            }

            for(int i=0; i<26*26*26; ++i){
                if(hash[i] == false){
                    ans += (i/(26*26) + 'a');
                    ans += ((i/26)%26 + 'a');
                    ans += (i%26 + 'a');
                    found = true;
                    break;
                }
            }
        }

        cout<<ans<<nl;
       
    }      
  
}