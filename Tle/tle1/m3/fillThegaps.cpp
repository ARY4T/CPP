#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        vector<int> ans;
        ans.push_back(v[0]);
        for(int i=0;i<n-1;++i){
            int current = v[i];
            int next = v[i+1];

            if(abs(current-next)>1){
                if(current < next){
                    for(int j=current+1; j<next; j++){
                        ans.push_back(j);
                    }
                }
                else{
                    for(int j=current-1;j>next; --j) ans.push_back(j);
                }
                
            }
            ans.push_back(next); 
        }
        for(auto num:ans){
            cout<<num<<" ";
        }

    }      
        
}