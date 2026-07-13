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
        vector<pair<int,int>> firstTwoMin;

        for(int i=0;i<n;++i){
            int m;cin>>m;
            vector<int> arr(m);
            for(int j=0;j<m;++j) cin>>arr[j];
            sort(arr.begin(),arr.end());
            firstTwoMin.push_back({arr[1],arr[0]});

        }
        sort(firstTwoMin.begin(),firstTwoMin.end());
        
        ll ans=0;
        int minInTrashArr = firstTwoMin[0].second;

        for(int i=1;i<n;++i){
            ans+=firstTwoMin[i].first;
            minInTrashArr= min(firstTwoMin[i].second,minInTrashArr);
        }
        ans+=minInTrashArr;
        cout<<ans<<nl;
    }      
    return 0;   
}