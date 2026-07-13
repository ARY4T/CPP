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
        map<int,int> mpp;
        for(auto &el:v){
            cin>>el;
            mpp[el]++;
        }
        int ans = 0;
        for(auto &el:mpp){
            if(el.first == el.second) continue;
            else if(el.first > el.second) ans += el.second;
            else ans += el.second - el.first;
        }

        cout<<ans;
    }      
    return 0;   
}