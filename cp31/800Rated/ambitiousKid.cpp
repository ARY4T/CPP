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
        vector<int> v(n);
        bool ansFound = false;
        for(auto &el:v){
            cin>>el;
            if(el == 0) ansFound = true;
        }
        int ops = 0;
        
        if(!ansFound){
            sort(v.begin(),v.end());
            auto it = lower_bound(v.begin(),v.end(),0);
            ll greaterClosest = INT_MAX;
            if(it != v.end()) greaterClosest = *it;

            ll lowerClosest = INT_MIN;
            if( it != v.begin()){
                lowerClosest = *(--it);
            }
            ops = min(greaterClosest,abs(lowerClosest));
        }
        cout<<ops;
    }      
    return 0;   
}