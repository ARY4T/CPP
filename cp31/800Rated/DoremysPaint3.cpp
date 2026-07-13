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
       vector<int> arr(n);
       
       for(int i=0;i<n;++i) {
        cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int a = arr[0], b = arr[arr.size()-1];
        bool possible = true;
        int acnt = 0, bcnt = 0;
        for(auto el: arr){
            if(el != a && el != b){
                possible = false;
                continue;
            }
            if(el == a) acnt++;
            if(el == b) bcnt++;
        }
        if(acnt != bcnt && acnt != bcnt-1 && acnt-1 != bcnt) possible = false;
        if(possible) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
        
    }      
    return 0;   
}