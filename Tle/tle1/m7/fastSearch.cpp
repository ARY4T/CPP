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
        for(auto &el:v) cin>>el;
        int k;cin>>k;

        sort(v.begin(),v.end());
        while(k--){
            int l,r;
            cin>>l>>r;
            int cnt = 0;
            auto i1 = lower_bound(v.begin(),v.end(),l);
            auto i2 = upper_bound(v.begin(),v.end(),r);
            cnt = i2 - i1;
            cout<<cnt<<" ";
        }
    }      
    return 0;   
}