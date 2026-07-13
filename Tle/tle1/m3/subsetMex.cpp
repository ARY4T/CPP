#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n; cin >> n;
        vector<int> set(n);
        vector<int> cnt(101);
        for(int i=0;i<n;++i){
            cin>>set[i];
            cnt[set[i]]++;
        }
        int mex1 = 0;
        while(cnt[mex1]>=1) mex1++;
        int mex2 = 0;
        while(cnt[mex2]>=2) mex2++;
        cout<<mex1+mex2<<endl;     
    }      
        
}