#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n;cin>>n;
        vector<string>  v;
        while(n--){
            string s;cin>>s;
            v.push_back(s);
        }
        set<string> st;
        for(int i=v.size()-1;i>=0;--i){
            if(st.find(v[i]) == st.end()){
                st.insert(v[i]);
                cout<<v[i]<<nl;
            }
        }

    }      
    return 0;   
}