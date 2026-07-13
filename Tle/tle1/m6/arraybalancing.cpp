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
        vector<int> a(n),b(n);
        for(int i=0;i<n;++i) cin>>a[i];
        for(int i=0;i<n;++i) cin>>b[i];
        for(int i=0;i<n;++i) if(a[i]>b[i]) swap(a[i],b[i]);
        ll sum=0;
        for(int i=0;i<n-1;++i) sum+=abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
        cout<<sum<<nl;
    }      
    return 0;   
}