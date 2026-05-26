#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

struct el{
    int value;
    int row;
    int col;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> mat;
    
    auto comp = [](const el &a, const el &b){
        return a.value > b.value;
    };
        
    
    
    priority_queue<el, vector<el>, decltype(comp)> minHeap(comp);
    
    int n = mat.size(), m = mat[0].size();
    
    
    for(int i=0; i<n; ++i){
        minHeap.push({mat[i][0], i, 0});
    }

    vector<int> ans;

    while(!minHeap.empty()){
        
        el cur = minHeap.top();
        minHeap.pop();
        
        ans.push_back(cur.value);
        
        if(cur.col+1<m){
            minHeap.push({mat[cur.row][cur.col+1], cur.row, cur.col+1});
        }
        
    }     
  
}

