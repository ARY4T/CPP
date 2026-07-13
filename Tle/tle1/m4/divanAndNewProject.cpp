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
        vector<pair<int,pair<int,int>>> freq(n);
        for(int i=0;i<n;++i) {
            cin>>freq[i].first;
            freq[i].second.first = i;
            freq[i].second.second = 0;
        }
        sort(freq.begin(),freq.end());
        reverse(freq.begin(),freq.end());
        ll time = 0;
        int pos = 1;
        int change = 0;
        vector<int> ans(n);
        for(auto &el:freq){
            time+=2LL*el.first*pos;
            if(change%2 == 0) el.second.second = pos;
            else el.second.second = -1*pos;
            change++;
            if(change%2==0) pos++;
        }
        cout<<time<<nl;
        sort(freq.begin(), freq.end(), [](const auto &a, const auto &b) {
        return a.second.first < b.second.first;
        });
        cout<<0<<" ";
        for(auto el:freq) cout<<el.second.second<<" ";
        cout<<nl;
    }      
    return 0;   
}