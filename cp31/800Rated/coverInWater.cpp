#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int maxStreak=0;
        int streak=0;
        int cnt=0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='.') {
                streak++;
                cnt++;
                maxStreak=max(maxStreak,streak);}
            else streak=0;
        }
        if(maxStreak>2) cout<<2<<nl;
        else cout<<cnt<<nl;
    }      
    return 0;   
}