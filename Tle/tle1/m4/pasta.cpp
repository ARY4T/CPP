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
      map<int,int> noodlesHash;
      vector<int> mealPlan(m);
      for(int i=0;i<n;++i) {
        int length; cin>>length;
        noodlesHash[length]++;
    }
      for(int i=0;i<m;++i) cin>>mealPlan[i];
      bool canFollow = true;
      for(auto len:mealPlan){
        if(noodlesHash[len] != 0) noodlesHash[len]--;
        else{canFollow = false;
        break; 
       }
      }
      if(canFollow) cout<<"Yes";
      else cout<<"No";
    }      
    return 0;   
}