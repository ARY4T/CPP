#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, k;
        cin>>n>>k;

        vector<int> v(n);
        vector<int> cntLessThanK(k);

        int kCnt = 0;

        for(auto &el: v) {
            cin>>el;
            if(el<=k-1) cntLessThanK[el]++;
            else if(el == k) kCnt++;
        }

        int lessThanKCnt = 0;
        for(int i=0; i<k; ++i){
            if(!cntLessThanK[i]) lessThanKCnt++;
        }

        cout<<max(lessThanKCnt, kCnt)<<nl;
    }      
  
}