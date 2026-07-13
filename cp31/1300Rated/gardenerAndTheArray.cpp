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

        unordered_map<int, int> frq;
        unordered_map<int, vector<int>> nums;

        int ind = 0;
        while(n--){

            int sets;
            cin>>sets;
            while(sets--){
                int el;
                cin>>el;

                nums[ind].push_back(el);
                frq[el]++;
            }
            ind++;
        }

        bool isPossible = false;

        for(auto [ind, v]:nums){
            bool possible = true;

            for(int i=0; i<v.size(); ++i){
                if(frq[v[i]] == 1) possible = false;
            }

            if(possible){
                isPossible = true;
                break;
            }
        }

        if(isPossible) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }      
  
}