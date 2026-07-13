#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n;cin>>n;
        vector<int> v(n);
        for(auto &el:v)cin>>el;

        bool state1 = true;
        bool state2 = true;
        bool state3 = true;
        bool isModal = true;
        
        for(int i=1;i<n;++i){
            if(state1){
                
                if(v[i]>v[i-1]){
                    continue;
                }
                else if(v[i]<=v[i-1]) {
                    if(v[i]<v[i-1]) state2 = false;
                    state1 = false;
                    continue;
                }
                else {
                    isModal = false;
                    break;
                }
            }
            else if(state2){
                state1 = false;
                if(v[i]==v[i-1]){
                    continue;
                }
                else if(v[i]<v[i-1]) {
                    state2 = 0;
                    continue;
                }
                else {
                    isModal = false;
                    break;
                }
            }
            else if(state3){
                state2 = false;
                state1 = false;
                if(v[i]<v[i-1]) continue;
                else{
                    isModal = false;
                    break;
                }
            }
        }

        if(isModal) cout<<"YES";
        else cout<<"NO";
    }      
    return 0;   
}