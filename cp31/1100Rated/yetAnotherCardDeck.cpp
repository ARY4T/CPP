#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int q{1};cin>>q;
    
    vector<pair<int, int>> v;
    vector<bool> seen(51, false);
    
    for(int i=1; i<=n; ++i){
        int col; cin>>col;
        if(!seen[col]){
            v.push_back({col, i});
            seen[col] = true;
        }
    }

    while(q--){
        int col; cin>>col;
        int currInd = -1;
        for(auto &[cCol, ind]: v){
            if(cCol == col){
                currInd = ind;
                break;
            }
        }
        
        cout<<currInd<<" ";

        for(auto &[cCol, ind]: v){
            if(cCol == col) ind=1;
            else if(ind<currInd) ind++;
        }
    }
}