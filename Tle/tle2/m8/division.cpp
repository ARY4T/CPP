#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll p, q;
        cin>>p>>q;

        if(p%q != 0) {
            cout<<p<<nl;
            continue;
        }
        ll nq = q;
        vector<int> primes;

        for(int i=2; i*i<=nq; ++i){
            if(nq%i == 0){
                primes.push_back(i);
                while(nq%i == 0){
                    nq /= i;
                }
            } 
        }

        if(nq > 1) primes.push_back(nq);

        ll removeFactor = 2e18;

        for(auto el:primes){
            ll nq = q, np = p;
            ll pf = 0, qf = 0;

            while(np%el == 0){
                np /= el;
                pf++;
            }

            while(nq%el == 0){
                nq /= el;
                qf++;
            }
            ll fcRem = pf-qf+1;
            ll val = 1;
            while(fcRem--){
                val *= el;
            }

            removeFactor = min(removeFactor, val);
        }

        cout<<p/removeFactor<<nl;
    }      
  
}