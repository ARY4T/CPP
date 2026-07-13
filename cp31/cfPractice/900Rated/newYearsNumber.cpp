#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        
        if(n%2020 == 0) {
                n = 0;
        }

        while(n >= 2021){
            n -= 2021;
            if(n%2020 == 0) {
                n = 0;
                continue;
            }
        }
        while(n >= 2020){
            n -= 2020;
        }

        cout<< (n==0?"YES":"NO")<<nl ;
    }      
  
}