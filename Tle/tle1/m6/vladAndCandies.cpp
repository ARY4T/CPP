#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
       int n;cin>>n;
       vector<int> freq(n);
       for(int i=0;i<n;++i) cin>>freq[i];
       if(n==1 ){
        if(freq[0]>1) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
        continue;
       } 
       
       sort(freq.begin(),freq.end());
       if(freq[n-1]-freq[n-2]>1) cout<<"NO"<<nl;
       else cout<<"YES"<<nl;
    }      
    return 0;   
}