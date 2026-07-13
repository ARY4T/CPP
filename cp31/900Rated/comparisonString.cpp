#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n;cin>>n;
        string s;
        cin>>s;

        int ans = 2;
        int consec = 1;
        char last = s[0];

        for(int i=1;i<n;++i){

            if(s[i] == last){
                consec++;
            }
            else {
                if(last == '<') last = '>';
                else last = '<';
                ans = max(consec+1, ans);
                consec = 1;
                
            }
        }
        ans = max(consec+1, ans);
        cout<<ans<<nl;
    }      
    return 0;   
}