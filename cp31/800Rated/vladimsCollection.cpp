#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        vector<int> hash(10);
        for(auto el:s) hash[el-'0']++;
        string ans = "9";
        hash[9]--;
        for(int i=1;i<s.length();++i){
            bool done = false;
            int least = s.length()-i-1;
            while(!done){
                if(hash[least] >= 1) {
                ans += least +'0'; 
                done = true;
                hash[least]--;
                break;
                
            }
            else least++;}
        }
        cout<<ans<<nl;

    }      
    return 0;   
}