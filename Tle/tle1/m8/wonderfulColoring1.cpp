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
        map<char,int> mpp;
        for(int i=0; i<s.length(); ++i){
            mpp[s[i]]++;
        }
        int totalColored = 0;
        for(auto &el:mpp){
            if(el.second == 1) totalColored++;
            else if(el.second > 1) totalColored+=2;
        }
        cout<<totalColored/2<<nl;
    }      
    return 0;   
}