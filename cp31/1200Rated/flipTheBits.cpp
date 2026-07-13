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
        string a; cin>>a;
        string b; cin>>b;

        int zeroes = 0, ones = 0;
        bool isPossible = true;
        int sameParity = true;;

        for(int i=0; i<n; ++i){
            if(a[i] == b[i]){
                if(!sameParity && zeroes!=ones){
                    isPossible = false;
                    break;
                }
                if(a[i] == '0') zeroes++;
                else ones++;
                sameParity = true;
            }
            else{
                if(sameParity && zeroes!=ones){
                    isPossible = false;
                    break;
                }
                if(a[i] == '0') zeroes++;
                else ones++;
                sameParity = false;
            }
        }
        
        if(!sameParity && zeroes != ones){
            isPossible = false;
        }
        if(isPossible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
  
}