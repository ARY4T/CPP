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

        vector<int> spend(n);
        vector<int> has(n);

        for(int &el:spend) cin>>el;
        for(int &el:has) cin>>el;

       vector<int> v(n);

        for(int i=0; i<n; ++i){
            v[i] = has[i]-spend[i];
        }

        sort(v.begin(), v.end());

        int l = 0, r = n-1;

        int days = 0;
        while(l<r){
            if(v[l]+ v[r] >= 0){
                days++;
                l++;
                r--;
            }
            else l++;
        }

        cout<<days<<nl;
    }      
}