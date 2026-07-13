#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
        int n;cin>>n;
        vector<vector<int>> grid(n,vector<int>(n));
        for(int i=0;i<n;++i){
            string row;
            cin >> row;
            for(int j=0; j<n;++j){
                grid[i][j] = row[j]-'0';
            }            
        }
        int last=grid[1][0];
        int left=0,top=0,right=n-1,bottom=n-1;
            
        for(int i=left;i<=right;i++){
            int temp = grid[top][i];
            grid[top][i] = last;
            last = temp;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            swap(grid[i][right],last);
        }
        right--;
        for(int i=right;i>=left;i--){
            swap(grid[bottom][i],last);
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            swap(grid[i][left],last);
        }
        left++;
        
        for(auto row: grid){
            for(auto num: row){
                cout<<num;
            }
            cout<<endl;
        }
    }
                
}