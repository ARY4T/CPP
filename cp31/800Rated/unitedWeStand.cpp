#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n;cin>>n;
        vector<int> v(n);
 
        for(auto &el:v) cin>>el;
        int last = v[0];
 
        bool isPossible = false;
        for(auto &el:v){
            if(el != last){
                isPossible = true;
                break;
            }
        }
        if(isPossible){
            vector<int> b;
            vector<int> c;
 
            sort(v.begin(), v.end());
            c.push_back(v[n-1]);
            int last = v[n-1];
 
            for(int i=n-2;i>=1; --i){
                if(v[i] == last) c.push_back(last);
                else break;
            }
 
            for(int i=0;i<n-c.size();++i){
                b.push_back(v[i]);
            }
            cout<<b.size()<<" "<<c.size()<<nl;
            for(auto el:b) cout<<el<<" ";
            cout<<nl;
            for(auto el:c) cout<<el<<" ";
            cout<<nl;
 
        }
        else cout<<-1<<nl;
        
        
 
    }      
    return 0;   
}
