#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
        int H,W;
        cin>>H>>W;
        
        vector<vector<int>> grid1(H,vector<int>(W));
        for(int i=0;i<H;++i){
            string s;
            cin >> s;
            for(int j=0;j<W;++j){
                if(s[j]=='.') grid1[i][j] = 0;
                else grid1[i][j] = 1;
            }
        }

        vector<vector<int>> grid2(H,vector<int>(W));   
        for(int i=0;i<H;++i){
            string s;
            cin >> s;
            for(int j=0;j<W;++j){
                if(s[j]=='.') grid2[i][j] = 0;
                else grid2[i][j] = 1;
            }
        }

        for(int s=0;s<H;++s){
            for(int t=0;t<W;++t){
                bool run = true;
                for(int i=0;i<H;++i){
                    for(int j=0;j<W;++j){
                        if(grid1[i][j]!=grid2[(i+s)%H][(j+t)%W]){
                            run = false;
                            break;
                        }
                    }
                    if(!run) break;
                }
                if(run){
                    cout<<"Yes";
                    return 0;
                }
            }
        }
            
        
    cout<<"No";    
        

    }     
        
}