#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        map<char,int> mpp;
        int oddOcc = 0;
        for(int i=0;i<n;++i){
            mpp[s[i]]++;
        }

        for(auto const &[chr,val]:mpp){
            if(val%2 == 1) oddOcc++;
        }

        if(oddOcc > k+1) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;

        

    }      
    return 0;   
}