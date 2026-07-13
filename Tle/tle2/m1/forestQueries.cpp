#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin>>n>>q;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        for(int j=0;j<n;++j){
            v[i][j] = 0;
            if(s[j] != '.') v[i][j] = 1;
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){

            if(j > 0) v[i][j] += v[i][j-1];

            if(i > 0) v[i][j] += v[i-1][j];

            if(i>0 && j>0) v[i][j] -= v[i-1][j-1];
        }
    }
  
    for(int i=0;i<q;++i){
        int y1,x1,y2,x2;
        cin>>x1>>y1>>x2>>y2;
        x1--;
        y1--;
        x2--;
        y2--;
        
        int countOfTrees = v[x2][y2];
        if(x1-1 >= 0){
            countOfTrees -= v[x1-1][y2];
        }
        if(y1-1 >=0) countOfTrees -= v[x2][y1-1];
        if(x1-1 >= 0 && y1-1 >= 0) countOfTrees +=v[x1-1][y1-1];

        cout<<countOfTrees<<nl;
    }
}