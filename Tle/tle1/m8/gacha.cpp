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
        set<string> st;
        while(n--){
            string s;cin>>s;
            st.insert(s);
        }
        cout<<st.size();
    }      
    return 0;   
}