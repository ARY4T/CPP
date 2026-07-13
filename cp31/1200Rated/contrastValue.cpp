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
        vector<int> a(n);

        for(int &el:a) cin>>el;
        
        int ans = 1;
        int currDir = 0;

        for(int i=1; i<n; ++i){
            if(a[i] > a[i-1]){
                if(currDir != 1){
                    ans++;
                    currDir = 1;
                }
            }
            else if(a[i] < a[i-1]){
                if(currDir != -1){
                    ans++;
                    currDir = -1;
                }
            }
        }

        cout<<ans<<nl;
    }      
  
}