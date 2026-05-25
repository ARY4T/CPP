#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin>>s;
    bool magic = true;
    set<string> st = {"1", "14", "144"};
    int i=0;

    while(i<s.size()){
        string t = "";
        int c = 3;
        int p = i;
        while(p < s.size() && c--){
            t += s[p++];
        }

        if(t.size() == 3 && st.find(t) != st.end()){
            i += 3;
            continue;
        }
        t = string("") + t[0] + t[1];
        if(t.size()==2 && st.find(t) != st.end()){
            i += 2;
            continue;
        }

        t = t[0];
        if(st.find(t) != st.end()){
            i++;
            continue;
        }
        magic = false;
        break;
    }

    if(magic) cout<<"YES";
    else cout<<"NO";
  
}