#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        int n,m;
        cin>>n>>m;

        bool col = false;

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                char ch; cin>>ch;

                if(ch == 'C' || ch == 'M' || ch == 'Y') col = true;
            }
        }

        if(col) cout<<"#Color";
        else cout<<"#Black&White";
    }      
  
}