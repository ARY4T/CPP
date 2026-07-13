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

        vector<int> v(n);
        for(auto &el :v) cin>>el;

        multiset<int> stackHead;
        stackHead.insert(v[0]);

        for(int i=1;i<n;++i){
            if(v[i] >= *stackHead.rbegin()) stackHead.insert(v[i]);
            else{
                auto it = stackHead.upper_bound(v[i]);
                stackHead.erase(it);
                stackHead.insert(v[i]);
            }
        }
        cout<<stackHead.size()<<" ";
        for(auto el: stackHead){
            cout<<el<<" ";
        }
        cout<<nl;

    }      
    return 0;   
}