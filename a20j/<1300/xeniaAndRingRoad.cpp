#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(auto &el:v) cin>>el;
    ll house = 1;
    ll time = 0;

    for(int i=0; i<m; ++i){
        if(v[i] == house){
            continue;
        }
        else if(v[i] > house){
            time += v[i]-house;
            house = v[i];
        }
        else{
            time += n-house+1;
            time += v[i] - 1;
            house = v[i];
        }
    }
    cout<<time;
  
}