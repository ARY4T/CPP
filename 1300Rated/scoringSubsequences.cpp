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
        vector<int> v(n);

        for(auto &el:v) cin>>el;
        
        vector<int> ans;

        for(int i=0; i<n; ++i){
            int low = 1, high = i+1;
            int cost = 0;

            while(low<=high){   
                int mid = low + (high-low)/2;

                if(v[i - mid + 1] >= mid){
                    cost = mid;
                    low = mid+1;
                }
                else high = mid-1;
            }

            ans.push_back(cost);
        }

        for(int i=0; i<n; ++i){
            cout<<ans[i]<<" ";
        }

        cout<<nl;   

    }      
  
}