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


        map<int,int> mp;
        for(int i=0;i<n;i++){
            int j; cin>>j;
            mp[j] = i+1;
        }

        for(int i=1; i<=n; ++i){
            cout<<mp[i]<<" ";
        }
    }      
  
}