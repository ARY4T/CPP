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

        ll cost = 0;
        vector<bool> mp(n, false);

        for(int i=1; i<=n; ++i){
            if(s[i-1] == '0' || mp[i-1] == true){
                if(s[i-1] == '0')  cost += i;
            
                int mul = i;
                int num = 2;

                while(1){
                    if(mul*num <= n && mp[(mul*num)-1] == true){
                        num++;
                        continue;
                    }

                    if((mul*num) <= n && (s[(mul*num)-1] == '0')) {
                        cost += i;
                        s[(mul*num)-1] = '1';
                        mp[mul*num-1] = true;
                        num++;
                    }
                    else break;
                }
            }
        }

        cout<<cost<<nl;
    }      
  
}