#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int x, y;
        cin>>x>>y;

        if(x<y){
            cout<<x<<" "<<y;
        }
        else {
            cout<<y<<" "<<x;
        }
        cout<<nl;
    }      
  
}