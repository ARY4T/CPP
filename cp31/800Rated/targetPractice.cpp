#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int points = 0;
        vector<string> v(10);
        for(int i=0;i<10;++i){
            cin>>v[i];
        }
        for(int i=0;i<10;++i){
            for(int j=0;j<10;++j){
                if(v[i][j] != 'X') continue;
                else{
                    points += min({i+1,j+1,10-i,10-j});
                }
            }
        }

        cout<<points<<nl;
    }      
    return 0;   
}