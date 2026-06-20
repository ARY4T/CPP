#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        string s; cin>>s;

        int streak = 1;
        bool dang = false;

        for(int i=1; i<s.size(); ++i){
            if(s[i] == s[i-1]) streak++;
            
            else streak = 1;

            if(streak == 7){
                dang = true;
                break;
            }
        }

        if(dang) cout<<"YES";
        else cout<<"NO";
         
  
}