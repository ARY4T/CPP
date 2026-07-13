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

        string s;cin>>s;

        int sum = 0;

        int cnt =  0;

        for(int i=0;i<n;++i){
            if(s[i] == '(') {
                sum++;
            }
            else if(s[i] == ')') {
                sum--;
            }
            cnt = min(cnt, sum);
        }

        cout<<abs(cnt)<<nl;
    }      
}