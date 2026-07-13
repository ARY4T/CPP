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

        vector<pair<int,int>> ski;
        vector<pair<int,int>> movie;
        vector<pair<int,int>> board;

        for(int i=0; i<n; ++i) {
            int el;cin>>el;
            ski.push_back({el, i});
        }

        for(int i=0; i<n; ++i){
            int el; cin>>el;
            movie.push_back({el,i});
        } 
        for(int i=0; i<n; ++i){
            int el; cin>>el;
            board.push_back({el, i});
        }
        
        sort(ski.rbegin(), ski.rend());
        sort(movie.rbegin(), movie.rend());
        sort(board.rbegin(), board.rend());

        int ans = 0;

        for(int i=0; i<3; ++i){
            for(int j=0; j<3; ++j){
                for(int k=0; k<3; ++k){
                    int daySki = ski[i].second;
                    int dayMovie = movie[j].second;
                    int dayBoard = board[k].second;

                    if(daySki != dayMovie && dayMovie != dayBoard && dayBoard != daySki){
                        int currSum = ski[i].first + movie[j].first + board[k].first;
                        ans = max(ans, currSum);
                    }
                }
            }
        }

        cout<<ans<<nl;
        
    }      
  
}