#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    int x = 0;

    for(int i=0; i<n; ++i){
        string s; cin>>s;
        
        if(s[0] != '+' || s[0] != '-'){
            if(s[1] == '+') x++;
            else x--;
        }
        else{
            if(s[0] == '+') x++;
            else x--;
        }
    }
    cout<<x;
  
}