#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,m;cin>>n>>m;
        int sum = 0;
        int smallest = INT_MAX;
        int cnt = 0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int k;cin>>k;
                sum += abs(k);
                if(k < 0) cnt++;
                smallest = min(smallest, abs(k));
            }
        }

        if(cnt%2==1) sum -= 2*smallest;

        cout<<sum<<nl;
    }      
  
}