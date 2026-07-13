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
        int k; cin>>k;

        unordered_map<int,int> mp;

        for(int i=0; i<n; ++i){
            int el; cin>>el;
            mp[el]++;
        }
        int score = 0;

        for(auto &[num, freq]:mp){
            int comp = k-num;
            if(num == comp){
                score += mp[num]/2;
            }
            if(mp.find(comp) != mp.end()){
                
                if(mp[comp] >= freq){
                    mp[comp]-=freq;
                    score += freq;
                    freq = 0;        
                }
                else{
                    freq -= mp[comp];
                    score+=mp[comp];
                    mp[comp] = 0;
                    
                }
                
            }
        }

        cout<<score<<nl;
    }      
  
}