#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){

        int n; cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; ++i){
            cin>>v[i];
        }

        int cnt = 0;

        int ref1 = v[0];
        int ref2 = -1;
        int ind = n+1;

        for(int i=1; i<n; ++i){
            if(v[i]<=ref1) ref1 = v[i];
            else{
                ref2 = v[i];
                ind = i+1;
                break;
            }
        }

        for(int i=ind; i<n; ++i){
            if(v[i]<=ref1) {
                ref1 = v[i];
            }
            else if(v[i] <= ref2){
                ref2 = v[i];
            }
            else {
                ref1 = v[i];
                cnt++;
                swap(ref1, ref2);
            }
        }

        cout<<cnt<<nl;
        
    }      
  
}