#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        if(n == 3) {
            cout<<"1 2 3"<<nl;
            continue;
        }

        vector<int> odd;
        vector<int> even;

        int el = 2;
        for(int i=0; i<n/2; ++i){
            even.push_back(el);
            odd.push_back(el+1);

            el+=2;
        }

        if((n/2)&1){
            int num = 1LL<<25;
            odd[odd.size()-1] ^= num;
            odd[odd.size()-1] ^= 1;
            odd[odd.size()-2] ^= num;
        }

        for(int i=0; i<n; ++i){
            if((n&1) && i == n-1) cout<<0;
            else if(i&1){
                cout<<odd[i/2]<<" ";
            }
            else cout<<even[i/2]<<" ";
        }
        cout<<nl;
    }      
  
}