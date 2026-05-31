#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    
    map<string, int> score;

    while(n--){
        string s; cin>>s;
        score[s]++;
    }   

    int tgt = 0;
    string ans = "";

    for(auto el:score){
        if(el.second > tgt){
            ans = el.first;
            tgt = el.second;
        }
    }

    cout<<ans;
  
}