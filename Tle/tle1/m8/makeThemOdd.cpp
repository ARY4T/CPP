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
        map<int,int, greater<int>> mpp;
        for(int i=0;i<n;++i){
            int num;cin>>num;
            mpp[num]++;
        } 
        ll moves = 0;

        for(auto &el:mpp){
            if(el.first % 2 == 0){
                mpp[el.first/2] += el.second;
                moves += 1;
            }
        }
        cout<<moves<<nl;
    }      
    return 0;   
}