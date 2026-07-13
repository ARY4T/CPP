#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n;cin>>n;

        ll max = 0, min = 0;

        bool possible = 1;
        if(n<4) possible = false;
        if(n%4 == 0){
            max = n/4;
            min = (n%6 == 0)? n/6 : n/6+1;
        }
        else if(n%4 == 1 || n%4 == 3){
            possible = 0;
        }
        else if(n%4 == 2){
            if(n-6 < 0) possible = 0;
            max =  (1 + (n-6)/4);
            min = (n%6 == 0)? n/6:n/6+1;
        }


        if(possible){
            cout<<min<<" "<<max<<nl;
        }
        else cout<<-1<<nl;
    }      
  
}