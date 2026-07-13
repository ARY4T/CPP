#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(auto &el:v) cin>>el;
        vector<int> queries(k);
        for(auto &el:queries) cin>>el;

        for(auto el:queries){
            if(el < v[0]) {
                cout<<0<<nl;
                continue;
            }
            int low = 0, high = v.size()-1;
            while(low<=high){
                int mid = (low+high)/2;

                if(v[mid] <= el) low = mid+1;
                else high = mid-1;
            }
            cout<<high+1<<nl;
        }
        
        
    }      
    return 0;   
}