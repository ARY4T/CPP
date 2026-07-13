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
        int ones = 0;
        int curr = 0;
        s+=s;
        for(int i=0; i<s.size(); ++i){
            if(s[i] == '1') curr++;
            else{
                ones = max(ones, curr);
                curr = 0;
            }
        }
        ones = max(ones, curr);
        
        if(ones>n) ones = n;
        if(ones == n) {
            cout<<(ll)n*n<<nl;
            continue;
        }
        
        int w = (ones+1)/2;
        int h = (ones+1)-w;

        cout<<1LL*w*h<<nl;
        
    }      
  
}