#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int w,h;
        cin>>w>>h;
        int k1; cin>>k1;
        vector<int> xPointsBase(k1);
        for(auto &el:xPointsBase) cin>>el;

        int k2; cin>>k2;
        vector<int> xPointsTop(k2);
        for(auto &el:xPointsTop) cin>>el;

        int k3; cin>>k3;
        vector<int> yPointsLeft(k3);
        for(auto &el:yPointsLeft) cin>>el;

        int k4;cin>>k4;
        vector<int> yPointsRight(k4);
        for(auto &el:yPointsRight) cin>>el;

        ll maxArea = 0;

        maxArea = max(maxArea, (xPointsBase[k1-1] - xPointsBase[0])* 1LL*h);
        maxArea = max(maxArea, (xPointsTop[k2-1] - xPointsTop[0] )*1LL*h );
        maxArea = max(maxArea, (yPointsLeft[k3-1] - yPointsLeft[0]) *1LL *w) ;
        maxArea = max(maxArea, (yPointsRight[k4-1] -  yPointsRight[0])*1LL *w);

        cout<<maxArea<<nl;



    }      
    return 0;   
}