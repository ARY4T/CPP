#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
       int N;string T;
       cin>>N>>T;
       
       int dir = 1;
       int x = 0, y = 0;
       for(int i=0;i<N;++i){
        if(T[i]=='R'){
            if(dir!=4) dir++;
            else dir = 1;
            continue;
        }
        else{
            if(dir==1) x++;
            else if(dir==2) y--;
            else if(dir==3) x--;
            else y++;
        }
       }
       cout<<x<<" "<<y;
    }      
    return 0;   
}