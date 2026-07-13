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
        vector<ll> v(n);
        bool run = true;
        for(auto &el:v) {
            cin>>el;
            if(el == 0) {
                cout<<0<<nl;
                run = false;
            }
        }
        unsigned long long sum = 1;
        unsigned long long limit = 1000000000000000000;
        if(run){
            for(auto el:v) {
            if(sum != 0 && limit/sum < el){
                cout<<-1<<nl;
                run = false;
                break;
            }
            if(el == 0){
                cout<<0<<nl;
                run = false;
                break;
            }
            sum*=el;
            }
        } 
        

        if(run) cout<<sum<<nl;

    }      
    return 0;   
}