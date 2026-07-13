#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int a,b,c;
        cin>>a>>b>>c;
        bool possible = false;
        
        if((a+c)%2 == 0){
            int newB = (a+c)/2;
            if(newB%b == 0){
                possible = true;
            }
        }

        int newA = 2*b - c;

        if(newA > 0 && newA %a == 0)
        possible  = true;

        int newC = 2*b - a;

        if(newC > 0 && newC%c == 0)
        possible = true;

        
        if(possible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl; 
    }      
  
}