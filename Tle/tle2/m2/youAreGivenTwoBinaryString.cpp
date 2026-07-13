#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        string x,y;
        cin>>x>>y;

        int posX=0,posY=0;

        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        for(int i=0;i<y.size();++i){
            if(y[i] == '1'){
                posY=i;
                break;
            }
        }
        for(int i=posY;i<x.size();++i){
            if(x[i] == '1'){
                posX=i;
                break;
            }
        }
        cout<<posX-posY<<nl;

    }       
}