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
        vector<int> a(n), b(n);

        for(int i=0; i<n; ++i) cin>>a[i];
        for(int i=0; i<n; ++i) cin>>b[i];

        vector<int> d(n); 
        for(int i=0; i<n; ++i){
            d[i] = a[i] - b[i];
        }

        int maxEl = INT_MIN;

        vector<int> strongVertex;

        for(int i=0; i<n; ++i){
            if(d[i] > maxEl){
                maxEl = d[i];
                strongVertex.clear();
                strongVertex.push_back(i+1);
            }
            else if(d[i] == maxEl) {
                strongVertex.push_back(i+1);
            }
        }

        cout<<strongVertex.size()<<nl;

        sort(strongVertex.begin(), strongVertex.end());

        for(int i=0; i<strongVertex.size(); ++i){
            cout<<strongVertex[i]<<" ";
        }
        cout<<nl;
    }      
  
}