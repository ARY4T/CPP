#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
        int k,s;cin>>k>>s;
        int count=0;
        for(int i=0;i<=k;++i){
           for(int j=0;j<=k;++j){
            int z = s-i-j;
              if(z>=0&&z<=k) ++count;
           }
        }
        cout<<count;
    }      
        
}