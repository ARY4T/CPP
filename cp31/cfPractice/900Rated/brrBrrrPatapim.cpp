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

        vector<vector<int>> v(n, vector<int> (n));

        vector<int> p(2*n);

        set<int> st;

        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cin>>v[i][j];
                st.insert(v[i][j]);
                p[i+j+1] = v[i][j];
            }
        }

        
        for(int i=0; i<2*n; ++i){
            if(p[i] == 0){
                for(int j=1; j<=2*n; ++j){
                    if(st.find(j) == st.end()){
                        p[i] = j;
                        st.insert(j);
                    }
                }
            }
        }
        
        for(int i=0; i<2*n; ++i){
            cout<<p[i]<<" ";
        }

        cout<<nl;
    }      
  
}