#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    int m = n-1;

    vector<int> ans = {n};

    int ind = 1;

    while(m--){
        ans.push_back(ind++);
    }

    for(int i=0; i<ans.size(); ++i) cout<<ans[i]<<" ";
  
}