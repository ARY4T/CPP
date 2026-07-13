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

        vector<ll> v(n);
        map<ll,ll> mpp;
        for(auto &el:v) {
            cin>>el;
            mpp[el]++;
        }

        sort(v.begin(),v.end());

        vector<ll> eligible; 
        for(auto [num, freq]:mpp){
            if(freq >= k) eligible.push_back(num);
        }

        if(eligible.empty()){
            cout<<-1<<nl;
        }
        else{
            int run = 1;
            int l=eligible[0],r=eligible[0];
            int left = -1,right = -1;
            for(int i=1;i<eligible.size();++i){
                if(eligible[i]-1 == eligible[i-1]){
                    if(left == -1) left = eligible[i]-1;
                    right = eligible[i];
                }
                else {
                    if(right-left > r-l){
                        l = left;
                        r = right;
                    }
                    left = -1;
                    right = -1;
                }
            }
            if(right-left > r-l){
                r = right;
                l = left;
            }
            cout<<l<<" "<<r<<nl;
        }
    }      
  
}