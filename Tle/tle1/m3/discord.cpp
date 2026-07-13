#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> grid(m,vector<int>(n));
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j) cin>>grid[i][j];
        }

        set<pair<int,int>> adjacent_pairs;
        for(int i=0;i<m;++i){
            for(int j=0;j<n-1;++j){
                int person1 = grid[i][j];
                int person2 = grid[i][j+1];

                if(person1 > person2) swap(person1,person2);
                adjacent_pairs.insert({person1,person2});
            }
        }
        int total_pairs = n*(n-1)/2;
        int bad_mood_pairs = total_pairs-adjacent_pairs.size();

        cout<<bad_mood_pairs<<nl;

    }      
    return 0;   
}