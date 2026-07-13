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
        int cntOf2 = 0;
        for(auto &el:v) {
            cin>>el;
            if(el%2 == 0) cntOf2++;
        }
        if(cntOf2%2 == 1) cout<<-1<<nl;
        else{
            int target = 0;
            for(int i=0;i<n;++i){
                if(v[i] == 2){
                    target++;
                    if(target == cntOf2/2){
                        cout<<i+1<<nl;
                        break;
                    }
                }
            }
            if(cntOf2 == 0) cout<<1<<nl;
        }
    }      
    return 0;   
}