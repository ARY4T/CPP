#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        int n,k; 
        cin>>n>>k;

        if(n<k) cout<<"NO"<<nl;
        else{
            int setBits = 0;
            vector<int> ans;
            for(int i=0; i<32; ++i){
                if(n&1<<i) {
                    setBits++;
                    ans.push_back(1<<i);
                }
            }
            if(setBits > k) cout<<"NO"<<nl;
            else{
                int size = setBits;
                int ind = 0;

                while(size<k){
                    while(ans[ind] != 1 && size<k){
                        ans[ind] /= 2;
                        size++;
                        ans.push_back(ans[ind]);
                    }
                    ind++;
                }
                cout<<"YES"<<nl;
                for(auto &el:ans) cout<<el<<" ";
                cout<<nl;
            }
        }
    }      
  
}