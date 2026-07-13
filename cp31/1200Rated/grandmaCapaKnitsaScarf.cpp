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
        int ans = INT_MAX;

        for(int i=0; i<26; ++i){
            char word = 'a' + i;
            int l = 0, r = n-1;
            int removal = 0;
            bool breaked = false;
            while(l<r){
                if(s[l] == s[r]){
                    l++; r--;
                }
                else{
                    if(s[l] == word) l++;
                    else if(s[r] == word) r--;
                    else {
                        breaked = true;
                        break;
                    }
                    removal++;
                }
            }
            if(!breaked) ans = min(ans, removal);

        }

        cout<<(ans==INT_MAX?-1:ans)<<nl;
    }      
  
}