#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n; cin>>n;
        vector<int> enter(n);
        vector<int> exit(n);

        for(int i=0; i<n; ++i) cin>>enter[i];
        for(int i=0; i<n; ++i) cin>>exit[i];

        int fined = 0;
        
        int ind = 0;
        set<int> st;

        for(int i=0; i<n; ++i){
            while(ind < n && st.find(enter[ind]) != st.end()){
                ind++;
            }
            if(enter[ind] == exit[i]){
                ind++;
            }
            else{
                st.insert(exit[i]);
                fined++;
            }
        }
      
        cout<<fined<<nl;
}