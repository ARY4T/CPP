#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> fuelStation(n);
        for(int i=0;i<n;++i){
            cin>>fuelStation[i];
        }
        int maxLen=0;
        int point=0;
        for(int i=0;i<n;++i){
            maxLen=max(maxLen,fuelStation[i]-point);
            point=fuelStation[i];
        }
        maxLen=max(maxLen,2*(x-point));
        cout<< maxLen<<nl;
    }      
    return 0;   
}