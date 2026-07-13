#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int helper(int node, string &s, vector<vector<int>> &child, int &cnt){

    int score = 0;
    score += (s[node-1] == 'B') ? 1 : -1;

    for(int i=0; i<child[node].size(); ++i){
        score += helper(child[node][i], s, child, cnt);
    }

    if(score == 0) cnt++;

    return score;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;

        vector<vector<int>> child(n+1);
        
        for(int i=2; i<=n; ++i){
            int el; cin>>el;
            child[el].push_back(i);
        }

        string s; cin>>s;

        int cnt = 0;

        helper(1, s, child, cnt);
        
        cout<<cnt<<nl;
    }      
}