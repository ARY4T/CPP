#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

bool rangeAnd(int mid, int l, vector<int> &v, int k, vector<vector<int>> &prefixSum){
    int ans = 0;
    for(int i=0; i<31; ++i){
        
        if(prefixSum[i][mid+1] - prefixSum[i][l] == 0){
            ans |= (1<<i);
        }

    }
    if(ans >= k) return true;
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<int> a(n);

        for(int i=0; i<n; ++i) cin>>a[i];

        int q;
        cin>>q;

        vector<vector<int>> prefixSum(31, vector<int> (n+1));
        
        for(int i=0; i<31; ++i){
            for(int j=0; j<n; ++j){
                if((1<<i) & a[j]){
                    prefixSum[i][j+1] = prefixSum[i][j]; 
                }
                else prefixSum[i][j+1] = 1 + prefixSum[i][j];
            }
        }

        while(q--){
            int l, k;
            cin>>l>>k;
            l--;

            if(a[l] < k) {
                cout<<-1<<" ";
                continue;
            }


            int low = l, high = n-1;
            while(low<=high){
                int mid = (low+high)/2;

                if(rangeAnd(mid, l, a, k, prefixSum)){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }

            cout<<high+1<<" ";
        }
        cout<<nl;
    }      
  
}