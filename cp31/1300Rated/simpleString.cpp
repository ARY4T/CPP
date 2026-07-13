#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin>>s;
    int n = s.size();

    for(int i=1; i<n; ++i){

        if(s[i] == s[i-1]){
            if(s[i-1] != 'a'){
                if(i+1<n && s[i+1] != 'a'){
                    s[i] = 'a';
                }
                else {
                    if(s[i-1] != 'b')
                    s[i] = 'b';
                    else s[i] = 'c';
                }
            }
            else{
                if(i+1<n && s[i+1] != 'b'){
                    s[i] = 'b';
                }
                else {
                    s[i] = 'c';
                }
            }
            
        }

    }

    cout<<s;
  
}