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
        string s;cin>>s;
        bool ans = false;
        int index = -1;

        for(int i=0;i<n-1;++i){
            if(s[i] > s[i+1]){
                ans = true;
                index = i+1;
                break;
            }
        }

        if(ans){
            cout<<"YES"<<nl;
            cout<<index<<" "<<index+1;
        }
        else cout<<"NO"<<nl;
    }      
  
}