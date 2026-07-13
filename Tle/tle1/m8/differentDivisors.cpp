#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> primes;
    for(int i=2;i<=90000;++i){
        int divisors = 0;
        bool isPrime = true;
        for(int j=1;j*j<=i;++j){
            if(i%j==0 && j*j == i) divisors++;
            if(i%j == 0) divisors+=2;
            if(divisors>2){
                isPrime = false;
                break;
            }
        }
        if(isPrime) primes.push_back(i);
    }
    int tc{1};cin>>tc;
    while(tc--){
        ll d;cin>>d;
        ll p = *lower_bound(primes.begin(),primes.end(),d+1);
        ll q = *lower_bound(primes.begin(),primes.end(),p+d);

        ll ans = min(1LL*p*p*p,1LL*p*q);
        cout<<ans<<nl;
    }      
    return 0;   
}